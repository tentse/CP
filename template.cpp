/* Tenzin Tsering */

#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define desc greater<int>()
#define ss second
#define ff first
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define take(x,n) for(int i = 0; i<n; i++){int temp;cin >>temp;x.pb(temp);}

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<pair<int,int>> vpi;

#ifndef ONLINE_JUDGE
    #define debug(x) cerr << #x << " : "; _print(x); cerr << endl;
#else
    #define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << ", ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << ", ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << ", ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << ", ";} cerr << "]";}

ll power(ll b, ll p) {ll x = 1;for (int i = 1; i<=p; i++) x*=b; return x;}
string to_bin(int num) {string str;while(num){if(num & 1) str+='1';else str+='0';num>>=1;}   return str;}
string to_bin(ll num) {string str;while(num){if(num & 1) str+='1';else str+='0';num>>=1;}   return str;}
//--------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------

void solve(){

    
    
}


int main(){
    
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr); 
#endif
    
    fastio();

    int t;
    cin >> t;

    while (t--){
        solve();
    }

    return 0;
}
