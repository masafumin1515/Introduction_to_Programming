#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int m,f,r,score;
    char grade;

    while(true){
        cin >> m >> f >> r;
        if(m == -1 && f == -1 && r == -1){
            break;
        }
        
        if(m == -1 || f == -1){
            grade = 'F';
        }else{
            score=m+f;
            if(score >= 80){
                grade = 'A';
            }else if(score >= 65){
                grade = 'B';
            }else if(score >= 50){
                grade = 'C';
            }else if(score >= 30){
                if(r >= 50){
                    grade = 'C';
                }else{
                    grade = 'D';
                }
            }else if(score < 30 ){
                grade = 'F';
            }

        }

        printf("%c\n",grade);

    } 
    return 0;
}
