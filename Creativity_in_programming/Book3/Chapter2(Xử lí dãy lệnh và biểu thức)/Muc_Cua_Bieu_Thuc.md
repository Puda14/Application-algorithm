# 1.8 MỨC CỦA BIỂU THỨC

**Time limit:** 1s.

**Problem:**

*Trong các biểu thức tính toán người ta thường dùng các cặp ngoặc (...) để nhóm thành các biểu thức con. Mức của biểu thức được hiểu là số lượng tối đa các cặp ngoặc lồng nhau trong biểu thức, ví dụ biểu thức (a + (b - c) * d) - (a - b) có mức 2. Cho trước k cặp ngoặc và mức h. Hãy cho biết có thể xây dựng được bao nhiêu biểu thức mức h và sử dụng đúng k cặp ngoặc. Ví dụ, ta có 3 biểu thức mức h = 2 sử dung đúng k = 3 cặp ngoặc như sau:

( () () )

( () ) ()

() ( () )

*Dạng hàm:* Level(k,h)

- Test 1. Level(3,2) = 3;
- Test 2. Level(19,18) = 35.

#