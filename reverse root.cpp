#include<iostream>
#include<vector>
#include<cmath>
#include<cstdio>

int main(void)
{
      double a;
  std::vector<double>v;
  for(int i=0;i<4;i++)
  {
      std::cin>>a;
      v.push_back(a);
  }
  for(int j=v.size();j>=0;j--)
  {
     std:: printf("\n%.4lf",sqrt(v[j]));
  }
  return 0;
}
