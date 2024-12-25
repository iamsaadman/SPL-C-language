#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100

struct book {
    char title[100];
    char author[100];
    int isbn;
    int year;
};

int read_books_from_file(char* filename, struct book* books) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: could not open file '%s' for reading.\n", filename);
        return 0;
    }

    int num_books = 0;
    char line[256];
    while (fgets(line, sizeof(line), file)) {
        if (num_books >= MAX_BOOKS) {
            printf("Error: too many books in file (max is %d).\n", MAX_BOOKS);
            break;
        }

        struct book new_book;
        sscanf(line, "%[^,],%[^,],%d,%d", new_book.title, new_book.author, &new_book.isbn, &new_book.year);
        books[num_books] = new_book;
        num_books++;
    }

    fclose(file);
    return num_books;
}
