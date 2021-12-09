#include<iostream>

using namespace std;

int main(){

    const double PI=3.141592653589;
    double r;
    cin >> r;
    
    printf("%.6f %.6f\n", PI*r*r, 2*PI*r);
    return 0;
}
