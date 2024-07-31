#include <stdbool.h>
#include <stdio.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    for (int i = 0; i < flowerbedSize && n > 0; i++) {
        if (flowerbed[i] == 0 && 
            (i == 0 || flowerbed[i - 1] == 0) && 
            (i == flowerbedSize - 1 || flowerbed[i + 1] == 0)) {
            flowerbed[i] = 1;
            n--;
            i++; // Sărim peste următoarea parcelă
        }
    }
    return n <= 0;
}

// Exemplu de utilizare
#include <stdbool.h>
#include <stdio.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    for (int i = 0; i < flowerbedSize && n > 0; i++) {
        if (flowerbed[i] == 0 && 
            (i == 0 || flowerbed[i - 1] == 0) && 
            (i == flowerbedSize - 1 || flowerbed[i + 1] == 0)) {
            flowerbed[i] = 1;
            n--;
            i++;
        }
    }
    return n <= 0;
}

