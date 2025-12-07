// #inlcude<stdio.h>
#include<bits/stdc++.h>
#include <algorithm>

using namespace std ;


long long lcmm(long long x,long long y){
    return x/gcd(x,y) *y;
}
int main(){
    
    int t;
    cin>>t;
while(t--){
    long long  n,x,y;

    cin>>n;
    cin>>x;
    cin>>y;
long long lcm=lcmm(x,y);
    long long inx= n/x -n/ lcm;
    long long iny= n/y - n/lcm;

  long long sumx = inx * (2 * n - inx + 1) / 2;

  long long sumy = iny * (iny + 1) / 2;

cout<<sumx-sumy<<endl;


}

    
    return 0;

}