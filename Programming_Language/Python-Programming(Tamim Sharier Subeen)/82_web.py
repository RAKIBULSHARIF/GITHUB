import requests
img_url = "https://goo.gl/JxktPw"
r = requests.get(img_url)
with open("pybook1.png","w") as f:
	f.write(r.text)