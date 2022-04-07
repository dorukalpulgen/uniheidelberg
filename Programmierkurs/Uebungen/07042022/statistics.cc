
double mean(const std::vector<double>& v){
    int n = v.size();
    double sum = 0;
    for(int i = 0; i<v.size(); i++){
        sum += v[i];
    }
    sum = (double) sum * (1/(double)n);
    return sum;    
}
double meanDeviation(const std::vector<double>& v, double u){
    int n = v.size();
    double sum = 0;
    for(int i = 0; i<v.size(); i++){
        sum += std::pow((v[i] - u), 2);
        }
    sum = (double) sum * (1/(double)n);
    return sum;
}

double median(const std::vector<double>& v){
    int size = v.size();
    int index = v.size() - 1;
    if(size % 2 == 0){ //Ob gerade
        double result;
        result = (double)1/2 * (v[index/2] + v[(index/2 + 1)]);
        return result;
    }
    else if(size % 2 != 0){
        return v[(index+1)/2 ];
    }
}

double moment(const std::vector<double>& v, int k){
    int n = v.size();
    double sum = 0;
    for(int i = 0; i<v.size(); i++){
        sum += std::pow(v[i], k);
    }
    sum = (double) sum * (1/(double)n);
    return sum;
}

double standard_deviation(const std::vector<double>& v){
    double u = mean(v);
    double sum = meanDeviation(v, u);
    int n = v.size();
    double s = std::sqrt((1/((double) (n-1))) * sum);
    return s;
}