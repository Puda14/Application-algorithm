# 1.6 ĐOẠN LẶP 

**Time limit:** 1s.

**Problem:**

***(Những viên ngọc lập trình(Bentley))***

*Cho xâu s chứa n kí tự. Hãy xác định ba số nguyên i, j và k thoả mãn điều kiện 1 $\leq$ i < j $\leq$ n, k là giá trị max thoả mãn điều kiện s[i] = s[j], s[i + 1] = s[j + 1], ..., s[i + k - 1] = s[j + k - 1]. Hai đoạn bằng nhau gồm k kí tự trong s là s[i...i + k - 1] và s[j...j + k - 1], i < j, k max được gọi là hai đoạn lặp trong s.*

*Ví dụ:* s = 'xabababayyy' cho ta i = 2, j = 4, k = 5 ứng với đoạn lặp s[2...6] = 'ababa'.

#