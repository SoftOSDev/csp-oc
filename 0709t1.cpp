#include <bits/stdc++.h>
using namespace std;
int a,b,k,sum;
int main(){
	cin>>a>>b>>k;
	if(k<=1){
		cout<<b-a;
		return 0;
	}
	while(true){
        if(a*k==b || a+1==b){
            sum++;
            break;
        }
        if((a+1)*k==b){
            sum+=2;
            break;
        }
        if(a*k>b){
            sum++;
            a++;
        }
        else{
            sum++;
            a*=k;
        }
	}cout<<sum;
}
