char *mystrchr(char *s, char c){
    while(*s != c){
        if(*s == 0){
            return 0;
        }
        s++;
    }
    return s;
}
