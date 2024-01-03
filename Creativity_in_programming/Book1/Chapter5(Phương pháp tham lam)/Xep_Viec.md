# 5.2 XẾP VIỆC

**Time limit:** 1s.

**Problem:**

*Có N công việc cần thực hiện trên một máy tính, mỗi việc đòi hỏi đúng l giờ máy. Với mỗi việc ta biết thời hạn phải nộp kết quả thực hiện sau khi hoàn thành việc đó và tiền thưởng thu được nếu nộp kết quả trước hoặc đúng thời điểm quy định. Chỉ có một máy tính trong tay, hãy lập lịch thực hiện đủ N công việc trên máy tính sao cho tổng số tiền thưởng thu được là lớn nhất và thời gian hoạt động của máy là nhỏ nhất. Giả thiết rằng máy được khởi động vào đầu ca, thời điểm t = 0 và chỉ tắt máy sau khi đã hoàn thành đủ N công việc.*

Dữ liệu vào: tệp văn bản viec.inp:

- Dòng đầu tiên là số N.
- N dnfg tiếp theo: mỗi việc được mô tả bằng hai số tự nhiên, số thứ nhất là thời hạn giao nộp, số thứ hai là tiền thưởng. Các số cách nhau bởi dấu cách.

*Ví dụ:*

| viec.inp | Ý nghĩa: |
|:----|:-----|
|4   | Cho biết có 4 việc với các thông tin sau:  |
|1 15| - Việc thứ nhất phải nộp không muộn hơn thời điểm 1 (giờ) với tiền thưởng 15 (ngàn đồng) |
|3 10 | - Việc thứ hai phải nộp không muộn hơn thời điểm 3 (giờ) với tiền thưởng 10 (ngàn đồng)|
| 5 100| - Việc thứ ba phải nộp không muộn hơn thời điểm 5 (giờ) với tiền thưởng 100 (ngàn đồng)|
|1 27|- Việc thứ tư phải nộp không muộn hơn thời điểm 1 (giờ) với tiền thưởng 27 (ngàn đồng)|

*Dữ liệu ra:* tệp văn bản viec.out :

- N dòng đầu tiên, dòng t ghi một số tự nhiên i cho biết việc thứ i được làm trong t giờ.
- Dòng cuối cùng ghi tổng số tiền thu được.

Với ví dụ trên, tệp viec.out sẽ như sau:

| viec.out | Ý nghĩa: |
|:----|:-----|
|4   | - Giờ thứ 1 thực hiện việc 4 và nộp đúng hạn nên được thưởng 27; |
|2| - Giờ thứ 2 thực hiện việc 2 và nộp đúng hạn nên được thưởng 10; |
|3 | - Giờ thứ 3 thực hiện việc 3 và nộp đúng hạn nên được thưởng 100;|
| 1| - Giờ thứ 4 thực hiện việc 1;|
| 137| - Tổng tiền thưởng thu được do đã hoàn thành đúng thời hạn ba việc 4, 2 và 3 là 27 + 10 + 100 = 137.|

#