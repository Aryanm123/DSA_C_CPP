#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;


int main(){
 	ll n;
 	cin>>n;
 	ll ans;
 	for(int i=0;i*i<=n;i++){
 		if(i*i<=n)
 			ans = i;
 		else
 			break;
 	}

 	cout<<ans<<endl;
	return 0;
}
