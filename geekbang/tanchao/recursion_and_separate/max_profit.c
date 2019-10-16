//
// Created by wuping on 2019-05-31.
//

int maxProfit(int* prices, int pricesSize){
    int buy = 1;
    int profit = 0;
    for (int i = 0; i < pricesSize; i++) {
        int price = prices[i];
        if (buy) {
            if (i < pricesSize - 1 && price < prices[i + 1]) {
                buy = 0;
                profit -= price;
            }
        } else {
            if (i == pricesSize - 1 || price > prices[i + 1]) {
                buy = 1;
                profit += price;
            }
        }
    }
    return profit;
}
