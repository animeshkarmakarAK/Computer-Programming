#include<bits/stdc++.h>

using namespace std;
string a;
int counter=0;
int u = -1;

/* int longest_sequence_vowel(int i)
 {
     if(a[i]== 'a'||a[i]==  'e' ||a[i]==  'i' || a[i]== '0' || a[i]== 'u'){
        counter++;
        longest_sequence_vowel(i+1);
        u = max(u,counter);
        }

     else{
     counter = 0;
      longest_sequence_vowel(i+1);
     }
     return u;

 }*/
 int longest_sequence_vowel(int n)
 {
     for(int i = 0;i<n;i++){
        if(a[i]== 'a'||a[i]==  'e' ||a[i]==  'i' || a[i]== '0' || a[i]== 'u'){
        counter++;
        continue;
     }
     else {
     }
     u = max(u,counter);
        counter = 0;
 }
 return u;
 }

int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>a;
       cout<< longest_sequence_vowel(a.size());
    }
}
