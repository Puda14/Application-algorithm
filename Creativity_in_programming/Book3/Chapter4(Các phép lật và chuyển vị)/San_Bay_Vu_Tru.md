# 4.3 SÂN BAY VŨ TRỤ

**Time limit:** 1s.

**Problem:**

*Muốn đưa các con tàu vũ trụ vào đúng quỹ đạo trên không gian người ta cần chọn địa điểm thích hợp để xây dựng đường băng. Nếu đường băng đặt tại vị trí thuận lợi, phù hợp với hướng vận hành của các hành tinh thì sẽ tiết kiệm được nhiều nhiên liệu. Người ra đã xây dựng xong một đường bằng tại sân bay vũ trụ. ĐƯờng băng gồm n tấm bê tông lớn được đặt vào một vị trí cố định. Trong các tấm bê tông chứa nhiều linh kiện và đường nối tinh vi do đó sơ đồ liên kết rất phức tạp. Tuy nhiên, lúc kiểm tra người ta đã phát hiện ra sự nhầm lẫn lớn: i tấm bê tông đầu đường băng đặt sai vị trí: chúng cần được chuyển về phía cuối đường băng. Rất may là trên công trường lúc này còn một xe đặc chủng có sức trở 1 tấm bê tông và một cần trục có sức nâng 1 tấm bê tông. Xe chạy trên đường ray song song với đường băng. Mỗi tấm bê tông cần chuyển được tháo các khớp nối và được cần trục cẩu lên đặ trên xe rồi được xe chuyển đến vị trí cần đặt lại. Tại vị trí đó cần trục lại cẩu tấm bê tông khỏi xe và đặt vào vị trí thích hợp. Cần trục cũng có thể cẩu trực tiếp 1 tấm bê tông từ 1 vị trí đến vị trí còn trống nào đó. Thời gian cẩu và vận chuyển một tấm bê tông là đáng kể. Hãy đề xuất 1 phương án khắc phục sự cố với thời gian ngắn nhất, cụ thể là cần giảm tối đa số lần cầu bê tông.*

*Ví dụ:*

Đường băng gồm 7 tấm bê tông mã số lần lượt từ 1 đến 7. 3 tấm bê tông đầu tiên (1, 2, 3) bị đặt sai vị trí. Sau khi chuỷen lại 3 tấm này ta thu được đường băng đặt đúng là (4, 5, 6, 7, 1, 2, 3).

![Alt text](<Screenshot (1222).png>)

#