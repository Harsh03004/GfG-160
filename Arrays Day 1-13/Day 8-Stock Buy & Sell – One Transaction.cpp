class Solution {
    public:
      int maximumProfit(vector<int> &prices) {
          // code here
          int n=prices.size();
          int maxi=0;
          int minP=prices[0];
          
          for(int i=1;i<n;i++){
                  int profit=prices[i]-minP;
                  maxi=max(profit,maxi);
                  minP=min(minP,prices[i]);
              }
          return maxi;
      }
  };