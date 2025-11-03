#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int height[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &height[i]);
    }

    int left = 0;          // 左指针（起始于最左端）
    int right = n - 1;     // 右指针（起始于最右端）
    int max_area = 0;      // 最大面积

    while (left < right) {
        // 计算当前面积：宽 × 高（高取较短的垂线）
        int width = right - left;
        int current_height = (height[left] < height[right]) ? height[left] : height[right];
        int current_area = width * current_height;

        // 更新最大面积
        if (current_area > max_area) {
            max_area = current_area;
        }

        // 移动较短的垂线（寻找可能更大的面积）
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    printf("%d\n", max_area);
    return 0;
}

