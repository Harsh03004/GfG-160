class Solution {
    public:
      void pushZerosToEnd(vector<int>& arr) {
          // code here
          int count=0;
          for(int i=0;i<arr.size();i++){
              if(arr[i]!=0){
                  arr[count]=arr[i];
                  count++;
              }
          }
          
          for(int i=count;i<arr.size();i++){
              arr[i]=0;
          }
      }
  };