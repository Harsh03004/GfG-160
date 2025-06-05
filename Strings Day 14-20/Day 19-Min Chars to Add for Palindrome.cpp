class Solution {
    public:
      int minChar(string& s) {
          // Write your code here
          string rev=s;
          reverse(rev.begin(),rev.end());
          string combine=s+ "$" +rev;
          int n=combine.length();
          vector<int> lps(n,0);
          int len=0;
          
          for(int i=1;i<n;i++){
              while(len>0 && combine[i]!=combine[len]){
                  len=lps[len-1];
              }
              
              if(combine[i]==combine[len]) len++;
              lps[i]=len;
          }
          return s.length()-lps.back();
      }
  };
  