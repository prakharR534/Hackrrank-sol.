#include <bits/stdc++.h>

using namespace std;



int main()
{
   int t;
   cin>>t;
   while(t--){
       string s1,s2;
       cin>>s1>>s2;
       int arr1[26]={0};
       int arr2[26]={0};

        int f=0;
    //    for(int i=0;i<s1.length();i++){
    //        for(int j=0;j<s2.length();j++){
    //            if(s1[i] == s2[j])
    //            f++;
    //        }
    //    }
for(int i=0;i<s1.length();i++){
           arr1[s1[i]-'a']++;
       }

for(int i=0;i<s2.length();i++){
           arr2[s2[i]-'a']++;
       }


for(int i=0;i<26;i++){
if((arr1[i]>=arr2[i]|| arr1[i]<=arr2[i]) && arr1[i]!=0  && arr2[i]!=0){
f++;
break;}

}


       if(f>0) cout<<"YES\n";
       else
       cout<<"NO\n";
   }
}
