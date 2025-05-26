class Solution {
    public:
      // arr: input array
      // Function to find maximum circular subarray sum.
      int circularSubarraySum(vector<int> &arr) {
          // your code here
          int n=arr.size();
          int Min=arr[0],Max=arr[0];
          int mini=0,maxi=0;
          int total=0;
          
          for(int i=0;i<n;i++){
              maxi=max(maxi+arr[i],arr[i]);
              total+=arr[i];
              mini=min(mini+arr[i],arr[i]);
              Max=max(Max,maxi);
              Min=min(Min,mini);
          }
          if(Max>0) return max(Max,total-Min);
          return Max;
      }
  };