#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int n,m,l;
    scanf("%d %d %d",&n,&m,&l); 
    int i,j,k;
    int A[n][m],B[m][l]; //配列の要素数先にscanfしておかないといけない！！！
    long long C[n][l]; //何かわからんけど行列の出力はlong long 精度！！

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            A[i][j]=0;
        }
    }
    
    for(i=0;i<m;i++){
        for(j=0;j<l;j++){
            B[i][j]=0;
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            C[i][j]=0;
        }
    }


    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&A[i][j]);
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<l;j++){
            scanf("%d",&B[i][j]);
        }
    }



    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            for(k=0;k<m;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }



    for(i=0;i<n;i++){
        for(j=0;j<l-1;j++){
            printf("%lld ",C[i][j]);
        }
        printf("%lld\n",C[i][l-1]);
    }

}

/*
3 2 3
1 2
0 3
4 5
1 2 1
0 3 2
*/