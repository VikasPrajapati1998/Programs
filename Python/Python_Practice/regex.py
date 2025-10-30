import re
print(re.search("[HO]onesty", 'Honesty'))
print(re.search("[HO]onesty", 'Onesty'))

# Pin Code
print(re.search('[0-9]{6}', '224149'))
print(re.search('[0-9]{6}', '2249'))
print(re.search('[0-9]{4}', '2249'))
print(re.search('[^0-9]{6}', 'ArjunJ'))
print(re.search('[^0-9]{6}', 'Arjun9'))
print(re.search('[^0-9]{6}', '225467'))
print(re.search('[a-z|A-Z|0-9]', 'A1r2j3u4n5'))
print(re.search('[A.N]', 'AJN'))
print(re.search('[A.*n]', 'Arjun'))
print(re.findall('[A.*n]', 'Arjun'))