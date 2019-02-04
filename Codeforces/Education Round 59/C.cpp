/**
*    Username : adhoc_king
*    Name : adhoc_king
*/

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define scani(n) scanf("%d",&n);
#define EPS 1e-9
#define FOR(i,n) for(int i=0; i<n; i++)
#define X first
#define Y second
#define arrinput for(int i=0; i<n; i++) cin>>arr[i];
#define sumarr for(int i=0; i<n; i++) sum+=arr[i];
#define for0(i,n) for(int i=0; i<n; i++)
#define for1(i,n) for(int i=1; i<=n; i++)
#define forr(i,n) for(int i=n-1; i>=0; i--)

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<ll> vi;
typedef vector<vector<int>> vvi;
typedef vector<pii> vii;

const int MOD = 1e9+7;
const int n_ = 1e5+1000;
const long double PI = acos(-1.0);

ll gcd (ll a, ll b) {return ( a ? gcd(b%a, a) : b );}
ll power(ll a, ll n) {ll p = 1;while (n > 0) {if(n%2) {p = p * a;} n >>= 1; a *= a;} return p;}
ll power(ll a, ll n, ll mod) {ll p = 1;while (n > 0) {if(n%2) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin>>n>>k;
    int arr[n];
    arrinput;
    string str;
    cin>>str;
    ll sum = 0;
    int i = 0;
    int x, y, z;
    while(i<n) {
        char ch = str[i];
        x = 0; y = i;
        if(i+1<n && ch==str[i+1]) {
            while(i<n && ch==str[i]) {
                x++;
                i++;
            }
            z = i;
            sort(arr+y, arr+z, greater<int>());
            // cout<<"ASda"<<y<<" "<<z<<" "<<sum<<"\n";
        }
        else i++;
        z = i;
            for(int j=y; j<min(z, y+k); j++) {
                sum += arr[j];
            }
        // cout<<y<<" "<<z<<" "<<sum<<"\n";
    }
    cout<<sum<<"\n";
    // for0(i,n) cout<<arr[i]<<" ";
    return 0;
}
