#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverse(char** words, int start, int end) {
    while (start < end) {
        char* temp = words[start];
        words[start] = words[end];
        words[end] = temp;
        start++;
        end--;
    }
}

char* reverseWords(char* s) {
    int len = strlen(s);
    char* result = (char*)malloc(len + 1);
    char* word;
    char* words[len];
    int wordCount = 0;

    // Split the string into words
    word = strtok(s, " ");
    while (word != NULL) {
        words[wordCount++] = word;
        word = strtok(NULL, " ");
    }

    // Reverse the order of words
    reverse(words, 0, wordCount - 1);

    // Join the words with a single space
    result[0] = '\0';
    for (int i = 0; i < wordCount; i++) {
        strcat(result, words[i]);
        if (i < wordCount - 1) {
            strcat(result, " ");
        }
    }

    return result;
}

int main() {
    char s1[] = "the sky is blue";
    printf("Input: \"%s\"\nOutput: \"%s\"\n", s1, reverseWords(s1));

    char s2[] = "  hello world  ";
    printf("Input: \"%s\"\nOutput: \"%s\"\n", s2, reverseWords(s2));

    char s3[] = "a good   example";
    printf("Input: \"%s\"\nOutput: \"%s\"\n", s3, reverseWords(s3));

    return 0;
}