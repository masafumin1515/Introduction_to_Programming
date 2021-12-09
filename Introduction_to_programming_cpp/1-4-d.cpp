#include<iostream>

using namespace std;

int main(){

    int i,n;
    long min,max,sum,x;
    cin >> n; 

    sum = 0;

    for(i=0;i<n;i++){
        cin >> x;
        if(i==0){
            min = x;
            max = x;
        }else if(x>=max){
            max = x;
        }else if(x<min){
            min = x;
        }

        sum = sum + x;
    }

    printf("%ld ""%ld " "%ld\n", min, max, sum);

    return 0;
}