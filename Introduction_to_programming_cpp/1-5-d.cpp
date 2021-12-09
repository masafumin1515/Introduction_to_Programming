/*
#include<iostream>

using namespace std;

int main(){

    int i,n,x,y;
    cin >> n;

    i=1;
    x=i;
    y=i;

    while(1){
        if(x%3==0){
            printf(" %d",x);
        }else{
            do{
                if(y%10==3){
                    printf(" %d",y);
                }
                y/=10;
            }while(y);
        }
        x++;
        y=x;
        if(x>n){
            break;
        }
    }

    printf("\n");

    return 0;
}

無理！ｗ

*/ 

#include <stdio.h>

using namespace std;

int main(){
	int n,x;
	scanf("%d",&n);

	for(int i = 1; i<= n; i++)
	{
		if(i%3 == 0){
			printf(" %d",i);
		}else{
			x = i;
			do{
				if(x%10 == 3){
					printf(" %d",i);
					break;
				}
				x /=10;
			}while(x);
		}
	}
	printf("\n");
}