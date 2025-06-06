class Solution {
    public:
      char nonRepeatingChar(string &s) {
          // Your code here
          int n=s.size();
          unordered_map<char,int>mp;
          
          for(auto i:s){
              mp[i]++;
          }
          
          for(int i=0;i<n;i++){
              if(mp[s[i]]==1) return s[i];
          }
          return '$';
      }
  };