#include<stdio.h>

int main(){
    printf("Podaj dwie liczby: \n");
    int a = 0;
    int b = 0;
    
    scanf("%d, %d" , &a, &b);


    printf("dodawanie: %d\n" , a+b);
    printf("odejmowanie: %d\n" , a-b);
    printf("mnożenie: %d\n" , a*b);
    printf("dzielenie: %d\n" , a/b);
    printf("reszta z dzielenia: %d\n" , a%b);
}
