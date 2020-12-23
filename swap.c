//WAP in C to enter 2 numbers then swap the values using 3rd variable or without using 3rd variable

#include<stdio.h>

void nothirdm1();
void nothirdm2();
void thirdvar();

void main(){
    
    int a, b, c, method;
    printf("Enter 2 Numbers :-\n");

    printf("a = ");scanf("%d", &a);
    printf("b = ");scanf("%d", &b);

    printf("Choose the method:-\n 1. For No 3rd variable (type 1)\n 2. For No 3rd variable (type 2)\n 3. Using third variable\n");
    scanf("%d", &method);
    
    if(method == 1){
        nothirdm1(a,b);
    }else if(method == 2){
        nothirdm2(a,b);
    }else if(method == 3){
        thirdvar(a,b);
    }else{
        printf("\n\nWrong Input");
    }
}

//No third variable method 1
void nothirdm1(int a, int b){
    a = a*b;
    b = a/b;
    a = a/b;
    printf("\n\nSwapped values:-\na = %d\nb = %d", a, b);
}

//No third variable method 2
void nothirdm2(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n\nSwapped values:-\na = %d\nb = %d", a, b);
}

//Using a 3rd variable
void thirdvar(int a, int b){
    int c = a;a = b;b = c;
    printf("\n\nSwapped values:-\na = %d\nb = %d", a, b);
}