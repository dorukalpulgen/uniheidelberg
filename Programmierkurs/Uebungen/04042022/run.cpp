#include <iostream>
#include <cmath>

/* Aufgabe 3.1
namespace power{
    int iterative(int q, int n){
        int result = 1;
        if(n != 0 && n > 0 && q > 0){
            for(int i = 1; i<=n; i++){
                result *= q;
            }
        }

        return result;
    }

    int recursive(int q, int n){
        if(n == 1){
            return 1;
        }
        else{
            return (q * power::recursive(q, n-1));
        }
    }
}

int main(){

    char option;
    int q,n;

    std::cout << "Iterative (i) oder Recursive (r): ";
    std::cin >> option;
    std::cout << "q: ";
    std::cin >> q;
    std::cout << "n: ";
    std::cin >> n;

    if(option == 'i'){
        std::cout << "Resultat: " << power::iterative(q, n) << std::endl;
    }
    else if(option == 'r'){
        std::cout << "Resultat: " << power::iterative(q, n) << std::endl;
    }

    return 0;
}
*/

/* Aufgabe 3.2
namespace power{
    double iterative(double q, int n){
        double result = 1;
        if(n != 0 && n > 0 && q > 0){
            for(int i = 1; i<=n; i++){
                result *= q;
            }
        }

        return result;
    }

    double root_iterative(double q, int n, int steps){
        double a[steps+1];
        a[0] = 1;
        for(int i = 0; i<steps; i++){
            a[i+1] =  a[i] + (1/ ((double) n)) * (((q) / ((double) power::iterative(a[i], n-1))) - a[i] );
        }

        return a[steps];
    }

    void test_root(double q, int n, int steps){
        double a;

        a = power::root_iterative(q, n, steps);
        double result = 1;
        int i = 0;
        while( i<n){
            result *= a; 
            i++;
        }

        std::cout << "-- Test Resultat -- " << std::endl;
        std::cout << "q: " << result << std::endl;
        std::cout << "n: " << i << std::endl;
        std::cout << "q - aN: " << q - result << std::endl;
    }

}

int main(){

    double q;
    int n, steps;

    std::cout << "q: ";
    std::cin >> q;
    std::cout << "n: ";
    std::cin >> n;
    std::cout << "steps: ";
    std::cin >> steps;

    std::cout << "a[" << steps << "] ist = " << power::root_iterative(q, n, steps) << std::endl;
    power::test_root(q, n, steps);

    return 0;
}
*/


/* Aufgabe 3.3 (a)
int main(){
    int i=5;
    int *pi, *pj;
    char *pc, pd;

    pi = i; //(a) = FALSCH
    pi = &i; //(b) = RICHTIG
    *pi = i; //(c) = FALSCH
    *pi = &i; //(d) = FALSCH
    pi = pj; //(e) = RICHTIG
    pc = &pd; //(f) = RICHTIG
    pi = pc; //(g) = FALSCH
    pd = *pi; //(h) = RICHTIG
    *pi= i**pc; //(i) = RICHTIG
    pi = 0; //(j) = RICHTIG
}
*/
