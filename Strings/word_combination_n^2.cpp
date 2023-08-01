#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define max(a,b) (a<b?b:a)
#define min(a,b) (a<b?a:b)
#define abs(x) (x<0?(-x):x)
#define IN(i,l,r) (l<i&&i<r)
#define FOR(i,L,R) for (int i = L; i < R; i++)
#define FORE(i,L,R) for (int i = L; i <= R; i++)
#define FFOR(i,L,R) for (int i = L; i > R; i--)
#define FFORE(i,L,R) for (int i = L; i >= R; i--)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif
    string s;
    cin>>s;
    cout<<s<<endl;
    int n;cin>>n;
    unordered_multimap<string,int> m;
    for(int i=0;i<n;i++){
        string p;
        cin>>p;
        m.insert({p,1});
    }
    int l=s.length();
    vector<int>v(l+1,0);
    for(int i=l-1;i>=0;i--){
        string str="";
        for(int j=i;j<l;j++){
            str+=s[j];
            // cout<<str<<endl;
            if(m.find(str)!=m.end()){
                // cout<<i<<" "<<j<<endl;
                v[i]+=v[j+1];
                if(j==l-1){
                    v[i]++;
                }
            }
        }
    }
    // for(int i=0;i<=l;i++){
    //     cout<<v[i]<<" ";
    // }
    cout<<v[0]<<endl;
 return 0;
}