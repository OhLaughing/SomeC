char isContain(char s[], char c)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            return 1;
        i++;
    }
    return 0;
}
void squeeze(char s1[], char s2[])
{
    int i = 0;
    int j = 0;
    while (s1[i] != '\0')
    {
        if(!isContain(s2,s1[i]))
            s1[j++] = s1[i];
        i++;
    }
    s1[j] = '\0';
}

