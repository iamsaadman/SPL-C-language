void display_collection(struct book books[], int num_books) {
    for(int i = 0; i < num_books; i++) {
        printf("Book %d:\n", i+1);
        display_book(books[i]);
        printf("\n");
    }
}
