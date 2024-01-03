# 7.3 CẮM HOA

***(Olympic Quốc tế 1999)***

**Time limit:** 1s.

**Problem:** 

*Cần cắm hết k bó hoa khác nhau vào n lọ xếp thẳng hàng sao cho bó hoa có số hiệu nhỏ được đặt trước bó hoa có số hiệu lớn. Với mỗi bó hoa i ta biết giá trị thẩm mỹ khi cắm bó hoa đó vào lọ j là v[i, j].*

*Yêu cầu:* Xác định một phương án cắm hoa sao cho tổng giá trị thẩm mĩ là lớn nhất.

Dữ liệu vào ghi trong tệp văn bản **HOA.INP** :

- Dòng đầu tiên là hai trị *k* và *n*.
- Từ dòng thứ hai trở đi là các giá trị *v[i, j]* trong khoảng 0...10, với *i* = 1...*k* và *j* = 1...*n* ; 1 $\leq$ k $\leq$ n $\leq$ 100.

Dữ liệu ghi trong tệp văn bản **HOA.OUT** : 

- Dòng đầu tiên là tổng giá trị thẩm mỹ của phương án cắm hoa tối ưu.
- Từ dòng thứ hai là dãy *k* số hiệu lọ được chọn cho mỗi bó hoa.

Các số liệu vào và ra đều là số tự nhiên và được ghi cách nhau bởi dấu cách trên mỗi dòng.

*Ví dụ:*

|HOA.INP|HOA.OUT|Giải thích|
|:----|:---|:---|
|4 6|24| Kết quả cho biết giá trị thẩm mỹ sẽ đạt 24 (điểm) nếu cắm hoa như sau:|
|***1*** 1 6 4 3 10|1 3 4 6|- Bó hoa 1 cắm vào lọ 1;|
|9 1 ***4*** 7 2 7||- Bó hoa 2 cắm vào lọ 3;|
|7 2 6 ***10*** 2 3 ||- Bó hoa 3 cắm vào lọ 4;|
|6 10 7 1 3 ***9***||- Bó hoa 4 cắm vào lọ 6.|

#