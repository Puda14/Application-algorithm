# 2.7 TRẢ TIỀN

**Time limit:** 1s.

**Problem:**

*Có N loại tiền mệnh giá $m_i$ và số lượng $s_i$, i = 1...N. Xác định số lượng mỗi loại để có thể tra lại V đồng.*

Dữ liệu vào: tệp văn bản **TRATIEN.INP** :

- Dòng 1: hai số tự nhiên N và V, 2 $\leq$ N $\leq$ 15.
- Dòng 2: N số tự nhiên $m_1, m_2, ..., m_N$.
- Dòng 3: N số tự nhiên $s_1, s_2, ...,s_N$.

Dữ liệu ra: tệp văn bản **TRATIEN.OUT** cho thấy N số tự nhiên $c_1, c_2, ..., c_N$ thể hiện số lượng tờ tiền mỗi loại cần trả, $c_{1}m_{1} + c_2 m_2+ ...+c_N m_N$ = V. Nếu vô nghiệm ghi số 0.

*Chú ý:* Trong các tệp *.INP và *.OUT các số trên cùng dòng cách nhau qua dấu cách.

*Ví dụ:*

|TRATIEN.INP|TRATIEN.OUT|
|:----|:---|
|6 156|0 3 0 0 5 1|
|1 2 5 10 20 50|
|4 7 2 3 6 2|

#