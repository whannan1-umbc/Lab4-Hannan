//  gcc -no-pie Sum.s Read.c -o lab4
// ./lab4 data.txt

#include <stdio.h>
#include <stdlib.h>

extern int Sum(int *arr, int n );

int main(int argc, char *argv[]){
   
    FILE * givfile = fopen(argv[1], "r");

    int n;
    fscanf(givfile, "%d", &n);

    int *array = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        fscanf(givfile, "%d", &array[i]);
    }

    fclose(givfile);

    int result = Sum(array, n);

    printf("Sum = %d\n", result);

    free(array);
    return 0;

}