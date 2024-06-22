#include<iostream>
#include<bits/stdc++.h>
// #include<map>
using namespace std;

int main()
{
    // string st = "Letsupgrad";
    // string st2;
    // ofstream out("sample.txt");
    // out << st;
    // ifstream in("sample2.txt");
    // // in >> st2;
    // getline(in,st2);
    // cout<<st2;

    // vector<int> v1;
    //   v1.push_back(10);
    //   v1.push_back(20);
    //   v1.push_back(30);

    //   v1.push_back(10);
    //   v1.push_back(20);
    //   v1.push_back(30);
      
    //   v1.push_back(10);
    //   v1.push_back(20);
    //   v1.push_back(30);
       
    //    v1.pop_back();
    //     v1.pop_back();

    //     sort(v1.begin(),v1.end());
    //     v1.clear();
    //   for(int i=0;i<v1.size();i++){
    //     cout<<v1[i]<<" ";
    //   }
   
    // map<string,int>mp;
    // mp["Ritik"]=98;
    // mp["Dinesh"]=58;
    // mp["sam"]=2;

    //     // cout<<mp["sam"];

    //     map<string,int> :: iterator itr;
    //     for(itr=mp.begin();itr!=mp.end();itr++){
    //         cout<<(*itr).first << " " << (*itr).second<<endl;
    //     }

    set<int>st;
    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.insert(10);
    st.insert(20);

    set<int> :: iterator itr;
    for(itr=st.begin();itr!=st.end();itr++){
        cout<< (*itr) << " ";
    }
    return 0;
}