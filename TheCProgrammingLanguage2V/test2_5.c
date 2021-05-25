
int any(char s1[],char s2[]){
    int i =0;
    while(s1[i]!='\0'){
        int j=0;
        int k=0;
        while(s2[j]!='\0' && s1[k]!='\0' && s2[j] == s1[i+k]) {j++;k++;}
        if(s2[j] == '\0')
            return i;
        else i++;
    }
    return -1;
}
