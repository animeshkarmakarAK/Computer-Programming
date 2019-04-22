#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string> > groupAnagrams(vector<string>& strs) {
        map<string,int>mymap;
        vector<vector<string> >v;
        int idxCnt = 1;
      for(int i = 0 ; i< strs.size(); i++){
          string a = strs[i];
          sort(a.begin(),a.end());
          if(mymap[a])
             v[mymap[a]].push_back(strs[i]);
          else mymap[a] = idxCnt++;
      }
        return v;
    }
};

int main()
{
    cout<<"animesh "<<endl;
    map<string,int>mymap;
   mymap.insert("tea",1);
    cout<<mymap["tea"]<<endl;
    return 0;
}
