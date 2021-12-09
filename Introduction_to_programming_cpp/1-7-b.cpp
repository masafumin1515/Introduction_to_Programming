#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int n,x,i,j;
    int a,b,c,count;

    while(true){
        cin >> n >> x;
        count=0;
        if (n==0 && x==0) break;
        
        for(i=n;i>0;i--){
            c=i;
            for(j=c-1;j>0;j--){
                b=j;
                a=x-c-b;
                if(a<1) continue;
                if(a>=b) break;
                count++;
            }
            if(a>=c) break;
        }
        printf("%d\n",count);
        
    }
    
}