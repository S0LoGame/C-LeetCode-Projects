#include <stdio.h>
#include <string.h>
#include <ctype.h>

void swap(char* a, char* b) {
	char temp = *a;
	*a = *b;
	*b = temp;
}

int isVowel(char c) {
	c = tolower(c);
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

char* reverseVowels(char* s) {
	int left = 0;
	int right = strlen(s) - 1;

	while (left < right) {
		while (left < right && !isVowel(s[left])) {
			left++;
		}
		while (left < right && !isVowel(s[right])) {
			right--;
		}
		if (left < right) {
			swap(&s[left], &s[right]);
			left++;
			right--;
		}
	}
	return s;
}

int main() {
	char s1[] = "hello";
	printf("Input: %s\nOutput: %s\n", s1, reverseVowels(s1));

	char s2[] = "leetcode";
	printf("Input: %s\nOutput: %s\n", s2, reverseVowels(s2));

	return 0;
}