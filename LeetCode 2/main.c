

int divides(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 % len2 != 0) return 0;
    for (int i = 0; i < len1; i++) {
        if (str1[i] != str2[i % len2]) return 0;
    }
    return 1;
}

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

char* gcdOfStrings(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int gcdLen = gcd(len1, len2);
    

    char* result = (char*) malloc((gcdLen + 1) * sizeof(char));
    strncpy(result, str1, gcdLen);
    result[gcdLen] = '\0';
    
   
    if (divides(str1, result) && divides(str2, result)) {
        return result;
    } else {
        free(result);
        return "";
    }
}

