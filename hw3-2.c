#include <stdio.h>

int main() {
    int s1, d1, s2, d2, s3, d3;

    // 輸入三筆訂單的出發時間和返回時間
    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);

    // 建立一個長度為24的陣列，用來記錄每個時間點的需求量
    int demand[24] = {0};

    // 將每筆訂單的時間段標記出來
    for (int i = s1; i < d1; i++) {
        demand[i]++;
    }
    for (int i = s2; i < d2; i++) {
        demand[i]++;
    }
    for (int i = s3; i < d3; i++) {
        demand[i]++;
    }

    // 找出需求量的最大值，即為最少需要的車輛數
    int max_demand = 0;
    for (int i = 0; i < 24; i++) {
        if (demand[i] > max_demand) {
            max_demand = demand[i];
        }
    }

    printf("%d\n", max_demand);

    return 0;
}

