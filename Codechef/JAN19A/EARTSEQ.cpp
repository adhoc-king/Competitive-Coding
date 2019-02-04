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
#define arrsum for(int i=0; i<n; i++) sum+=arr[i];
#define for0(i,n) for(int i=0; i<n; i++)
#define for1(i,n) for(int i=1; i<=n; i++)
#define forr(i,n) for(int i=n-1; i>=0; i--)

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
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

    ll t, n;
    int arr[50005];
    int j=0;
    for(int i=3; j<50005; i++) {
        if(i%2 && i%3 && i%5 && i%7 && i%11) {
            arr[j] = i;
            j++;
        }
    }
    // for0(i,50005) cout<<arr[i]<<" ";
    for0(i,50005) {
        if(i%3==0) {
            arr[i] *= 35;
        }
        else if(i%3==1) {
            arr[i] *= 77;
        }
        else if(i%3==2) {
            arr[i] *= 55;;
        }
    }
    arr[0] *= 6;
    arr[0] /= 35;
    arr[1] *= 3;
    cin>>t;
    while(t--) {
        cin>>n;
        arr[n-1] *= 2;
        for0(i,n) cout<<arr[i]<<" "; cout<<"\n";
        // for0(i,n) cout<<gcd(arr[i%n], arr[(i+1)%n])<<" ";
        // for0(i,n) cout<<gcd(arr[i%n], gcd(arr[(i+1)%n], arr[(i+2)%n]))<<" ";
        // for(int i=49995; i<=50003; i++) {
        //     cout<<arr[i%n]<<" ";
        // }
        arr[n-1] /= 2;
    }
    
    return 0;
}
