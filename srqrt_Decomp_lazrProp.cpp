//                           ,;;;;;;,
//                                 ,;;;'""`;;\
//                               ,;;;/  .'`',;\
//                             ,;;;;/   |    \|_
//                            /;;;;;    \    / .\
//                          ,;;;;;;|     '.  \/_/
//                         /;;;;;;;|       \
//              _,.---._  /;;;;;;;;|        ;   _.---.,_
//            .;;/      `.;;;;;;;;;|         ;'      \;;,
//          .;;;/         `;;;;;;;;;.._    .'         \;;;.
//         /;;;;|          _;-"`       `"-;_          |;;;;\
//        |;;;;;|.---.   .'  __.-"```"-.__  '.   .---.|;;;;;|
//        |;;;;;|     `\/  .'/__\     /__\'.  \/`     |;;;;;|
//        |;;;;;|       |_/ //  \   //  \ \_|       |;;;;;|
//        |;;;;;|       |/ |/    || ||    \| \|       |;;;;;|
//         \;;;;|    __ || _  .-.\| |/.-.  _ || __    |;;;;/
//          \jgs|   / _\|/ = /_o_\   /_o_\ = \|/_ \   |;;;/
//           \;;/   |`.-     `   `   `   `     -.`|   \;;/
//          _|;'    \ |    _     _   _     _    | /    ';|_
//         / .\      \_  ( '--'(     )'--' )  _//      /. \
//         \/_/       \_/|  /_   |   |   _\  |\_/       \_\/
//                       | /|\  \   /  //|\ |
//                       |  | \'._'-'_.'/ |  |
//                       |  ;  '-.```.-'  ;  |
//                       |   \    ```    /   |
//     __                ;    '.-"""""-.'    ;                __
//    /\ \_         __..--\     `-----'     /--..__         _/ /\
//    \_'/\`''---''`..;;;;.'.__,       ,__.',;;;;..`''---''`/\'_/
//         '-.__'';;;;;;;;;;;,,'._   _.',,;;;;;;;;;;;''__.-'
//              ``''--; ;;;;;;;;..`"`..;;;;;;;; ;--''``   _
//         .-.       /,;;;;;;;';;;;;;;;;';;;;;;;,\    _.-' `\
//       .'  /_     /,;;;;;;'/| ;;;;;;; |\';;;;;;,\  `\     '-'|
//      /      )   /,;;;;;',' | ;;;;;;; | ',';;;;;,\   \   .'-./
//      `'-..-'   /,;;;;','   | ;;;;;;; |   ',';;;;,\   `"`
//               | ;;;','     | ;;;;;;; |  ,  ', ;;;'|
//              _\__.-'  .-.  ; ;;;;;;; ;  |'-. '-.__/_
//             / .\     (   )  \';;;;;'/   |   |    /. \
//             \/_/   (`     `) \';;;'/    '-._|    \_\/
//                     '-/ \-'   '._.'         `
//                       """      /.`\
//                                \|_/


#include<bits/stdc++.h>
#define pb push_back
#define mk make_pair
#define ll long long
#define ss second
#define ff first
#define pll pair<ll,ll>
#define vll vector<ll>
#define mll map<ll,ll>
//#define mod 1000000007
#define sp " "
#define w(x) ll x; cin>>x; while(x--)
#define ps(x,y) fixed<<setprecision(y)<<x;
#define fo(i, j, k, in) for (ll i=j ; i<k ; i+=in)
#define re(i, j) fo(i, 0, j, 1)
#define pi 3.1415926535897932384626433832795
#define all(cont) cont.begin(), cont.end()
#define countbit(x) __builtin_popcount(x)
#define mod 1000000007//998244353
#define lo lower_bound
#define de(n) ll n;cin>>n;
#define def(a,n) ll n;cin>>n;ll a[n];re(i,n){cin>>a[i];}
#define defi(a,n,k) ll n;cin>>n; ll k;cin>>k;ll a[n];re(i,n){cin>>a[i];}
#define deb(x) cout<<#x<<"="<<x<<endl;
#define tr(it,a) for(auto it=a.begin();it!=a.end();it++)
#define nl cout<<endl;
#define minato ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
#define precision(x) cout << fixed << setprecision(x);
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
//#define endl "\n"
//#define int long long
const int dx[4]={1,0,0,-1}, dy[4]={0,1,-1,0};
const int x_dir[]={-1,-1,-1,0,0,1,1,1};
const int y_dir[]={-1,0,1,-1,1,-1,0,1};


