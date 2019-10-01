#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n; // the number of temperatures to analyse
    std::vector<int>v;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t;cin.ignore();
        v.push_back(t);
    }


    if(n==0)
    {
        cout<<0<<endl;;
    }
    else
    {


        sort(v.begin(),v.end());
        auto min =std::min_element(v.begin(),v.end());

        while((*min<0)&&v.size()>=1)
        {
            v.erase(min);
            min =std::min_element(v.begin(),v.end());

        }
       cout<<v[0]<<endl;;


    }

}
