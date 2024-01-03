# 8.2 CHỮ CUỐI KHÁC 0

***(Đề thi Tin học Quốc gia Ai-len, năm 1994)***

**Time limit:** 1s.

**Problem:** 

*Tìm chữ số cuối cùng khác 0 của n! với n trong khoảng 1...100.*

*Ví dụ:*

- *n* = 7, kết quả = 4.
- *n* = 15, kết quả =8.

## Bài tập làm thêm

**Bài T1**. Cho biết N! tận cùng với bao nhiêu chữ số 0. Ví dụ, 15! tận cùng với 3 chữ số 0, vì 15! = 130764368000.

*Gợi ý:* Nếu *p* là một số nguyên tố $p^{K}$ là nhân tử trong dạng phân tích N! ra thừa số nguyên tố thì *k* được tính bằng tổng của các thương nguyên trong phép chia liên tiếp của *N* cho *p*.

*Ví dụ:* 

- *N* = 15, *p* = 2 và kí hiệu: là phép chia nguyên, ta tính được 15 : 2 = 7; 7 : 2 = 3; 3 : 2 = 1; 1 : 2 = 0. Do đó *k* = 7 + 3 + 1 + 0 = 11.
- *N* = 15, *p* = 5 ta tính được 15 : 5 = 3; 3 : 5 = 0. Do đó *k* = 3 + 0 = 3.

Như vậy 15! = $2^{11} . 5^{3}$.C.

Chứng minh điều này khá dễ, bạn chỉ cần viết dãy 1, 2, ... N thành các dòng, mỗi dòng chứa *p* thừa số.

|||||
|:---|:---|:---|:---|
| 1 |...|P|Vậy là trong tích 1...*N* chứa *$K_1$* thừa số *p*. Trong tích 1...*$K_1$* sẽ chứa $K_1$ : *p* thừa số *p*...|
|P + 1|...|2P||
|...|...|...||
|...|...|*$k_1p = N!$*||

**Bài T2**. Phân tích *N!* ra thừa số nguyên tố.

*Ví dụ:* 

15! = $2^{11}.3^6. 5^3.7^3.11.13$.

#
