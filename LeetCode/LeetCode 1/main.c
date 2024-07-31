
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * mergeAlternately(char * word1, char * word2){
    int m = strlen(word1);
    int n = strlen(word2);
    char *result = malloc((m + n + 1) * sizeof(char));
    int i = 0, j = 0, k = 0;

    while (i < m || j < n) {
        if (i < m) {
            result[k++] = word1[i++];
        }
        if (j < n) {
            result[k++] = word2[j++];
        }
    }

    result[k] = '\0';
    return result;
}

int main() {

    char word1[100];
    char word2[100];

    printf("Introdu word1: ");
    fgets(word1,sizeof(word1),stdin);
    printf("Introdu word2: ");
    fgets(word2,sizeof(word2),stdin);
    char *merged = mergeAlternately(word1, word2);
    printf("Rezultatul este: %s\n", merged);
    free(merged);
    return 0;
}
