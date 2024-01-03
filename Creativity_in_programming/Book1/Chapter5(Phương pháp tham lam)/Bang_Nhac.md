# 5.1 BĂNG NHẠC

**Time limit:** 1s.

**Problem:** 

*Người ta cần ghi N bài hát, được mã số từ 1 đến N vào một băng nhạc có thời lượng tính theo phút đủ chứa toàn bộ các bài đã cho. Với mỗi bài hát ta biết thời lượng phát của bài đó. Băng sẽ được lắp vào một máy phát nhạc đặt trong một siêu thị. Khách hàng muốn nghe bài hát nào chỉ việc nhấn phím ứng với bài đó. Để tìm và phát bài thứ i trên băng, máy xuất phát từ đầu cuộn băng, quay băng để bỏ qua i - 1 bài ghi trước bài đó. Thời gian quay băng bỏ qua mỗi bài và thời gian phát bài đó được tính như nhau. Tính trung bình, các bài hát trong một ngày được khách hàng lựa chọn với số lần (tần suất) như nhau. Hãy tìm cách ghi các bài trên băng sao cho tổng thời gian quay băng trong ngày là ít nhất.*

Dữ liệu vào được ghi trong tệp văn bản trên BANGNHAC.INP.

- Dòng đầu tiên là số tự nhiên N cho biết số lượng bài hát.
- Tiếp đến là N số nguyên dương thể hiện dung lượng tính theo phút của mỗi bài. Mỗi đơn vị dữ liệu cách nhau qua dấu cách.

Ví dụ dưới đây cho biết có N = 3 bài hát:

- Bài 1 phát trong thời gian 7 phút.
- Bài 2 phát trong thời gian 2 phút.
- Bài 3 phát trong thời gian 3 pút.

Dữ liệu ra được ghi trong tệp văn bản BANGNHAC.OUT theo dạng thức sau:

- N dòng đầu tiên thể hiện trật tự ghi bài hát trên băng: mỗi dòng gồm hai số nguyên dương *j* và *d* cách nhau bởi dấu cách, trong đó *j* là mã số của bài hát cần ghi, *d* là thời gian tìm và phát bài đó theo trật tự ghi này.
- Dòng thứ *n* + 1 ghi tổng số thời gian quay băng nếu mỗi bài hát được phát một lần trong ngày.

| BANGNHAC.INP | BANGNHAC.OUT |
|:----|:-----|
|3   | 2  2 |
|7  2  3| 3  5 |
| | 1 12|
| | 19|

Với ví dụ trên, kết quả thu được sẽ như sau:
- Cần ghi lần lượt trên băng các bài theo trật tự: bài 2, bài 3, bài 1;
- Để tìm và phát bài 2 cần 2 phút;
- Để tìm và phát bài 3 cần 5 phút;
- Để tìm và phát bài 1 cần 12 phút;
- Tổng thời gian để tìm và phát mỗi bài một lần là: 19 phút.

#