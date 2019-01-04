char* toLowerCase(char* str) {
    int len = strlen(str);
    for(int i = 0; i < len; i++){
        if(str[i]>='A'&&str[i]<='Z')
            str[i]+=32;
    }
    return str;
} 