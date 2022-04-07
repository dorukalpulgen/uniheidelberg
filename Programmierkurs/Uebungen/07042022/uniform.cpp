#include "io.hh"
#include "statistics.hh"

#include <iostream>
#include <random>
#include <string>


int main(){
    int N, K;
    double min, max;
    std::cout << "Enter N: ";
    std::cin >> N;
    std::cout << "Enter min: ";
    std::cin >> min;
    std::cout << "Enter max: ";
    std::cin >> min;
    std::cout << "Enter K: ";
    std::cin >> K;
    std::vector<double> result = uniform_distribution(random_seed(), N, min, max);
    std::cout << "-- Results --" << std::endl;
    std::cout << "Mean: " << mean(result) << std::endl;
    std::cout << "Median: " << median(result) << std::endl;
    std::cout << "Moment: " << moment(result, K) << std::endl;
    std::cout << "Deviation: " << standard_deviation(result) << std::endl;
    return 0;
}

