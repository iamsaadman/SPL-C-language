#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100

typedef struct
{
    char title[100];
    char author[50];
    int year;
    int price;
    int quantity;
} book;

void add_book(book books[], int *num_books)
{
    if (*num_books >= MAX_BOOKS)
    {
        printf("Maximum number of books reached.\n");
        return;
    }

    char title[100];
    char author[50];
    int year;
    int price;
    int quantity;

    printf("Enter the title of the book: ");
    scanf("%s", title);
    printf("Enter the author of the book: ");
    scanf("%s", author);
    printf("Enter the year the book was published: ");
    scanf("%d", &year);
    printf("Enter the price of the book: ");
    scanf("%d", &price);
    printf("Enter the quantity of the book: ");
    scanf("%d", &quantity);

    book new_book;
    strcpy(new_book.title, title);
    strcpy(new_book.author, author);
    new_book.year = year;
    new_book.price = price;
    new_book.quantity = quantity;

    books[*num_books] = new_book;
    *num_books += 1;

    printf("Book added successfully!\n");
}

void display_book(book book)
{
    printf("%-30s%-20s%-10d%-10d%-10d\n", book.title, book.author, book.year, book.price, book.quantity);
}

void display_books(book books[], int num_books)
{
    printf("%-30s%-20s%-10s%-10s%-10s\n", "Title", "Author", "Year", "Price", "Quantity");
    for (int i = 0; i < num_books; i++)
    {
        display_book(books[i]);
    }
}

void save_books(book books[], int num_books)
{
    FILE *fp = fopen("books.txt", "w");
    if (fp == NULL)
    {
        printf("Failed to open books file for writing.\n");
        return;
    }

    for (int i = 0; i < num_books; i++)
    {
        fprintf(fp, "%s,%s,%d,%d,%d\n", books[i].title, books[i].author, books[i].year, books[i].price, books[i].quantity);
    }

    fclose(fp);
    printf("Books saved to file.\n");
}

int load_books(book books[])
{
    FILE *fp = fopen("books.txt", "r");
    if (fp == NULL)
    {
        printf("Failed to open books file for reading.\n");
        return 0;
    }

    int num_books = 0;
    char line[500];
    while (fgets(line, sizeof(line), fp))
    {
        char title[100];
        char author[50];
        int year;
        int price;
        int quantity;

        strcpy(title, strtok(line, ","));
        strcpy(author, strtok(NULL, ","));
        year = atoi(strtok(NULL, ","));
        price = atoi(strtok(NULL, ","));
        quantity = atoi(strtok(NULL, ","));

        book new_book;
        strcpy(new_book.title, title);
        strcpy(new_book.author, author);
        new_book.year = year;
        new_book.price = price;
        new_book.quantity = quantity;

        books[num_books] = new_book;
        num_books++;
    }

    fclose(fp);
    printf("Books loaded from file.\n");
    return num_books;
}
int main()
{
    book books[MAX_BOOKS];
    int num_books = 0;
    num_books = load_books(books);

    int choice;
    do
    {
        printf("\n========== Bookshop Inventory System ==========\n");
        printf("1. Add a book\n");
        printf("2. Display all books\n");
        printf("3. Save books to file\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add_book(books, &num_books);
            break;
        case 2:
            display_books(books, num_books);
            break;
        case 3:
            save_books(books, num_books);
            break;
        case 0:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    }
    while (choice != 0);

    return 0;
}
