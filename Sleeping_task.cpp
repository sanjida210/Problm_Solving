#include <bits/stdc++.h>
using namespace std;


void solution(string s, int k){
      int max_unsleep = -1, sleep = 0;
      for(int i = 0; i<s.length(); i++){
          if(s[i] == '1'){
              max_unsleep = i+k;
          }else{
              if(i > max_unsleep){
                  sleep++;
              }
          }
      }
      cout<<sleep<<endl;
}



int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    solution(s, k);
	}
}