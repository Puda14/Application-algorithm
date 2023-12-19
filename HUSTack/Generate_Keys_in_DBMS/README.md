# Description

Trong hệ quản trị cơ sở dữ liệu (DB) đã lưu trữ các đối tượng có khóa (key) là các xâu ký tự độ dài đều bằng L và mỗi ký tự đều là các con số từ 0 đến 9. Khóa của các đối tượng không được phép trùng lặp. 

Hiện tại, DB đã có các khóa là k1, k2, ..., kn. Người dùng muốn thêm m đối tượng nữa vào cơ sở dữ liệu. DB phải sinh ra m khóa nhỏ nhất khác nhau nữa có độ dài bằng L và không trùng với n khóa đã có. 

Lưu ý: DB không chấp nhận khóa gồm toàn chữ số 0.
Hãy viết chương trình giúp DB sinh ra m khóa mới này.

Dữ liệu

- Dòng 1: n, L, m (1 <= n,m <= 10000, 1 <= L <= 32)
- Dòng i+1 (i=1,...,n): ghi khóa ki

Kết quả
- Dòng i (i = 1,2,...,n+m) ghi khóa thứ i (sắp xếp theo thứ tự từ điển) trong dãy khóa bao gồm cả khóa đã có trong DB và khóa mới 

Ví dụ

Dữ liệu

4 6 10

000011

000002

000004

000003


Kết quả 

000001

000002

000003

000004

000005

000006

000007

000008

000009

000010

000011

000012

000013

000014