#include <stdio.h>
#include <limits.h>  // 用于INT_MAX

int main() {
    int n;
    scanf("%d", &n);
    int prices[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int min_price = INT_MAX;  // 记录最低买入价，初始化为最大值
    int max_profit = 0;       // 记录最大利润，初始化为0

    for (int i = 0; i < n; i++) {
        // 更新最低买入价（如果当前价格更低）
        if (prices[i] < min_price) {
            min_price = prices[i];
        }
        // 计算当天卖出的利润，更新最大利润
        else if (prices[i] - min_price > max_profit) {
            max_profit = prices[i] - min_price;
        }
    }

    printf("%d\n", max_profit);
    return 0;
}
