//Solution to CodeChef Problem code: SPCANDY
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n,k;
	    cin>>n>>k;
	    if(k!=0) cout<<n/k<<" "<<n%k<<"\n";
	    else cout<<k<<" "<<n<<"\n";
	}
	return 0;
}
