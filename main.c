char findTheDifference(char * s, char * t) {
    int sumS = 0;
    int sumT = 0;
    int i = 0;

    while (t[i] != '\0') {
        sumT += (int)t[i];
        if (s[i] != '\0')
            sumS += (int)s[i];
        i++;
    }

    return (char)(sumT - sumS);
}

