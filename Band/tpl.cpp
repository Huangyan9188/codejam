#include<stdio.h>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<bitset>
#include<utility>
#include<functional>
#include<iomanip>
#include<sstream>
#include<ctime>
#include<stdlib.h>
#include<cassert>
using namespace std;
#define y0 y0z
#define y1 y1z
#define yn ynz
#define j0 j0z
#define j1 j1z
#define jn jnz
#define tm tmz
#define buli(x) (__builtin_popcountll(x))
#define bur0(x) (__builtin_ctzll(x))
#define bul2(x) (63-__builtin_clzll(x))
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define fil(a,b) memset((a),(b),sizeof(a))
#define cl(a) fil(a,0)
#define siz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define foreach(it,a) for(__typeof((a).begin()) it=(a).begin();it!=(a).end();it++)
#define rep(i,a,b) for (int i=(a),_ed=(b);i<_ed;i++)
#define per(i,a,b) for (int i=(b)-1,_ed=(a);i>=_ed;i--)
#define pw(x) ((ll(1))<<(x))
#define upmo(a,b) (((a)=((a)+(b))%mo)<0?(a)+=mo:(a))
#define mmo(a,b) (((a)=1ll*(a)*(b)%mo)<0?(a)+=mo:(a))
void getre(){int x=0;printf("%d\n",1/x);}
void gettle(){int res=1;while(1)res<<=1;printf("%d\n",res);}
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
template<typename T,typename S>inline bool upmin(T&a,const S&b){return a>b?a=b,1:0;}
template<typename T,typename S>inline bool upmax(T&a,const S&b){return a<b?a=b,1:0;}
template<typename N,typename PN>inline N flo(N a,PN b){return a>=0?a/b:-((-a-1)/b)-1;}
template<typename N,typename PN>inline N cei(N a,PN b){return a>0?(a-1)/b+1:-(-a/b);}
template<typename N>N gcd(N a,N b){return b?gcd(b,a%b):a;}
template<typename N>inline int sgn(N a){return a>0?1:(a<0?-1:0);}
#if ( ( _WIN32 || __WIN32__ ) && __cplusplus < 201103L)
    #define lld "%I64d"
#else
    #define lld "%lld"
#endif
inline void gn(long long&x){
	int sg=1;char c;while(((c=getchar())<'0'||c>'9')&&c!='-');c=='-'?(sg=-1,x=0):(x=c-'0');
	while((c=getchar())>='0'&&c<='9')x=x*10+c-'0';x*=sg;
}
//#define JCVB
inline void gn(int&x){long long t;gn(t);x=t;}
inline void gn(unsigned long long&x){long long t;gn(t);x=t;}
inline void gn(double&x){double t;scanf("%lf",&t);x=t;}
inline void gn(long double&x){double t;scanf("%lf",&t);x=t;}
inline void gs(char *s){scanf("%s",s);}
inline void gc(char &c){while((c=getchar())>126 || c<33);}
inline void pc(char c){putchar(c);}
//inline void ps(char *s){printf("%s\n",s);}
inline void ps(string s){cout<<s<<endl;}
inline void pn(int n){printf("%d\n",n);}
inline void pn(long long n){printf("%lld\n",n);}
#ifdef JCVB
#define debug(...) fprintf(stderr, __VA_ARGS__)
#else
#define debug(...) 
#endif
typedef long long ll;
typedef double db;
inline ll sqr(ll a){return a*a;}
inline db sqrf(db a){return a*a;}
const int inf=0x3f3f3f3f;
const db pi=3.14159265358979323846264338327950288L;
const db eps=1e-6;
//const int mo=0;
//int qp(int a,ll b){int n=1;do{if(b&1)n=1ll*n*a%mo;a=1ll*a*a%mo;}while(b>>=1);return n;}

char str[1200];
int A[4][1000];
int X[4][1000];
map<string,int>hashmap;
int n;
bool bingle(int r,int c,int k){
	return hashmap.find(""+to_string(r)+"_"+to_string(c)+"_"+to_string(k))!=hashmap.end();
}
int getvalue(int r,int c,int k){
	return hashmap[""+to_string(r)+"_"+to_string(c)+"_"+to_string(k)];
}
void setvalue(int r,int c,int k,int v){
	hashmap.insert(pair<string,int>(""+to_string(r)+"_"+to_string(c)+"_"+to_string(k),v));
}
int main()
{
#ifdef JCVB
	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout); 
	
   
	int _time_jc=clock();
	//pn(_time_jc);
	
#endif


	int tes;
	//cout<<"HELLO"<<endl;
	gn(tes);
	//ps("HELLO");
	//;
	rep(_,1,tes+1){
		printf("Case #%d: ",_);
		int k;
		gn(n);
		gn(k);
	 	rep(i,0,n){
	 		//gets(str[i]);
			 cout<<"a"<<endl;
			 gn(A[0][i]);
	 	}
		 rep(i,0,n){
	 		//gets(str[i]);
			 gn(A[1][i]);
	 	}
		 rep(i,0,n){
	 		//gets(str[i]);
			 gn(A[2][i]);
	 	}
		 rep(i,0,n){
	 		//gets(str[i]);
			 gn(A[3][i]);
	 	}
		int res=0;
		rep(i,0,n){
			
			if(bingle(0,A[0][i],k)){res+=getvalue(0,A[0][i],k);continue;}

			int x=A[0][i];
			rep(i,0,n){
				int oldres=res;
				
				int kk=x;
				kk^=A[1][i];
				if(bingle(1,A[1][i],kk)){res+=getvalue(1,A[1][i],kk);continue;}
				rep(i,0,n){
					int j=kk;
					int oldres2=res;
					j^=A[2][i];
					if(bingle(2,A[2][i],j)){res+=getvalue(2,A[2][i],j);continue;}
					rep(i,0,n){
						int m=j;
						m^=A[3][i];
						 if(m==k)res++;
					}
					setvalue(2,A[2][i],j,res-oldres2);
				}
				setvalue(1,A[1][i],kk,res-oldres);

			}
			setvalue(0,A[0][i],k,res);
		}
		pn(res);
	}

	
#ifdef JCVB
	debug("time: %d\n",int(clock()-_time_jc));
#endif
	return 0;
}


