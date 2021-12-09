#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int r,c,num;
    int i,j;
    scanf("%d %d",&r,&c);
    int A[r+1][c+1];

	for(i = 0; i < r+1; i++){
		for(j = 0; j < c+1; j++){
			A[i][j] = 0;
		}
	}
    
	for(i=0;i<r;i++){
    	for(j=0;j<c;j++){
	    	scanf("%d",&num);
		    A[i][j] = num;
	    }
	}

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            A[i][c]+=A[i][j];
        }
    }

    //列の足し算
    for(j=0;j<c+1;j++){
        for(i=0;i<r;i++){
            A[r][j]+=A[i][j];
        }
    }

    for(i=0;i<r+1;i++){
        for(j=0;j<c;j++){
            printf("%d ",A[i][j]);
        }
        printf("%d\n",A[i][c]);
    }    

}

/*

4 5
1 1 3 4 5
2 2 2 4 5
3 3 0 1 1
2 3 4 4 6

*/
