//1002141462 Rohita

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 /*checks if the input is valid*/
int valid(const char *str){
    int i= 0;
    if (str[i]=='-'){
        i++;
    }
    if (str[i]=='\0'){
        return 0;
    }
    for (; str[i]!='\0';i++){
        if (str[i]!= '.'&& (str[i]<'0'||str[i]>'9')){
            return 0;
        }
    }
    return 1;
}

double getnum(const char *param){
    char input[25];
    while(1){
        printf("%s",param);
        scanf("%s", input);
        if(valid(input)){
            return atof(input);
        } 
        printf("Invalid input, please enter a new number : \n");
    }
}

char inputSymbol(){
    char input;
    while(1){
        printf("Enter the symbol (+, -, *,/): ): ");
        scanf(" %c", &input);
        if(input =='+'||input =='-'||input =='*'||input =='/') {
            return input;
        }
        printf("invalid input, enter a symbol: \n");
    }
}



// int main(){
//     double x,y, total;
//     char symbol, inputa[25], inputb[25];
//     Printf("Welcome to the calculator. \n");
//     printf("Enter the first number: ");
//     scanf("%lf" &x);
//     printf("Enter the symbol (+, -, *,/): ): ");
//     scanf("%c" &symbol);
//     printf("Enter the second number: ");
//     scanf("%lf" &y);

//     if(symbol==+){
//         return a + y;
//     }else if(symbol == -){
//         return a + y;
//     }else if(symbol == *){
//         return a * y;
//     }else if(symbol == /){
//         if(b==0){
//             printf("Unvalid");
//             return 1;
//         }else{
//             return a / y;
//         }

//     }else{
//         printf("invalid calculation");
//         return 1;
//     }
//     printf("Result: %.2f\n", total);
//     return 0;


double add(double x, double y){
    return x+y;
}

double subtract(double x, double y){
    return x-y;
}
double multiply(double x, double y){
    return x*y;
}
double divide(double x, double y){
    if(y==0){
            printf("Unvalid");
            return 0;
        }else{
             return x / y;
        }
    }

//combines the functions and input with parameters to find the total
void calculate(double x, char symbol, double y){
    double total;
    if (symbol == '+'){
        total= add(x,y);
    }else if (symbol == '-'){
        total= subtract(x,y);
    }else if (symbol == '*'){
        total= multiply(x,y);
    }else if (symbol == '/'){
        total= divide(x,y);
    } else{
        printf("Invalid\n");
        return;
    }
    printf("Result: %.2f\n", total);
}

int main(){
    //gets user input and calls all the functions
    printf("Welcome to the calculator. \n");
    double x = getnum("Enter the first number: ");
    char symbol= inputSymbol();
    double y = getnum("Enter the second number: ");
    calculate (x,symbol, y);
    return 0;
}




