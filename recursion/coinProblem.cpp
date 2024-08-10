class Solution {
public:
    int getCountOfCoins(vector<int>& coins, int amount) {

        //  base case 
        if(amount == 0) return 0;
        // initialising minimum coins to be maximim of int ( close to infinity )
        int minCoins = INT_MAX;

        for(int i=0; i < coins.size();i++) {
            // extract each coin, and check if we apply 
            int coin = coins[i];

            // coin has to be less than amount we want
            if(coin <= amount) {
                // get the answer from the recursion 
                int getRecursionAns = getCountOfCoins(coins,amount-coin);
                if(getRecursionAns != INT_MAX) {
                    int coinUsed  = 1 + getRecursionAns;
                    minCoins = min(coinUsed, minCoins);
                }
            }

        }

        return minCoins;
    }
    int coinChange(vector<int>& coins, int amount) {
        int countOfCoins = getCountOfCoins(coins, amount);

        if(countOfCoins == INT_MAX) {
            return -1;
        }
        else return countOfCoins;
    }
};