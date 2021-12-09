// #include <stdio.h>

// using namespace std;

// void output(int H[3][10]){
// 	for(int i = 0; i < 3; i++){
// 		for(int j = 0; j < 10; j++){
// 			printf(" %d",H[i][j]);
// 		}
// 		printf("\n");
// 	}
// }


// int main(){
// 	int H1[3][10],H2[3][10],H3[3][10],H4[3][10],n,h_num,f_num,r_num,div_num;
// 	for(int i = 0; i < 3; i++){
// 		for(int j = 0; j < 10; j++){
// 			H1[i][j] = H2[i][j] = H3[i][j] = H4[i][j] = 0;
// 		}
// 	}
// 	scanf("%d",&n);
// 	for(int i = 0; i < n; i++){
// 		scanf("%d %d %d %d",&h_num,&f_num,&r_num,&div_num);
// 		switch(h_num){
// 		case 1:
// 			H1[f_num-1][r_num-1] += div_num;
// 			break;
// 		case 2:
// 			H2[f_num-1][r_num-1] += div_num;
// 			break;
// 		case 3:
// 			H3[f_num-1][r_num-1] += div_num;
// 			break;
// 		case 4:
// 			H4[f_num-1][r_num-1] += div_num;
// 			break;
// 		}
// 	}

// 	output(H1);
// 	printf("####################\n");
// 	output(H2);
// 	printf("####################\n");
// 	output(H3);
// 	printf("####################\n");
// 	output(H4);

// }

#include<stdio.h>
#include<iostream>

using namespace std;


void output(int Array[3][10]){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<10;j++){
            printf(" %d",Array[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n,i,j;
    int b_num,f_num,r_num,v_num,B1[3][10],B2[3][10],B3[3][10],B4[3][10];

    cin >> n;

    for(i=0;i<3;i++){
        for(j=0;j<10;j++){
            B1[i][j]=B2[i][j]=B3[i][j]=B4[i][j]=0;
        }
    }

    for(i=0;i<n;i++){
        cin >> b_num >> f_num >> r_num >> v_num;
        switch (b_num){
            case 1 : B1[f_num-1][r_num-1]+=v_num; break;
            case 2 : B2[f_num-1][r_num-1]+=v_num; break;
            case 3 : B3[f_num-1][r_num-1]+=v_num; break;
            case 4 : B4[f_num-1][r_num-1]+=v_num; break;
        }
    }

    output(B1);
    printf("####################\n");
    output(B2);
    printf("####################\n");
    output(B3);
    printf("####################\n");
    output(B4);

}
