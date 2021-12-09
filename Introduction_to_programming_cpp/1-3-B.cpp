/*
#include<iostream>

using namespace std;

int main(){

    int x;

    for(int i=0; ;i++){
        cin >> x;
        if(x == 0){
            break;
        }
        cout << "Case" << i+1 << ":" << x << endl;
    }


    return 0;
}

ダメでした。
*/

#include <iostream>
using namespace std;

int main(){
    int n,i=1;
    while(cin>>n && n!=0){
        cout << "Case " << i << ": " << n << endl;
        i++;
    }
    return 0;
}