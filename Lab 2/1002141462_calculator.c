#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int isValid(const char *str){
    int i= 0;
    
}

int main(){
    double x,y, total;
    char symbol, inputa[25], inputb[25];
    Printf("Welcome to the calculator. \n");
    printf("Enter the first number: ");
    scanf("%lf" &x);
    printf("Enter the symbol (+, -, *,/): ): ");
    scanf("%c" &symbol);
    printf("Enter the second number: ");
    scanf("%lf" &y);

    if(symbol==+){
        return a + y;
    }else if(symbol == -){
        return a + y;
    }else if(symbol == *){
        return a * y;
    }else if(symbol == /){
        if(b==0){
            printf("Unvalid");
            return 1;
        }else{
            return a / y;
        }

    }else{
        printf("invalid calculation");
        return 1;
    }
    printf("Result: %.2f\n", total);
    return 0;



}