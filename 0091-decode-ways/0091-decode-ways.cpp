class Solution {
public:
    int numDecodings(string s) {
        if(s.length() == 0 || s[0] == '0'){
            return 0;
        } 
        
        if(s.length() == 1){
            return 1;
        }
        
        int value1 = 1;
        int value2 = 1;
        
        for(int i = 1; i < s.length(); i++){
            // To convert the string into a digit.
            int digit1 = s[i] - '0'; 
            int digit2 = (s[i-1] - '0')*10 + digit1;
            int resultant_value = 0;
            
            if(digit1 >= 1){
                resultant_value += value2;
            }
            if(digit2 >= 10 && digit2 <= 26){
                resultant_value += value1;
            }
            value1 = value2;
            value2 = resultant_value;
        }
        return value2;
    }
};