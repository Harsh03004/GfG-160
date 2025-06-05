class Solution {
    public:
      // Function to check if two strings are rotations of each other or not.
      
      bool areRotations(string &s1, string &s2) {
          // Your code here
          int z=s1.size();
          string s3=s1+s1;
          int n=s3.size();
          int m=s2.size();
         
          if(z!=m) return false;
          int len =0;
          vector<int>lps(m,0);
          for(int i=1;i<m;i++){
              while(len>0 && s2[i]!=s2[len]){
                  len=lps[len-1];
              }
              
              if(s2[i]==s2[len]) len++;
              lps[i]=len;
          }
          int i=0,j=0;
          while(i<n){
              if(j==m) return true;
              if(s3[i]==s2[j]){
                  i++;
                  j++;
              }
              
              else {
                  if(j!=0){
                      j=lps[j-1];
                  }
                  else{
                      i++;
                  }
              }
          }
          if(j==m) return true;
          return false;
          
      }
  };