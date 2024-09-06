#include <stdio.h>

int main() {
    int arr[9] = { 0 };
    int max = 0, idx = 0;

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
        {
            if (arr[i] > arr[i - 1])
            {
                idx = i;
                max = arr[i];
            }
        }
    }
    printf("%d\n%d\n", max, idx+1);

    return 0;
}