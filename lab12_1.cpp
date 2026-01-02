#include<iostream>
#include<ctime>
using namespace std;

unsigned long long int fibonacci(unsigned long long int x);


int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}

unsigned long long int fibonacci(unsigned long long int x){
    if (x==0) return 0;
    else if (x==1) return 1;
    else if(x >= 0) {
        unsigned long long int y = fibonacci(x-1) + fibonacci(x-2);
        return y;
    }
}

