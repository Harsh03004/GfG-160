class Solution {
    public:
      int getMinDiff(vector<int> &arr, int k) {
          // code here
          int n=arr.size();
          sort(arr.begin(),arr.end());
          int minH=arr[0];
          int maxH=arr[n-1];
          int diff=maxH-minH;
        
          for(int i=1;i<n;i++){
              if(arr[i]-k<0) continue;
              
              minH=min(arr[0]+k,arr[i]-k);
              maxH=max(arr[n-1]-k,arr[i-1]+k);
              
              diff=min(maxH-minH,diff);
          }
          return diff;
      }
  };