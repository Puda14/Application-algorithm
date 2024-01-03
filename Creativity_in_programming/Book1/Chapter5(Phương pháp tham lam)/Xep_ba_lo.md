# 5.3 XẾP BA LÔ

**Time limit:** 1s.

**Problem:** 

*Có N vật (mặt hàng), với mỗi vật ta biết trọng lượng và giá trị của nó. Hãy xác định trọng lượng cần lấy ở một số vật để xếp vào một ba lô có sức chứa tối đa là M sao cho giá trị chứa trong ba lô là lớn nhất. Giả thiết là có thể lấy một tỉ lệ tuỳ ý ở mỗi vật.*

Dữ liệu vào: tệp văn bản balo.inp :

- Dòng đầu tiên: hai giá trị nguyên dương N và M.
- N dòng tiếp theo, mỗi dòng chứa hai giá trị nguyên dương *d v* cho mỗi vật, trong đó *d* là trọng lượng, *v* là giá trị tính theo một đơn vị trọng lượng của vật đó (đơn giá). Các số cách nhau qua dấu cách.

| balo.inp| Giải thích |balo.out|
|:----|:-----|:-----|
|5 30  | Có N = 5 vẩh và sức chứa tối đa của ba lô là: M = 30 (kg). ||
|8 5|- Vật thứ 1 có trọng lượng 8, đơn giá 5 triệu đồng/kg; |8|
|5 4|- Vật thứ 2 có trong lượng 5, đơn giá 4 triệu đồng/kg;|3|
|4 2|- Vật thứ 3 có trong lượng 4, đơn giá 2 triệu đồng/kg;|0|
|3 8|- Vật thứ 4 có trong lượng 3, đơn giá 8 triệu đồng/kg;|3|
|16 6|- Vật thứ 5 có trong lượng 16, đơn giá 6 triệu đồng/kg.|16|
|||172|

*Dữ liệu ra:* Tệp văn bản tên balo.out :

- N dòng, dòng thứ *i* cho biết trọng lượng cần lấy ở vật thứ *i*.
- Dòng cuối cùng ghi tổng giá trị thu được.

#
