#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_AUTHORS 50

struct author {
    char name[50];
    char email[50];
};

struct book {
    char title[50];
    struct author author;
    int year;
    float price;
};

struct library {
    struct book books[MAX_BOOKS];
    int count;
    struct author authors[MAX_AUTHORS];
    int author_count;
};

void add_book(struct library *lib);
void display_books(struct library lib);
void search_books(struct library lib);
void add_author(struct library *lib);
void display_authors(struct library lib);

int main() {
    int choice;
    struct library lib = { .count = 0, .author_count = 0 };

    while (1) {
        printf("\n");
        printf("1. Add book\n");
        printf("2. Display books\n");
        printf("3. Search books\n");
        printf("4. Add author\n");
        printf("5. Display authors\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_book(&lib);
                break;
            case 2:
                display_books(lib);
                break;
            case 3:
                search_books(lib);
                break;
            case 4:
                add_author(&lib);
                break;
            case 5:
                display_authors(lib);
                break;
            case 6:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice! Please enter a number between 1 and 6.\n");
                break;
        }
    }
}

void add_book(struct library *lib) {
    struct book b;

    printf("Enter book title: ");
    scanf("%s", b.title);

    printf("Enter author name: ");
    scanf("%s", b.author.name);

    printf("Enter author email: ");
    scanf("%s", b.author.email);

    printf("Enter publication year: ");
    scanf("%d", &b.year);

    printf("Enter price: ");
    scanf("%f", &b.price);

    lib->books[lib->count++] = b;
    printf("Book added successfully!\n");
}

void display_books(struct library lib) {
    int i;

    printf("Total books: %d\n", lib.count);

    for (i = 0; i < lib.count; i++) {
        printf("Title: %s\n", lib.books[i].title);
        printf("Author: %s (%s)\n", lib.books[i].author.name, lib.books[i].author.email);
        printf("Year: %d\n", lib.books[i].year);
        printf("Price: %.2f\n\n", lib.books[i].price);
    }
}

void search_books(struct library lib) {
    char keyword[50];
    int i, found = 0;

    printf("Enter search keyword: ");
    scanf("%s", keyword);

    for (i = 0; i < lib.count; i++) {
        if (strstr(lib.books[i].title, keyword) != NULL || strstr(lib.books[i].author.name, keyword) != NULL) {
            printf("Title: %s\n", lib.books[i].title);
            printf("Author: %s (%s)\n", lib.books[i].author.name, lib.books[i].author.email);
            printf("Year: %d\n", lib.books[i].year);
            printf("Price: %.2f\n\n");
found = 1;
}
}
if (!found) {
    printf("No results found.\n");
}


void add_author(struct library *lib) {
struct author a;
printf("Enter author name: ");
scanf("%s", a.name);

printf("Enter author email: ");
scanf("%s", a.email);

lib->authors[lib->author_count++] = a;
printf("Author added successfully!\n");
}

void display_authors(struct library lib) {
int i;
}

printf("Total authors: %d\n", lib.author_count);

for (i = 0; i < lib.author_count; i++) {
    printf("Name: %s\n", lib.authors[i].name);
    printf("Email: %s\n\n", lib.authors[i].email);
}
}
// End of code
