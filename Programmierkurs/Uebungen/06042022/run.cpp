#include <iostream>
#include <string>
#include <utility>
#include <map>

/* Aufgabe 5.1
int parse_int(std::string number){
    int totalSize = number.size(); // Total length
    int totalValidSize = number.size(); // Total number length
    int k = totalValidSize - 1; // Total 0s
    int result = 0, counter = 0;;
    bool negative = false;
    bool numberStarted = false;
    for(int i = 0; i<totalSize; i++){
        if(number[i] == '-'){ // If negative
            negative = true;
            i++;
            k--;
            totalValidSize--;
        }

        if(number[i] != '-'){
            char current = number[i];
            int currentNumber = current - '0';
            if(currentNumber >= 0 && currentNumber <= 9){ // If it's a valid number
                int times = 1;
                for (int a = k; a>0; a--){
                    times = times * 10;
                }
                result = result + (currentNumber * times);
                k--;
                counter++;
                numberStarted = true;
            }
            else if(currentNumber < 0 || currentNumber > 9){ // If it's not a valid number
                if(numberStarted == true){ // If the charachter comes after the number
                    int fazlalik = totalValidSize - counter;
                    int times = 1;
                    for(int a = fazlalik; a>0; a--){
                        times = times * 10;
                    }
                    result = result / times;
                    break;
                }
                else{
                    k--;
                    totalValidSize--;
                }

            }

        }

    }
    if(negative == true){ // If negative
        result -= 2 * result;
    }
    return result;
    
}



int main(){

    int result;
    std::string input;
    std::cout << "Enter the number: ";
    std::getline(std::cin,input); 
    result = parse_int(input);
    std::cout << result << std::endl;

    return 0;
}
*/


/* Aufgabe 5.2
 std::map<char,int> get_frequencies(){
    std::map<char,int> frequencies;
    while (true){
        unsigned char c;

        // read in character
        std::cin >> c;
        // abort if input closed
        if (not std::cin){
            std::cout << "End of input" << std::endl;
            return frequencies;
            break;
        }
        else{ // Input continues
            if(frequencies[c] == 0){ // If it's the first time
                frequencies[c] = 1;
            }
            else{
                frequencies[c] += 1;
            }
        }
    }
 }

 void print_frequencies(const std::map<char,int>& frequencies){
     for(auto x : frequencies){
         std::cout << x.first << ": " << x.second << std::endl;
     }
 }


int main(){
    std::map<char,int> frequencies = get_frequencies();
    print_frequencies(frequencies);


    
}
*/
