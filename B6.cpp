#include <bits/stdc++.h>

int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2) {
    int n = lenArr1 + lenArr2;
    int mergeArr[n];
    int* ans = new int[n];
    bool Ascending = true;
    int firstIndex = 0, secondIndex = 0, mergeIndex = 0;

    if ((firstArr[0] - firstArr[1] < 0) && (secondArr[0] - secondArr[1] < 0))
    {
        Ascending = true;
    } else Ascending = false;

    while (firstIndex < lenArr1)
    {
        mergeArr[mergeIndex] = firstArr[firstIndex];
        mergeIndex++;
        firstIndex++;
    }
    while (secondIndex < lenArr2)
    {
        mergeArr[mergeIndex] = secondArr[secondIndex];
        mergeIndex++;
        secondIndex++;
    }

    if (Ascending) sort(mergeArr, mergeArr + n);
    else sort(mergeArr, mergeArr + n, greater<int>());

    for (int i = 0; i < n; i++)
    {
        *(ans + i) = mergeArr[i];
    }
    return ans;
}

