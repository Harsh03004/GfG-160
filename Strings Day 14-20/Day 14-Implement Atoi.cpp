class Solution {
    public:
      int myAtoi(char *s) {
          // Your code here
          long long res=0;
          int sign=1;
          while(*s==' ') s++;
          
          if(*s=='-' || *s=='+'){
              if(*s=='-') sign=-1;
              s++;
          }
          
          while(*s>='0' && *s<='9'){
              res=10*res+(*s-'0');
              if(res>INT_MAX && sign==1) return INT_MAX;
              if(-res<INT_MIN && sign==-1) return INT_MIN;
              s++;
          }
          return (int)(sign*res);
      }
  };