#include<bits/stdc++.h>
using namespace std;
 
#define F first
#define S second
#define PB push_back
#define EB emplace_back
#define MP make_pair
#define el "\n"
#define check cout << "PASS" << el;
 
#define For(i,a,b) for(int i = a; i<b; i++)
#define Rfor(i,a,b) for (int i = a-1; i>=b; i--)
#define loop(t) while(t--)
 
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef pair<int,int> pairi;
typedef map<int,int> mapi;
typedef set<int> seti;
typedef multiset<int> mset;
typedef unordered_set<int> uset;
 
bool even(int &x){
    if (x&1 == 1){
        return false;
    }
    return true;
}
 
bool even(ll &x){
    if (x&1 == 1){
        return false;
    }
    return true;
}
 
bool comp(int &a,int &b){
    return a >= b;
}

bool comp(ll &a,ll &b){
    return a >= b;
}
 
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------


void solve(){

    
    

}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t; loop(t)
    {
        solve();
    }

    return 0;
}

