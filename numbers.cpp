#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

void print(std::vector<int> vect) { 
    for(int i=0; i<vect.size(); i++) {
        std::cout << vect[i] << std::endl;
    }
}

std::vector<int> common(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    for(int i=0; i<a.size(); i++) {
        if (std::find(b.begin(), b.end(), a[i]) != b.end()) {
            result.push_back(a[i]);
        }
    }
    return result;
}

int main() {
    std::cout << "number: ";
    int p;
    std::cin >> p;
    std::cout << "number: ";
    int q;
    std::cin >> q;
    int input = (p-1) * (q-1);

    std::cout << "number: ";
    int second;
    std::cin >> second; 

    std::vector<int> pq;
    for(int i=2; i<input; i++) {
        if(input % i == 0) {
            pq.push_back(i);
        }
    }

    std::vector<int> factor;
    for(int i=2; i<second; i++) {
        if(second % i == 0) {
           factor.push_back(i);
        }
    }

    print(common(pq, factor));

    /*print(pq);
    std::cout << "\n\n" << std::endl;
    print(factor);*/
}
