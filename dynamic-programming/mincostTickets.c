//
// Created by wuping on 2019-07-16.
//

/**
 * Input: days = [1,4,6,7,8,20], costs = [2,7,15]
 * Output: 11
 * @param days
 * @param daysSize
 * @param costs
 * @param costsSize
 * @return
 */
#include <stdbool.h>

int mincostTickets(int* days, int daysSize, int* costs, int costsSize){
    bool travelDays[365];
    for (int i = 0; i < daysSize; i++) {
        travelDays[days[i]] = true;
    }
    for (int i = 0; i < 366; i++) {
        if (travelDays[])
    }
}