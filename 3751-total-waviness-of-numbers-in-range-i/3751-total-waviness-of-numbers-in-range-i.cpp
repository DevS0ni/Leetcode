class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int sum_waviness = 0;
        int valley = 0;
        int peak = 0;
            for(int i = num1; i <= num2; i++){
                if(i > 100){
                    string snum = to_string(i);
                    vector<int> number {};
                    for(char c : snum){
                        number.push_back(c - '0');
                    }
                    for(int i = 1; i < number.size() - 1; i++){
                        if(number[i] > number[i-1] && number[i] > number[i+1]){
                            valley++;
                        }
                        else if(number[i] < number[i-1] && number[i] < number[i+1]){
                            peak++;
                        }
                        else{
                            cout << "Waviness is 0";
                        }
                    }
                }
            }
        return sum_waviness = valley + peak;
    }
};