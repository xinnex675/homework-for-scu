#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);  // 读取测试数据组数
    
    while (m--) {
        int sum = 0;  // 存储输入数字的总和
        int num;
        int count = 0;  // 统计输入的有效数字个数（不含0）
        
        // 循环读取一组数据，直到遇到0为止
        while (1) {
            scanf("%d", &num);
            if (num == 0) {
                break;
            }
            sum += num;
            count++;
        }
        
        // 计算1到n的总和（n = count + 1，因为缺失了一个数）
        int total = (count + 1) * (count + 2) / 2;
        // 缺失的数 = 1到n的总和 - 输入数字的总和
        int missing = total - sum;
        
        printf("%d\n", missing);
    }
    
    return 0;
}
