// User function template for C++
class Solution {
    public:
      string addBinary(string& s1, string& s2) {
          // your code here
          int n1=s1.size()-1;
          int n2=s2.size()-1;
          int carry=0;
          string res;
          
          while(n1>=0 || n2>=0 || carry){
              int sum=carry;
              if(n1>=0) sum+=s1[n1--]-'0';
              if(n2>=0) sum+=s2[n2--]-'0';
              res.push_back((sum%2)+'0');
              carry=sum/2;
          }
      while(res.size()>1 && res.back()=='0') res.pop_back();
          
          reverse(res.begin(),res.end());
          return res;
      }
  };