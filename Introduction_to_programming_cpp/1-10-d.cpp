// /*

// ミンコフスキー距離 
// => p=1 => マンハッタン距離
// => p=2 => ユークリッド距離
// => p=infty => チェビシェフ距離

// */

// #include<stdio.h>
// #include<iostream>
// #include<math.h>

// using namespace std;

// int main(){
//     int n,i,j;
//     double x[1000]={},y[1000]={},sum=0;
//     cin >> n;
//     for(i=0;i<n;i++){
//         cin >> x[i];
//     }
//     for(i=0;i<n;i++){
//         cin >> y[i];
//     }

//     //p1
//     for(i=0;i<n;i++){
//         p1+=sqrt((x[i]-y[i])*(x[i]-y[i]))
//     }

//     //p2
//     for(i=0;i<n;i++){
//         sum+=(x[i]-y[i])*(x[i]-y[i])
//     }
//     p2=sqrt(sum)

//     //p3



    
#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main(){
  int d,i,j,k;
  cin >> d;
  double a[1000]={},b[1000]={};
  for(i=0;i<d;i++) cin >> a[i];
  for(i=0;i<d;i++) cin >> b[i];
  double o1=0,o2=0,o3=0,oe=0;
  for(i=0;i<d;i++){
    o1+=fabs(a[i]-b[i]);
    o2+=fabs(a[i]-b[i])*fabs(a[i]-b[i]);
    o3+=fabs(a[i]-b[i])*fabs(a[i]-b[i])*fabs(a[i]-b[i]);
    oe=max(oe,fabs(a[i]-b[i]));
  }
  printf("%.6f\n",o1);
  printf("%.6f\n",sqrt(o2));
  printf("%.6f\n",pow(o3,1.0/3.0));
  printf("%.6f\n",oe);
  return 0;
}