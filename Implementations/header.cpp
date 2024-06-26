//Para iniciar códigos: normalmente só copiar e colar, mas nem tudo isso
// é útil em um mesmo problema;
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using db = long double;
using str = string; //yay python :)

using pi = pair<int,int>;
#define f first
#define s second

#define tcT template<class T
tcT> using V = vector<T>;
tcT, size_t SZ> using AR = array<T,SZ>;
using vi = V<int>;
using vb = V<bool>;
using vpi = V<pi>;

#define sz(x) int((x).size())
#define all(x) begin(x), end(x)
#define sor(x) sort(all(X))
#define rsz resize
#define pb push_back
#define ft front()
#define bk back()

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for(int i = (b)-1;i>=(a);--i)
#define R0F(i,a) ROF(i,0,a)
#define rep(a) F0R(_,a)
#define each(a,x) for(auto& a:x)

const int MOD = 1e9+7;
const db PI = acos((db)-1);
mt19937 rng(0); //or mt19937_64, serve para randomização

tcT> bool ckmin(T& a, const T& b){
    return b<a? a=b, 1:0;
} // faz a receber min(a,b)

tcT> bool ckmax(T& a, const T& b){
    return b>a? a = b, 1:0;
} // a recebe max(a,b)


int main(){ //fast IO
    cin.tie(0)->sync_with_stdio(0);
}


