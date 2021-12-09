#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int n,m,i,j,tmp;
    scanf("%d %d",&n,&m);
    int**A = new int*[n];

    
    for(i=0;i<n;i++) A[i]=new int[m];
    int b[m];
    long long int sum[n];

    for(i=0;i<n;i++) sum[i]=0;

	for(i=0;i<n;i++){
    	for(j=0;j<m;j++){
	    	scanf("%d",&tmp);
		    A[i][j] = tmp;
	    }
	}

	for(i=0;i<m;i++){
		scanf("%d",&tmp);
		b[i] = tmp;
	}

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            sum[i]+=A[i][j]*b[j];
        }
    } 

    for(i=0;i<n;i++) printf("%lld\n",sum[i]);


    for(int i = 0; i < n; i++){
		delete[] A[i];
	}
	delete A;

}


/*

3 4
1 2 0 1
0 3 0 1
4 1 1 0
1
2
3
0

*/