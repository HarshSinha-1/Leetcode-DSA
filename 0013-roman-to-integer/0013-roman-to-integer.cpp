class Solution {
public:
    int romanToInt(string s) {
        int sum = 0 ;
        
        unordered_map <char,int> mymap{
        {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        
        
      for(int i=0;i<s.size();i++){
        if(mymap[s[i]]<mymap[s[i+1]]){
            
            sum=sum-mymap[s[i]];
          }
        else{
            sum=sum+mymap[s[i]];
           }
      }
        return sum;
    }
};