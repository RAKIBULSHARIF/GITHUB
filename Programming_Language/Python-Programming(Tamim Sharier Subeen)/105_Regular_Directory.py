import re
st = """
<div class="book-cover">
<a href="http://dimik.pub/book/155/learn-programming-with-python-by-tamim-shariar-subeen"><img
src="http://dimik.pub/wp-content/uploads/2017/05/learn/programming.with_.python.front_.cover_.small_.png"></a>
</div><!-- end .book-cover -->
<div class="slide-description">
<div class-"inner-sd">
<div class="top-sd-head clearfix">
<div class="tsh=left">
<h2 class="sd-title"><a href="http://dimik.pub/book/155/lear-programming-with-pthon-by-tamim-shariar-subeen">Python diye Programming Shekha</a</h2>
"""
regexp = re.compile(r'<div class="book-cover">\s*<a href="(.*?)">\s*<img src="(.*?)">.*?<h2 class="sd-title"><.*?>(.*?)<',re.S)
result = re.findall(regexp, st)
print(result)