#include<iostream>

using namespace std;

int main(){
    int arr[3];
    int x,i;
    
    for(i=0;i<3;i++){
    cin >> arr[i];
    }

    do{
        for(i=0;i<2;i++){
            if(arr[i]>arr[i+1]){
                x=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=x;
            }
        }
        if(arr[0]<=arr[1] && arr[1]<=arr[2]){
            break;
        }   
    }while(1);
   
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

    return 0;

}