using namespace std;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef KNIGHTMARE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

//void _print(ll t) {cerr << t;}
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
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
//KnightMareVoid
class sd{
    public:
    int n,bsz,bcnt;
    vector<int> a,bv,bl,br,bno, lazy,type;

    sd(int _n,vector<int> _a){
        n=_n;
        a=_a;
        bsz=sqrt(n);
        bcnt=(n+bsz-1)/bsz;

        bv.resize(bcnt,0);
        bl.resize(bcnt,-1);
        br.resize(bcnt,0);
        bno.resize(n,0);
        //bv.resize(bcnt,0);
        lazy.resize(bcnt,0);
        type.resize(bcnt,0);
        for(int i=0;i<n;i++){
            bno[i]=i/bsz;
            if(bl[bno[i]]==-1)bl[bno[i]]=i;
            br[bno[i]]=i;
            bv[bno[i]]+=a[i];
        }
         
    }
    void prop(int block_num){
        if(type[block_num]==0)return ;
        if(type[block_num]==1){
            for(int j=bl[block_num];j<=br[block_num];j++){
                a[j]+=lazy[block_num];
                bv[block_num]+=lazy[block_num];
            }
          

        }
        else{
           bv[block_num]=0;
           for(int j=bl[block_num];j<=br[block_num];j++){
                a[j]=lazy[block_num];
                bv[block_num]+=lazy[block_num];
            }
            

        }
        type[block_num]=0;
        lazy[block_num]=0;
    }

    void upd_add(int l,int r,int x){
        if(bno[l]==bno[r]){
            prop(bno[l]);
            for(int j=l;j<=r;j++){
                a[j]+=x;
                bv[bno[j]]+=x;
            }
        }
        else{
             prop(bno[l]);
             for(int j=l;j<=br[bno[l]];j++){
                 a[j]+=x;
                 bv[bno[j]]+=x;

             }
             for(int j=bno[l]+1;j<bno[r];j++){
                 if(type[j]==0){
                      lazy[j]+=x;
                      type[j]=1;
                 }
                 else if(type[j]==1){
                     lazy[j]+=x;
                 }
                 else{
                     lazy[j]+= x;
                 }
             }
             prop(bno[r]);
             for(int j=bl[bno[r]];j<=r;j++){
                  a[j]+=x;
                 bv[bno[j]]+=x; 

             }
        }
    }

    void upd_set(int l,int r,int x){
        if(bno[l]==bno[r]){
            prop(bno[l]);
            for(int j=l;j<=r;j++){
                bv[bno[l]]-=a[j];
                a[j]=x;
                bv[bno[j]]+=a[j];
            }
        }
        else{
             prop(bno[l]);
             for(int j=l;j<=br[bno[l]];j++){
                 bv[bno[j]]-=a[j];
                  a[j]=x;
                 bv[bno[j]]+=a[j];

             }
             for(int j=bno[l]+1;j<bno[r];j++){
                 if(type[j]==0){
                      lazy[j]=x;
                      type[j]=2;
                 }
                 else if(type[j]==1){
                     lazy[j]=x;
                     type[j]=2;
                 }
                 else{
                     lazy[j]= x;
                 }
             }
             prop(bno[r]);
             for(int j=bl[bno[r]];j<=r;j++){
                  bv[bno[j]]-=a[j];
                  a[j]=x;
                 bv[bno[j]]+=a[j]; 

             }
        } 

    }
    int qry(int l,int r){
        int tot=0;
         if(bno[l]==bno[r]){
            prop(bno[l]);
            for(int j=l;j<=r;j++){
              tot+=a[j];
            }
        }
        else{
             prop(bno[l]);
             for(int j=l;j<=br[bno[l]];j++){
                 tot+=a[j];

             }
             for(int j=bno[l]+1;j<bno[r];j++){
                 if(type[j]==0){
                      tot+=bv[j];
                 }
                 else if(type[j]==1){
                   tot+=bv[j]+lazy[j]*(br[j]-bl[j]+1);
                 }
                 else{
                     tot+=lazy[j]*(br[j]-bl[j]+1);
                 }
             }
             prop(bno[r]);
             for(int j=bl[bno[r]];j<=r;j++){
                  tot+=a[j];

             }
        } 
        return tot; 

    }

};
int solve(){
    return 0;

}


signed main()
{
    #ifndef KNIGHTMARE
    freopen("Error.txt", "w", stderr);
    #endif
    
    minato;
    w(t)
    solve();


    return 0;
}
