#include <bits/stdc++.h> 

void printPattern(int n) {
	// Write your code here.
	for(int i=1; i<=n; i++){
		// printing blankspace
		for(int j=0; j<n-i; j++)
			cout<<" ";
		// printing star
		for(int j=0; j<2*i-1; j++)
			cout<<"*";
        cout<<endl;
	}
}