# 5.6 CHUYỂN TIN

**Time limit:** 1s.

**Problem:**

***(Bách khoa Đà Nẵng, 2001)***

*Cần chuyển hết n gối tin trên một mạng có m kênh truyền. Biết chi phi để chuyển i gói tin trên kênh j là C(i,j). Cho biết một phương án chuyển với chi phi thấp nhất.*

Dữ liệu vào: file văn bản **messages.inp** :

- Dòng 1: 2 số n và m.
- Dòng thứ i trong số n dòng tiếp: Dãy m số nguyên dương $b_1, b_2,...,b_m$ trong đó $b_j$ là chi phi chuyển i gói tin trên kênh j.

Dữ liệu ra: file văn bản **messages.out** :

- Dòng 1: tổng chi phí thấp nhất theo phương án tìm được;
- Dòng thứ j trong số m dòng tiếp theo: số lượng gói tin chuyển trên kênh j.

*Ví dụ:*

n = 5 gói tin, m = 4 kênh và chi C(i,j) cho trước, i - chỉ số dòng (số gói tin), j - chỉ số cột (kênh) thì cách chuyển sau đây sẽ cho chi phí thấp nhất là 2:

|Kênh|Số gói tin|Chi phí|
|:----:|:---:|:---|
|1|0|0
|2|4|1
|3|1|1
|4|0|0

|messages.inp|messages.out|
|:----:|:---:|
|5 4|2|
|31 10 1 1|0
|1 31 12 13|4
|4 10 31 1|1
|6 1 20 19|0
|10 5 10 10

#