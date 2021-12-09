#include<iostream>

using namespace std;

int main(){
    int n,i;
    cin >> n;
    int arr[n];

    for(i=0;i<n;i++){
        cin >> arr[i];
    }

    for(i=n-1;i>0;i--){
        printf("%d ",arr[i]);
    }
    printf("%d\n",arr[0]);
        
    return 0;
}