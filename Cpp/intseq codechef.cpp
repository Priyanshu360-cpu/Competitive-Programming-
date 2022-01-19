#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  ll alp;
  cin >> alp;
  ll b = 0;
  while (alp%2 == 0) {
    alp=alp/2;
    b++;
  }
  cout <<b<< endl;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }

}
