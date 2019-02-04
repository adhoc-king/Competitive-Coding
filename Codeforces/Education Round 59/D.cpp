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

    int n;
    cin>>n;
    int arr[n][n];
    string str;
    for0(i,n) {
        cin>>str;
        for0(j,str.size()) {
            if(str[j] == '0') { arr[i][j*4]=0; arr[i][j*4+1]=0; arr[i][j*4+2]=0; arr[i][j*4+3]=0; }
            if(str[j] == '1') { arr[i][j*4]=0; arr[i][j*4+1]=0; arr[i][j*4+2]=0; arr[i][j*4+3]=1; }
            if(str[j] == '2') { arr[i][j*4]=0; arr[i][j*4+1]=0; arr[i][j*4+2]=1; arr[i][j*4+3]=0; }
            if(str[j] == '3') { arr[i][j*4]=0; arr[i][j*4+1]=0; arr[i][j*4+2]=1; arr[i][j*4+3]=1; }
            if(str[j] == '4') { arr[i][j*4]=0; arr[i][j*4+1]=1; arr[i][j*4+2]=0; arr[i][j*4+3]=0; }
            if(str[j] == '5') { arr[i][j*4]=0; arr[i][j*4+1]=1; arr[i][j*4+2]=0; arr[i][j*4+3]=1; }
            if(str[j] == '6') { arr[i][j*4]=0; arr[i][j*4+1]=1; arr[i][j*4+2]=1; arr[i][j*4+3]=0; }
            if(str[j] == '7') { arr[i][j*4]=0; arr[i][j*4+1]=1; arr[i][j*4+2]=1; arr[i][j*4+3]=1; }
            if(str[j] == '8') { arr[i][j*4]=1; arr[i][j*4+1]=0; arr[i][j*4+2]=0; arr[i][j*4+3]=0; }
            if(str[j] == '9') { arr[i][j*4]=1; arr[i][j*4+1]=0; arr[i][j*4+2]=0; arr[i][j*4+3]=1; }
            if(str[j] == 'A') { arr[i][j*4]=1; arr[i][j*4+1]=0; arr[i][j*4+2]=1; arr[i][j*4+3]=0; }
            if(str[j] == 'B') { arr[i][j*4]=1; arr[i][j*4+1]=0; arr[i][j*4+2]=1; arr[i][j*4+3]=1; }
            if(str[j] == 'C') { arr[i][j*4]=1; arr[i][j*4+1]=1; arr[i][j*4+2]=0; arr[i][j*4+3]=0; }
            if(str[j] == 'D') { arr[i][j*4]=1; arr[i][j*4+1]=1; arr[i][j*4+2]=0; arr[i][j*4+3]=1; }
            if(str[j] == 'E') { arr[i][j*4]=1; arr[i][j*4+1]=1; arr[i][j*4+2]=1; arr[i][j*4+3]=0; }
            if(str[j] == 'F') { arr[i][j*4]=1; arr[i][j*4+1]=1; arr[i][j*4+2]=1; arr[i][j*4+3]=1; }
        }
    }
    int i=0;
    vi vec;
    int x,y,z=0;
    int flag =0;
    for0(k,n) {
        i = 0;
        while(i<n) {
            if(flag == 0  && vec.size()==1)  { flag = 1; z = vec[0]; }
            x = 0;
            if(i<n-1 && arr[i][k] == arr[i+1][k]) {
                y = arr[i][k];
                while(i<n && y==arr[i][k]) {
                    x++;
                    i++;
                }
            }
            else {
                if(i==n-1) {
                    cout<<1;
                    return 0;
                }
                else i++;
            }
            if(x) {
                // cout<<x<<" ";
                if(vec.size()==0) vec.push_back(x);
                else x = gcd(x, z);
                z = x;
                // cout<<x<<"\n";
            }
        }
    }
    // cout<<x;
    for0(k,n) {
        i =0;
        while(i<n) {
                x = 0;
            if(i<n-1 && arr[k][i] == arr[k][i+1]) {
                y = arr[k][i];
                while(i<n && y==arr[k][i]) {
                    x++;
                    i++;
                }
            }
            else {
                if(i==n-1) {
                    cout<<1;
                    return 0;
                }
                else i++;
            }
            if(x) {
                // cout<<x<<" ";
                if(vec.size()==0) vec.push_back(x);
                else x = gcd(x, z);
                z = x;
                // cout<<x<<"\n";
            }
        }
    }
    // x = vec[0];
    // for0(i,vec.size()) cout<<vec[i]<<" "; cout<<"\n";
    // for0(i,vec.size()) x = gcd(x, vec[i]);
    cout<<x;
    // cout<<"\n"<<gcd(1,10);

    return 0;
}
