/*1002141462 Rohita*/
#include <iostream>
using namespace std;

/*Starts by encapsulating all of the calculations in one place*/
class Calculator{
    public:
        double add(double x, double y){
            return x + y;
        }
                double subtract(double x, double y){
            return x - y;
        }
                double multiplication(double x, double y){
            return x * y;
        }
                double division(double x, double y){
            return x / y;
        }

        double divide(double x, double y){
            if (y==0){
                cout <<"Invalid Operation"<< endl;
                return 0;
            }
            return x/y;
        }
};

int main(){
    /* creates an object for the above class and declares the variables*/
    Calculator calculator;
    double x, y;
    char symbol;
/*Prompts the user for feedback and gets input*/
    cout << "Enter the first number : ";
    cin>>x;
    cout << "Enter the symbol (+, -, *,/): ";
    cin>>symbol;
    cout << "Enter the second number : ";
    cin>>y;

    if (symbol=='+'){
        cout <<"result: " << calculator.add(x,y)<< endl;
    }else if (symbol=='-'){
        cout <<"result: " << calculator.subtract(x,y)<< endl;
    }else if (symbol=='/'){
        cout <<"result: " << calculator.division(x,y)<< endl;
    }else if (symbol=='*'){
        cout <<"result: " << calculator.multiplication(x,y)<< endl;
    }else {
        cout <<"Invalid operation"<< endl;
    }
    
    return 0;
}