#include <algorithm>
bool checkPalindrome(long long N)
{
vector<int> a;
	vector<int> c;
while(N!=0){
	a.push_back(N%2);
	N=N/2;
}
	c=a;
	reverse(a.begin(),a.end());
	if(c==a) return true;
	else return false;
}
