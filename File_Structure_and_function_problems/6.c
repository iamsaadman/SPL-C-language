#include <stdio.h>
#include <string.h>

// Book structure definition
struct Book {
    char title[100];
    char author[100];
    int isbn;
    int year;
};

// Function to search for all books by author
void searchByAuthor(struct Book books[], int numBooks, char searchAuthor[], struct Book results[]) {
    int i, j = 0;
    for (i = 0; i < numBooks; i++) {
        if (strcmp(books[i].author, searchAuthor) == 0) {
            results[j] = books[i];
            j++;
        }
    }
}
