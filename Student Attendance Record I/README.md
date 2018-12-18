# 551. Student Attendance Record I

You are given a string representing an attendance record for a student. The record only contains the following three characters:
>'A' : Absent.  
'L' : Late.  
'P' : Present.

A student could be rewarded if his attendance record doesn't contain more than one 'A' (absent) or more than two continuous 'L' (late).

You need to return whether the student could be rewarded according to his attendance record.

Example 1:
>Input: "PPALLP"  
Output: True

Example 2:
>Input: "PPALLL"  
Output: False

```
bool checkRecord(char* s) {
    int slen=strlen(s),i,a_cnt,l_cnt;
    char c;
    for(a_cnt=l_cnt=i=0;i<slen;i++){
        c=s[i];
        switch(c){
            case 'P':
                l_cnt=0;
            break;
            case 'A':
                if(a_cnt) return false;
                else a_cnt=1;
                l_cnt=0;
            break;
            case 'L':
                if(l_cnt<2) l_cnt++;
                else return false;
            break;
        }
    }
    return true;
}
```