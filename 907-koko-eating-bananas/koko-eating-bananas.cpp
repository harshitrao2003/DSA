class Solution {
   long long fun(vector<int>& piles, int speed, int h){
    long long hours = 0;
    for(int i = 0; i < piles.size(); i++){
        hours += piles[i] / speed;
        if(piles[i] % speed != 0)
            hours++;

        if(hours > h)   
            return hours;
    }
    return hours;
}

public:
int minEatingSpeed(vector<int>& piles, int h) {
    int low = 1;
    int high = *max_element(piles.begin(), piles.end());
    int res = -1;

    while(low <= high){
        int guess = low + (high - low) / 2;
        long long hour = fun(piles, guess, h);

        if(hour > h){
            low = guess + 1;
        }
        else{
            res = guess;
            high = guess - 1;
        }
    }
    return res;
}

};