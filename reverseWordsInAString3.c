// C Language

void reverseWord(char* st, char* end) {
    char temp;
    while (st < end) {
        temp = *st;
        *st = *end;
        *end = temp;
        st++;
        end--;
    }
}

char* reverseWords(char* s) {
    int length = strlen(s);
    char* st = s;

    for (int i = 0; i <= length; i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            reverseWord(st, &s[i - 1]);
            st = &s[i + 1];
        }
    }

    return s;
}