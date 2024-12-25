#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100

typedef struct
{
    char title[100];
    char author[100];
    int ISBN;
    int year;
} Book;

void display_book(Book book)
{
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("ISBN: %d\n", book.ISBN);
    printf("Year of publication: %d\n", book.year);
    printf("\n");
}

void read_books(Book books[], int *num_books, char *filename)
{
    FILE *fp;
    char line[256];
    char *token;

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: could not open file %s\n", filename);
        exit(1);
    }

    while (fgets(line, sizeof(line), fp))
    {
        // tokenize the line and store the fields in a new book structure
        Book book;
        token = strtok(line, ",");
        strcpy(book.title, token);
        token = strtok(NULL, ",");
        strcpy(book.author, token);
        token = strtok(NULL, ",");
        book.ISBN = atoi(token);
        token = strtok(NULL, ",");
        book.year = atoi(token);

        // add the book to the array
        books[*num_books] = book;
        (*num_books)++;
    }

    fclose(fp);
}

void display_books(Book books[], int num_books)
{
    for (int i = 0; i < num_books; i++)
    {
        display_book(books[i]);
    }
}

int cmpfunc(const void *a, const void *b)
{
    Book *book1 = (Book*)a;
    Book *book2 = (Book*)b;
    return strcmp(book1->title, book2->title);
}

void sort_books(Book books[], int num_books)
{
    qsort(books, num_books, sizeof(Book), cmpfunc);
}

void search_books_by_author(Book books[], int num_books, char *author, Book results[], int *num_results)
{
    for (int i = 0; i < num_books; i++)
    {
        if (strcmp(books[i].author, author) == 0)
        {
            results[*num_results] = books[i];
            (*num_results)++;
        }
    }
}

void write_books(Book books[], int num_books, char *filename)
{
    FILE *fp;

    fp = fopen(filename, "w");

    if (fp == NULL)
    {
        printf("Error: could not open file %s for writing\n", filename);
        exit(1);
    }

    for (int i = 0; i < num_books; i++)
    {
        fprintf(fp, "%s,%s,%d,%d\n", books[i].title, books[i].author, books[i].ISBN, books[i].year);
    }

    fclose(fp);
}

int main(int argc, char *argv[])
{
    char *input_file, *output_file;
    Book books[MAX_BOOKS];
    int num_books = 0;
    Book search_results[MAX_BOOKS];
    int num_results = 0;
    char search_author[100];

    if (argc != 3)
    {
        printf("Usage: ./book_manager input_file output_file\n");
        exit(1);
    }

    input_file = argv[1];
    output_file = argv[2];

    read_books(books, &num_books, input_file);

    printf("Original collection:\n");
    display_books(books, num_books);

    sort_books(books, num_books);
    printf("Sorted collection:\n");
    display_books(books, num_books);

    printf("Enter an author's name to search for: ");
    fgets(search_author, sizeof(search_author), stdin);
    search_author[strcspn(search_author, "\n")] = '\0'; // remove newline character from input

    search_books_by_author(books, num_books, search_author, search_results, &num_results);

    printf("Books by %s:\n", search_author);
    display_books(search_results, num_results);

    write_books(books, num_books, output_file);

    return 0;
}
