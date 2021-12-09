#include<iostream>

using namespace std;

int main(){

    int a,b;
    double c,d;
    cin >> a >> b;
    c=a;
    d=b;

    printf("%d %d %.5f\n",(a/b),(a%b),c/d);
    return 0;
}
