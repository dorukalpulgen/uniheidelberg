#include "io.hh"
#include "statistics.hh"

#include <iostream>
#include <random>
#include <string>


int main(){
    int N, K;
    double avg, std_dev;
    std::cout << "Enter N: ";
    std::cin >> N;
    std::cout << "Enter avg: ";
    std::cin >> avg;
    std::cout << "Enter std_dev: ";
    std::cin >> std_dev;
    std::cout << "Enter K: ";
    std::cin >> K;
    std::vector<double> result = normal_distribution(random_seed(), N, avg, std_dev);
    std::cout << "Mean: " << mean(result) << std::endl;
    std::cout << "Median: " << median(result) << std::endl;
    std::cout << "Moment: " << moment(result, K) << std::endl;
    std::cout << "Deviation: " << standard_deviation(result) << std::endl;
    return 0;
}

