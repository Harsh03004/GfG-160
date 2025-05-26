class Solution {
    public:
      // Function to find the majority elements in the array
      vector<int> findMajority(vector<int>& arr) {
          // Your code goes here.
          unordered_map<int,int>mp;
          vector<int>ans;
          int n=arr.size();
          for(int num:arr){
              mp[num]++;
          }
          
          for(auto i:mp){
              if(i.second>n/3) ans.push_back(i.first);
          }
          sort(ans.begin(),ans.end());
          return ans;
      }
  };