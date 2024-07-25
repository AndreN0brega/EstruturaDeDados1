#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
 
void insertionSort(int ar[],int n){
    int aux, i, j;

    for(i = 1; i < n; i++){
        aux = ar[i];
        j = i - 1;
        while(j >= 0 && ar[j] > aux){
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1] = aux;
    }
 }

#define MAX 100000

void leArrayDoArquivo(const char *filename, int ar[], int *n) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Failed to open file");
        exit(EXIT_FAILURE);
    }

    *n = 0;
    while (fscanf(file, "%d", &ar[*n]) != EOF && *n < MAX) {
        (*n)++;
    }
    fclose(file);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return EXIT_FAILURE;
    }

    int ar[MAX];
    int n;
    clock_t start, end;
    double time = 0;

    leArrayDoArquivo(argv[1], ar, &n);

    int ar2[MAX];
    memcpy(ar2, ar, n * sizeof(int));

    start = clock();

    insertionSort(ar2, n);
    end = clock();
    time = ((double) (end - start)) / (double)CLOCKS_PER_SEC;
    
    printf("Insertion Sort\n");
    printf("Time: %f seconds\n", time);

    return 0;
}