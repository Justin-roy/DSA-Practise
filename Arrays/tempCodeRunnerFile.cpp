 int i = 0;
    while (i < size)
    {
        int correctIndex = arr[i] - 1;
        if (arr[i] != arr[correctIndex])
        {
            swap(arr[i], arr[correctIndex]);
        }
        else
        {
            i++;
        }
    }