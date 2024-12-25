void write_books_to_file(struct book books[], int num_books, char *filename) {
    FILE *outfile = fopen(filename, "w");
    if (outfile == NULL) {
        printf("Error opening file %s for writing.\n", filename);
        return;
    }
    for (int i = 0; i < num_books; i++) {
        fprintf(outfile, "%s;%s;%d;%d\n", books[i].title, books[i].author, books[i].isbn, books[i].year);
    }
    fclose(outfile);
    printf("Successfully wrote book collection to %s.\n", filename);
}
