
#include <stdio.h>
#include <string.h>

// 反转字符串，方便从低位开始计算
void reverse(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {
    char num1[100], num2[100];
    scanf("%s %s", num1, num2);  // 以字符串形式读取大数

    reverse(num1);  // 反转后，个位在字符串首（便于从低位开始计算）
    reverse(num2);

    char result[101] = {0};  // 结果数组，预留一位存最高位进位
    int carry = 0;           // 进位
    int i = 0;

    // 逐位相加：处理两个数的所有位，以及最后可能的进位
    while (num1[i] != '\0' || num2[i] != '\0' || carry != 0) {
        // 提取当前位的数字（若超出长度则为0）
        int d1 = (num1[i] != '\0') ? (num1[i] - '0') : 0;
        int d2 = (num2[i] != '\0') ? (num2[i] - '0') : 0;

        // 计算当前位总和（含进位）
        int sum = d1 + d2 + carry;
        result[i] = (sum % 10) + '0';  // 当前位结果
        carry = sum / 10;              // 更新进位

        i++;
    }

    reverse(result);  // 反转结果，恢复正确顺序
    printf("%s\n", result);

    return 0;
}
