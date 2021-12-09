#include<iostream>

using namespace std;

int main(){

    int H,W;
    int i,j;

    while(cin >> H >> W && H!=0){
        for(i=0;i<H;i++){
            if(i==0 || i==H-1){
                for(j=0;j<W;j++){
                    printf("#");
                }
            }else{
                for(j=0;j<W;j++){
                    if(j==0 || j==W-1){
                        printf("#");
                    }else{
                        printf(".");
                    }
                }
            }
                printf("\n");
        }
        printf("\n");
    }


    return 0;
}

/*

#include<iostream>
using namespace std;
int main(){
  int h,w;
  cin >> h >> w;
  while(h!=0){
    int i,j;
    for(i=0;i<h;i++){
      for(j=0;j<w;j++){
	if(i==0||i==h-1||j==0||j==w-1)
	  cout << "#";
	else cout << ".";
      }
      cout << endl;
    }
    cout << endl;
    cin >> h >> w;  /*ループかな？
  }
  return 0;
}

*/