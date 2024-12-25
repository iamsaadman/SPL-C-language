void sortBooksByTitle(struct book *books, int numBooks) {
    int i, j;
    struct book temp;

    // Sort the books using bubble sort
    for (i = 0; i < numBooks - 1; i++) {
        for (j = 0; j < numBooks - i - 1; j++) {
            if (strcmp(books[j].title, books[j+1].title) > 0) {
                // Swap the books if they are out of order
                temp = books[j];
                books[j] = books[j+1];
                books[j+1] = temp;
            }
        }
    }
}
