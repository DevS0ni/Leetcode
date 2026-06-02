class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        string max_sub_str;
        string sub_str;

        // CASE 1: Consider the string : "abcda"

        // loop for the original string - Holds down to a
        for(int i = 0; i < s.length(); i++){
            bool repeat = false;
            sub_str = "";
            
            // The a here is use to compare it with the other
            // elements of the sub_str in the inner-most loop
            for(int j = i; j < s.length(); j++){

                // Inner-most loop for the sub_str - Compare the element
                // from the original string
                for(int k = 0; k < sub_str.length(); k++){
                    if(s[j] == sub_str[k]){
                        repeat = true;
                        break;
                    }
                
                }
                if(repeat){
                    break; // If the element is repeated then break to the outermost loop
                }
                // appending the string because the character was not repeated
                sub_str+=s[j];

                // Checking for the longest length
                if(sub_str.length() > longest){
                    longest = sub_str.length();
                    max_sub_str = sub_str;
                }
            }
        }
        // Also prints the longest sub_str
        cout << max_sub_str;
        return longest;
    }
};