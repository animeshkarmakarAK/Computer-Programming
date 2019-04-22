#include<bits/stdc++.h>

using namespace std;

bool checkPalindrome(int k, int l ,string a)
{
    if(a[k] != a[l])
        return 0;
    if(k >= l)
        return 1;

    checkPalindrome(k++,l--,a);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string word;
    cin>>word;
    cout<<word[0]<<endl;
   // cout<<word.lenght()<<endl;
    bool value = checkPalindrome(0,word.size()-1,word);
    cout<<value<<endl;

    return 0;

}
