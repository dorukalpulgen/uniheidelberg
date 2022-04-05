#include <iostream>
#include <vector>
#include <utility>

/* Aufgabe 4.2 (a)
int main(){
    std::vector<double> v2(10);

    for(int i = 0; i<v2.size(); i++){
        std::cout << v2[i] << std::endl; // Es gibt fur die Eintrage, die keinen expliziten Wert angegeben werden,  "0" aus.
    }
    return 0;
}
*/


/* Aufgabe 4.2 (b)
std::pair<int,int> minMax(std::vector<double> vector){
    double temp = 0;
    double min, max;
    int i = 0;
    for (i = 0; i<vector.size(); i++){
        if(vector[i] > temp){
            temp = vector[i];
        }
    }
    max = temp;
    for (i = 0; i<vector.size(); i++){
        if(vector[i] < temp){
            temp = vector[i];
        }
    }
    min = temp;
    std::cout << min << std::endl;

    return std::make_pair(min, max);

}

int main(){
    std::vector<double> v2(10);

    for(int i = 0; i<v2.size(); i++){ // Randomize
        v2[i] = rand() % 1000;
    }

    std::cout << "Randomized vector: " << std::endl;
    for(int i = 0; i<v2.size(); i++){
        std::cout << v2[i] << std::endl;
    }

    std::pair<int,int> pair = minMax(v2);
    std::cout << "Max: " << pair.first << std::endl;
    std::cout << "Min: " << pair.second << std::endl;
    return 0;
}
*/



/* Aufgabe 4.2 (c)
std::vector<double> reversed(const std::vector<double>& v){
    int k;
    std::vector<double> vCopy(v.size());
    for(int i = v.size()-1; i>=0; i--){
        k = vCopy.size()-i-1;
        vCopy[k] = v[i];
    }
    return vCopy;
}
int main(){
    std::vector<double> v(10);

    int i;
    for(i = 0; i<v.size(); i++){ // Randomize
        v[i] = rand() % 1000;
    }
    std::cout << "Randomized vector: " << std::endl;
    for(i = 0; i<v.size(); i++){
        std::cout << i+1 << ": " << v[i] << std::endl;
    }
    v = reversed(v);
    std::cout << "Reversed vector: " << std::endl;
    for(i = 0; i<v.size(); i++){
        std::cout << i+1 << ": " << v[i] << std::endl;
    }
    return 0;
}
*/
