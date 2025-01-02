#include <stdio.h>

struct Movie {
    char title[100];
    char director[100];
    int release;
    float rating;
};

int main() {
    struct Movie movies[3];
    int i;
    for (i = 0; i < 3; i++) {
        printf("Enter details for movie %d:\n", i + 1);
        printf("Title: ");
        gets(movies[i].title);
        printf("Director: ");
        gets(movies[i].director);
        printf("Release Year: ");
        scanf("%d", &movies[i].release);
        printf("Rating: ");
        scanf("%f", &movies[i].rating);
    }
    printf("\nMovies released after the year 2000 with a rating above 8.0:\n");
    for (i = 0; i < 3; i++) {
        if (movies[i].release > 2000 && movies[i].rating > 8.0) {
            printf("Title: %s\n", movies[i].title);
            printf("Director: %s\n", movies[i].director);
            printf("Release Year: %d\n", movies[i].release);
            printf("Rating: %.1f\n\n", movies[i].rating);
        }
    }
    return 0;
}
