#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define repp(i,k,n) for(int i = k; i<=(int)n; i++)
#define for3(i,n) for(int i = n; i>=0; --i)
#define pb(x) push_back(x)
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
#define pmp make_pair
#define uu first
#define vv second
using namespace std;
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
typedef vector<int> vi;
typedef vector<int,int>vii;
typedef vector<pii> vpi;

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>idx;

        int *s = &nums[0];
        int *e = &nums[1];
        int sum ;

        while(s != &*(nums.end()-1))
        {
            if(*s + *e == target){
                idx.push_back(s - &nums[0]);
                idx.push_back(e - &nums[0]-1);
                return idx;
            }
            sum = 0;
            if(s == e)
                e++;
                int *tmp = s;
                while(tmp != e){
                    sum+= *tmp;
                    tmp++;
                }
            //sum = *s + *e;
            cout<<sum<<"\t"<<s<<"\t"<<e<<endl;
            if(sum == target)
            {
                idx.push_back(s - &nums[0]);
                idx.push_back(e - &nums[0]-1);
                return idx;
            }

           else if(sum < target)
                e++;
           else if(sum > target)
                s++;
        }


    }


    vector<vector<int> > threeSum(vector<int>& nums) {
        vector< vector<int> >v;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        rep(i,n)
        cout<<nums[i]<<"\t";
        //cout<<n<<endl;
        int counter = 0;
        int idx = 0;
        rep(i,n-2)
        {
            int a = nums[i];
            int start = i+1;
            int end = n-1;

            while(start < end)
            {
                int b = nums[start];
                int c = nums[end];

                if(a+b+c == 0){
                    ++counter;
                    cout<<a<<b<<c<<endl;
                    v[idx].push_back(a);
                    v[idx].push_back(b);
                    v[idx].push_back(c);
                    idx++;
                    start++;
                    end--;
                }

                else if(a+b+c >0) end--;
                else start++;
            }
        }
    }

int main()
{
    vi v = {1,2,3};
    vi p = {1,2,3};

    if(v == p)
        return 1;
    vector<int>nums;
    nums.push_back(-1);

    nums.push_back(0);

    nums.push_back(1);

    nums.push_back(2);

    nums.push_back(-1);

    nums.push_back(-4);


    vector<vector<int> >v = threeSum(nums);

    for(int i = 0;i < v.size();++i)
        for(int j = 0; j<v.size();++j)
          cout<<v[i][j]<<endl;

    return 0;
}
