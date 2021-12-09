#include<iostream>

using namespace std;

int main(){

    int H,W;
    int i,j;

    while(cin >> H >> W && H!=0){
        for(i=0;i<H;i++){
            for(j=0;j<W;j++){
                printf("#");
            }
            printf("\n");
        }
        printf("\n");
    }


    return 0;
}