/* Tenzin Tsering */

#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
#define ss second
#define ff first
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ppb pop_back
#define ppf pop_front
#define size(a) (ll)a.size()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<pair<int,int>> vpi;
typedef vector<pair<ll,ll>> vpll;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvll;

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
template <class T> void _print(unordered_set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << ", ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << ", ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << ", ";} cerr << "]";}

ll power(ll a, ll b) {ll res = 1;while (b > 0) {if (b & 1)res = res * a;a = a * a;b >>= 1;}return res;}
long long _sqrt (long long x) {long long ans = 0;for (ll k = 1LL << 30; k != 0; k/= 2){if ((ans + k)*(ans + k)<=x){ans += k;}}return ans;}
string to_bin(int num) {string str;while(num){if(num & 1) str+='1';else str+='0';num>>=1;}   return str;}
string to_bin(ll num) {string str;while(num){if(num & 1) str+='1';else str+='0';num>>=1;}   return str;}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*
    *** Mistake to avoid : ***
    1) Understand the question !!!!
    2) Solve -> Design -> Code
    3) What if test case is extreme SMALL or extreme LARGE
    4) WRITE STUFF DOWN
    5) DON'T GET STUCK ON ONE APPROACH
    6) Do smth! instead of nothing and stay organized
    7) int overflow, array bounds
*/

void solve() {

    
    
}


int main() {
    
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr); 
#endif
    
    fastio();

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
