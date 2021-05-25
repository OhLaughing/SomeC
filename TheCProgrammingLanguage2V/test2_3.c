int htoi(char c[])
{
    int result = 0;
    int i=0;
    while (c[i] != '\0')
    {
        printf("%d: %c\n", i, c[i]);
        if (c[i] >= '0' && c[i] <= '9')
        {
            result = result << 4;
            result += (c[i] - '0');

        }
        else if (c[i] >= 'a' && c[i] <= 'f')
        {
            result = result << 4;
            result+= c[i]-'a' +10;
        }
        else if ((c[i] >= 'A' && c[i] <= 'F'))
        {
            result = result << 4;
            result+=c[i]- 'A' +10;
        }
        i++;
    }
    return result;
}
