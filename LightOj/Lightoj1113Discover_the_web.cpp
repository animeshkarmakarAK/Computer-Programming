/* solved by myself -- solved complete */
#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    

    for(int tc = 1; tc <= t; tc++){
        printf("Case %d:\n",tc);
        string command;

        stack<string>forward,back;
        string curr_page = "http://www.lightoj.com/";
        bool quit = false;


        while(quit == false){
            
            cin>>command;
        if(command == "VISIT"){
            string url;
            cin>>url;
            back.push(curr_page);
            curr_page = url;
            cout<<curr_page<<endl;

            while(!forward.empty()){
                forward.pop();
            }
        }
        
        else if(command == "BACK"){
            if(back.empty()) cout<<"Ignored"<<endl;
            else{
                forward.push(curr_page);
                curr_page = back.top();
                cout<<curr_page<<endl;
                back.pop();
            }
        }

          else if(command == "FORWARD"){
            if(forward.empty()) cout<<"Ignored"<<endl;
            else {
                back.push(curr_page);
                curr_page = forward.top();
                cout<<curr_page<<endl;
                forward.pop();
            }
            } 


            else 
             quit = true;
    }
    }
    return 0;
}
