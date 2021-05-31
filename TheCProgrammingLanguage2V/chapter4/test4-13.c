static void reverse1(char s[], int left, int right){
    if(left <right){
        char t = s[left];
        s[left] = s[right];
        s[right] = t;
        reverse1(s, left + 1, right - 1);
    }
}
void reverse(char s[]){
    int len = strlen(s);
    reverse1(s, 0, len - 1);
}
