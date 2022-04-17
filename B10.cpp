void rFilter(char *s) {
    int len = 0;
    while (*(s+len) != '\0')
    {
        len++;
    }
    for (int i = len-1; i >=0 ; i--)
    {
        if ((*(s + i) >= 'a' && *(s + i) <= 'z') || (*(s + i) >= 'A' && *(s + i) <= 'Z')) 
        {
           break;
        } else 
        {
            *(s+i) = '_';
        }
    }
}
