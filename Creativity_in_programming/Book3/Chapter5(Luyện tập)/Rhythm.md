# 5.14 RHYΤΗΜ

**Time limit:** 1s.

**Problem:**

*Viết hàm Rhythm(s) cho ra dáng điệu của xâu kí tự s = ($s_1, s_2,...,s_n$) như sau:*

- Rhythm(s) = 1, nếu các kí tự trong s đều bằng nhau: $s_{1} = s_{2} =...=s_n$,
- Rhythm (s) = 2 nếu các kí tự trong s tạo thành dãy tăng chặt: $s_{1} < s_{2} <...<s_n$,
- Rhythm(s) = 3, nếu các kí tự trong s tạo thành dãy đồng biến: $s_{1} \leq  s_{2} \leq...\leq s_n$,
- Rhythm (s) = 4 nếu các kí tự trong s tạo thành dãy giảm chặt: $s_{1} > s_{2} >...>s_n$,
- Rhythm n(s) = 5 nếu các kí tự trong s tạo thành dãy nghịch biến: $s_{1} \geq s_{2} \geq...\geq s_n$.
- Rhythm(s) = 0, nếu không xảy ra các tình huống trên.

#