#include <iostream>
#include <vector>
#include <cmath>

double mean(std::vector<double> data){
	int size = data.size();
	double sum = 0;
	for (std::vector<double>::iterator it = data.begin(); it != data.end(); ++it) {
        sum = sum + *it;
    }
	return sum/size;
}

double stddev(std::vector<double> data){
	int size = data.size();
	double sum = 0;
	double average = mean(data);
	for (std::vector<double>::iterator it = data.begin(); it != data.end(); ++it) {
        sum = sum + std::pow(*it-average,2);
    }
	return std::pow(sum/size,0.5);
}

int main() {
	
	std::vector<double> vector1;
	vector1.push_back(1.5);
	vector1.push_back(2.5);
	vector1.push_back(3.5);
	vector1.push_back(4.5); 
	vector1.push_back(5.5);
	
	std::cout << mean(vector1) << "\n";
	std::cout << stddev(vector1) << "\n";
	
	return 0;
}
