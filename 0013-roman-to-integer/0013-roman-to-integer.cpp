class Solution {
public:
    // BRUTE_FORCE SOLUTION
    int ans_num = 0;
        bool flag = true;

        for (int i = 0; i < s.length() && flag == true; i++){
            if(!s.empty()){
                flag = true;
            }
            else{
                flag = false;
            }
            if(1 <= s.length() && s.length() <= 15 && flag == true){
                if(s[i] == 'I' || s[i] == 'i'){
                    if(s[i+1] == 'V' || s[i+1] == 'v'){
                        ans_num += 4;
                        ++i;
                    }
                    else if(s[i+1] == 'X' || s[i+1] == 'x'){
                        ans_num+=9;
                        ++i;
                    }
                    else{ 
                        ans_num++;
                    }
                }
                else if(s[i] == 'V' || s[i] == 'v'){
                    ans_num+=5;
                }
                else if(s[i] == 'X' || s[i] == 'x'){
                    if(s[i+1] == 'L' || s[i+1] == 'l'){
                        ans_num+=40;
                        ++i;
                    }
                    else if(s[i+1] == 'C' || s[i+1] == 'c'){
                        ans_num+=90;
                        ++i;
                    }
                    else{
                        ans_num+=10;
                    }
                }
                else if(s[i] == 'L' || s[i] == 'l'){
                    ans_num+=50;
                }
                else if(s[i] == 'C' || s[i] == 'c'){
                    if(s[i+1] == 'D' || s[i+1] == 'd'){
                        ans_num += 400;
                        ++i;
                    }
                    else if(s[i+1] == 'M' || s[i+1] == 'm'){
                        ans_num += 900;
                        ++i;
                    }
                    else{
                        ans_num+=100;
                    }
                }
                else if(s[i] == 'D' || s[i] == 'd'){
                    ans_num+=500;
                }
                else if(s[i] == 'M' || s[i] == 'm'){
                    ans_num+=1000;
                }
                else{
                    flag = false;
                }
            }
            }
        return ans_num;
    /*
    int romanToInt(string s) {
        unordered_map<char, int> romanMap = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int result = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (i + 1 < s.size() && romanMap[s[i]] < romanMap[s[i + 1]]) {
                result -= romanMap[s[i]];
            } else {
                result += romanMap[s[i]];
            }
        }
        
        return result;
        */
    }
};
