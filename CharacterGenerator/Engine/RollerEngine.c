#include "RollerEngine.h"

void quickSort(int* arr, int elements)
{
#define MAX_LEVELS 300
    int piv;
    int beg[MAX_LEVELS];
    int end[MAX_LEVELS];
    int i = 0;
    int left;
    int right;
    int swap;
    beg[0] = 0;
    end[0] = elements;
    while (i >= 0)
    {
        left = beg[i];
        right = end[i] - 1;
        if (left < right)
        {
            piv = arr[left];
            while (left < right)
            {
                while (arr[right] >= piv && left < right)
                {
                    right--;
                }
                if (left < right)
                {
                    arr[left++] = arr[right];
                }
                while (arr[left] <= piv && left < right)
                {
                    left++;
                }
                if (left < right)
                {
                    arr[right--] = arr[left];
                }
            }
            arr[left] = piv;
            beg[i + 1] = left + 1;
            end[i + 1] = end[i];
            end[i++] = left;
            if (end[i] - beg[i] > end[i - 1] - beg[i - 1])
            {
                swap = beg[i];
                beg[i] = beg[i - 1];
                beg[i - 1] = swap;
                swap = end[i];
                end[i] = end[i - 1];
                end[i - 1] = swap;
            }
        }
        else
        {
            i--;
        }
    }
}

int statRoller() {
    int myArray[4];
    int sum = 0;
    for (int i = 0; i < 4; ++i) {
        myArray[i] = rand() % 6 + 1;
    }
    quickSort(myArray, 3);
    for (int i = 3; i > 0; --i) {
        sum += myArray[i];
    }
    return sum;
}