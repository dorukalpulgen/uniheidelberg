#include <iostream>
#include <cmath>


/* Aufgabe 2.1
void collatz(int number){
    while (number != 1 && number != 0 && number !=-1 && number != -5 && number != -17){
        if(number % 2 == 0){
            number = number / 2;
            std::cout << number << std::endl;

        }
        else{
            number *= 3;
            number += 1;
            std::cout << number << std::endl;
        }
    }
}

int main(){
    int number;

    std::cout << "Enter the number: ";
    std::cin >> number;
    std::cout << "Details:" << std::endl;
    collatz(number);
    return 0;
}
*/



/* Aufgabe 2.2
void fibonacci(int number){
    double fMinusTwo = 0;
    double fMinusOne = 1;
    double fCurrent = fMinusOne + fMinusTwo;

    if(number == 1){
        std::cout << "f" << number << " ist = " << fMinusTwo << std::endl;
    }
    else if(number == 2){
        std::cout << "f" << number << " ist = " << fMinusTwo << std::endl;
        std::cout << "f" << number << " ist = " << fMinusOne << std::endl;
    }
    else if(number <= 0){
        std::cout << "Integer muss positiv sein." << std::endl;
    }
    else{
        std::cout << "f1" << " ist = " << fMinusTwo << std::endl;
        std::cout << "f2" << " ist = " << fMinusOne << std::endl;
        for(int i = 3; i<=number; i++){
            fCurrent = fMinusOne + fMinusTwo;
            std::cout << "f" << i << " ist = " << fCurrent << std::endl;
            fMinusTwo = fMinusOne;
            fMinusOne = fCurrent;
        }
    }


}

int main(){
    int number;

    std::cout << "Please enter fN: ";
    std::cin >> number;
    fibonacci(number);
    return 0;
}
*/



/* Aufgabe 2.3
void rootFinder(double a, double b, double c){
    if(a == 0 && b == 0){
        std::cout << "Es gibt keine loesung." << std::endl;
    }

    double x1 = ( -b + std::sqrt(b * b - 4 * a * c) ) / 2 * a;
    double x2 = ( -b - std::sqrt(b * b - 4 * a * c) ) / 2 * a;
    std::cout << "x1 ist = " << x1 << std::endl;
    std::cout << "x2 ist = " << x2 << std::endl;
}

int main(){
    double a;
    double b;
    double c;

    std::cout << "ax2 + bx + c = 0" << std::endl;
    std::cout << "Please enter a: ";
    std::cin >> a;
    std::cout << "Please enter b: ";
    std::cin >> b;
    std::cout << "Please enter c: ";
    std::cin >> c;
    rootFinder(a, b, c);
    return 0;
}
*/


/* Aufgabe 2.4
int main(){

        for(int number = 2; number<=100; number++){
            bool primZahl = true;
            for(int i = 2; i<= (number/2); i++){
                if (number % i == 0){
                    primZahl = false;
                }
            }
            if(primZahl == true){
                std::cout << number << " ist eine Primzahl!" << std::endl;
            }
        }

}
*/
