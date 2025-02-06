int maximumLengthSubstring(char* s) {
    int max = 0;
    int *f=calloc(26,sizeof(int));
    int start , end;
    int string = strlen(s);

    for(start = 0 , end = 0 ; end < string ; end++){
        f[s[end]-'a']++;

        while(f[s[end]-'a']>2){
            f[s[start++]-'a']--;
        }
        max = fmax(max, end - start + 1);
    }
 
    return max;
}