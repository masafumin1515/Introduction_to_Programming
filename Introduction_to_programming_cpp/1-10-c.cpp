// #include <stdio.h>
// #include <math.h>

// using namespace std;

// int main(){
// 	int n;
// 	double students[1000] = {0},sum,m,div;

// 	while(true){
// 		scanf("%d",&n);
// 		if(n == 0) break;
// 		div = sum = 0;
// 		for(int i = 0; i < n; i++){
// 			scanf("%lf",&students[i]);
// 			sum += students[i];
// 		}
// 		m = sum/n;
// 		for(int i = 0; i < n;i++){
// 			div += (students[i] - m)*(students[i] - m);
// 			students[i] = 0;
// 		}
// 		printf("%.8lf\n",sqrt(div/n));
// 	}
// }

#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  while(n!=0){
    int i;
    double s[1000]={},sum=0,a=0;
    for(i=0;i<n;i++){
      cin >> s[i];
      sum+=s[i];
    }
    for(i=0;i<n;i++){
      a+=((sum/n)-s[i])*((sum/n)-s[i])/n;
    }
    printf("%.5f\n",sqrt(a));
    cin >> n;
  }
  
  return 0;
}