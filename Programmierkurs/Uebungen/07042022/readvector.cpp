#include "io.hh"
#include "statistics.hh"

#include <iostream>
#include <random>
#include <string>


int main(){
    int K;
    std::vector<double> result = read_vector();
    std::cout << "Enter K: ";
    std::cin >> K;
    std::cout << "-- Results --" << std::endl;
    std::cout << "Mean: " << mean(result) << std::endl;
    std::cout << "Median: " << median(result) << std::endl;
    std::cout << "Moment: " << moment(result, K) << std::endl;
    std::cout << "Deviation: " << standard_deviation(result) << std::endl;
    return 0;
}

