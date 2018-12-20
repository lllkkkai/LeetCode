int numJewelsInStones(char* J, char* S) {
    int cou=0;
    for(int i = 0; i < strlen(J); i++){
        for(int j = 0; j < strlen(S); j++){
            if(J[i] == S[j])
                cou++;
        }
    }
    
    return cou;
}