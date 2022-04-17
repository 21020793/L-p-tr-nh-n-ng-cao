void reverse(char *s) {
    // Your code goes here
    int len = 0;
    while (*(s+len) != '\0')
    {
        len++;
    }
    char arr[len];
    for (int i = 0; i < len; i++)
    {
        arr[i] = *(s+i);
    }
    
    for (int i = 0; i < len; i++)
    {
        *(s+i) = arr[len - 1 - i];
    }
}
