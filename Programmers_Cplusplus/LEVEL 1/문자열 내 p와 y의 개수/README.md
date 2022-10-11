## 문자열 내 p와 y의 개수
***
### LEVEL 1 　 | 　 [프로그래머스에서 문제 보기](https://school.programmers.co.kr/learn/courses/30/lessons/12916)
대문자와 소문자가 섞여있는 문자열 s가 주어집니다. s에 'p'의 개수와 'y'의 개수를 비교해 같으면 True, 다르면 False를 return 하는 solution를 완성하세요. 'p', 'y' 모두 하나도 없는 경우는 항상 True를 리턴합니다. 단, 개수를 비교할 때 대문자와 소문자는 구별하지 않습니다.

Solution
-----------
+ ```tolower()```를 사용하여 소문자로 변환합니다
+ ```count```를 이용하여 ```p```와 ```y```의 개수를 가감합니다.
+ ```count```가 ```0```이면 ```True```, ```0```이아니면 ```False```를 반환합니다. 
