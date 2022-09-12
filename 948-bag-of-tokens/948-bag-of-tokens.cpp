class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        sort(tokens.begin(),tokens.end());
       int start=0,end=tokens.size()-1,score=0;
        int max_score=0;
        while(start<=end)
        {
            if(tokens[start]<=power)
            {
                power=power-tokens[start];
                start++;
                score++;
            }
            else if(score>0)
            {
                power=power+tokens[end];
                score--;
                end--;
            }
            else
            {
                break;
            }
            max_score=max(max_score,score);
            
        }
        return max_score;
        
    }
};