# 3.1 CHỊ HẰNG

**Time limit:** 1s.

**Problem:**

*Nhân dịp Tết Trung Thu Chị Hằng rời Cung Trăng mang m món quà khác nhau mã số 1...m đến vui Trung Thu với n em nhỏ mã số 1...n tại một làng quê. Trước  khi Chị Hằng phát quà, mỗi em nhỏ đã viết ra giấy những mốn quà mà em đó muốn. Yêu cầu: Giúp Chị Hằng chia cho mỗi em đúng 1 món quà mà em đó yêu thích.*

 Dữ liệu vào: file văn bản **autum.inp** :

- Dòng 1: hai số n và m.
- Dòng i trong số n dòng tiếp theo: $k b_1b_2...b_k k$ là số lượng quà mà em i yêu thích; $b_1b_2...b_k$ là mã số các món quà em i yêu thích.

Dữ liệu ra: file văn bản **autum.out** :

- Dòng 1: v - số em nhỏ đã được nhận quà. 
- v dòng tiếp theo: mỗi dòng 2 số i b cho biết em i được nhận món quà b.

*Ví dụ:*

|autum.inp|Giải thích|autum.out|
|:----|:---|:---|
|5 5|Có 5 em nhỏ và 5 món quà| 5
|2 1 5| Em 1 thích 2 món quà: 1 và 5;| 1 1|
|2 2 4|Em 2 thích 2 món quà: 2 và 4;|2 4
|2 1 2|Em 3 thích 2 món quà: 1 và 2;| 3 2
|3 1 4 5| Em 4 thích 3 món quà: 1, 4 và 5;| 4 5
|2 1 3|Em 5 thích 2 món quà: 1 và 3.|5 3

#