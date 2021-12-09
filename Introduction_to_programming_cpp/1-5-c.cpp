#include<iostream>

using namespace std;

int main(){

    int H,W;
    int i,j;

    while(cin >> H >> W && H!=0){
        for(i=0;i<H;i++){
            for(j=0;j<W;j++){
                if(i%2==0){
                    if(j%2==0){
                        printf("#");
                    }else{
                        printf(".");
                    }
                }else{
                    if(j%2==0){
                        printf(".");
                    }else{
                        printf("#");
                    }
                }
            }
            printf("\n");
        
        }
        printf("\n");
    }

    return 0;
}
