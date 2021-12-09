#include<iostream>

using namespace std;

int main(){
    int i,count;
    int a,b,c,x;

    cin >> a >> b >> c;

    count=0;
    x=a;

    for(i=a;i<=b;i++){
        if(c%x == 0){
            count++;
        }        
        x++;        
    }
    cout << count << endl;
    
    return 0;
}