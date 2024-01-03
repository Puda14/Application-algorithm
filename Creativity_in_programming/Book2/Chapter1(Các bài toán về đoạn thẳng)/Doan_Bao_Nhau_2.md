# 1.6 ĐOẠN BAO NHAU 2

**Time limit:** 1s.

**Problem:**

*Cho N đoạn thẳng trên trục số với các điểm đầu $a_i$ và điểm cuối $b_i$ là những số nguyên trong khoảng (-1000, 1000) $a_i \leq b_i$ i = 1...N. Liệt kê tối đa đoạn K bao nhau.*

Dữ liệu và: tệp văn bản **DOAN.INP** (xem bài đoạn trước)

Dữ liệu ra: tệp văn bản **DOAN.OUT** : 

- Dòng đầu tiên: số tự nhiên K.
- K dòng tiếp theo, mỗi dòng chứa một số tự nhiên là chỉ số của đoạn trong dãy tìm được. Các chỉ số được liệt kê theo trật tự bao nhau từ lớn đến nhỏ.

*Ví dụ* dưới cho biết tối đa có 3 đoạn bao nhau là các đoạn 1, 5 và 2: [-1, 12] $\supseteq$ [8, 11] $\supseteq$ [8, 10].

|DOAN.INP|DOAN.OUT|
|:----|:---|
|6|3|
|-1 12|1|
|8 10|5|
|8 11|2|
|2 7||
|17 18||
|13 20||

#