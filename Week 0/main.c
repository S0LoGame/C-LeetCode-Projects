
// Exemplul 1

// #include <stdio.h>

// int main() {

//     int ages[5];
//     float avg, sum=0;
//     int lenght = sizeof(ages) / sizeof(ages[0]);

//     for (int i = 0; i < lenght; i++) {
//         printf("Introduceti varsta %d: ", i + 1);
//         scanf("%d", &ages[i]);
//         sum += ages[i];
//     }

//     avg=sum/lenght;
//     printf("Media de varsta este %.2f",avg);
// }

// Exemplul 2

// #include<stdio.h>

// int main() {
// //Un exemplu de afisare pentru o matrice

// //Obtinere dimensiuni matrice
// int linii,coloane;
// printf("Cate linii ai nevoie? ");
// scanf("%d", &linii);
// printf("Cate coloane ai nevoie? ");
// scanf("%d", &coloane);

// //Afisare matrice
// printf("Matricea ta are dimensiunea %d x %d\n",linii, coloane );

// //Creare si setare valori pentru matrice
// int matrice[linii][coloane];

// for(int i=0; i<linii;i++){
//     for(int j=0;j<coloane;j++)
//     {
//         printf("Valoarea pentru matrice[%d][%d] = ",i,j );
//         scanf("%d", &matrice[i][j]);
//     }
// }

// //Afisare matrice

// for(int i=0; i<linii;i++){
//     for(int j=0;j<coloane;j++)
//     {
//         printf("%d\t", matrice[i][j]);
//         if(j==coloane-1){
//             printf("\n");
//         }
//     }
// }

// }

// Exemplul 3

// Schimbare text in Uppercase ori in lowercase

#include<stdio.h>

int main() {

// Introducere si afisare nume
char nume[20];

printf("Care este numele tau? ");
fgets(nume, sizeof(nume),stdin);

printf("Numele tau este : ");
puts(nume);

//Schimbare in lowercase/uppercase

char optiune;
printf("Doresti sa schimbi numele in lowercase sau uppercase? (l/u) ");
scanf("%c", &optiune);

if(optiune=='l'){
    for(int i=0;nume[i]!='\0';i++){
        if(nume[i]>='A' && nume[i]<='Z'){
            nume[i]=nume[i]+32;
        }
    }
}
else if(optiune=='u'){
    for(int i=0;nume[i]!='\0';i++){
        if(nume[i]>='a' && nume[i]<='z'){
            nume[i]=nume[i]-32;
        }
    }
}

printf("Numele tau este: ");
puts(nume);

return 0;

}
