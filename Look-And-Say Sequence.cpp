#include<bits/stdc++.h>

#include<string>

string lookAndSaySequence(int n) 

{

    if(n==1){

        return "1";

    }

    //recursion concept ex. for n=4 we need value for 3 and for 3 we need 2 and for 2 we need 1 and so on.

    string s = lookAndSaySequence(n-1);

    string ans = "";

    int frequency=0;

 

    for(int i=0;i<s.length();i++){

        frequency++;

        //separating the numbers into groups

        if(i==s.length()-1 || s[i]!=s[i+1]){

            ans = ans + to_string(frequency) + s[i];  //to_string type casting

            frequency=0;

        }

    }

    return ans;

}