# 📌 scanf 함수
### * 1-1) 헤더 파일 및 함수 모양
*****
#### - 헤더파일: <stdio.h>
#### - 함수의 모양 int scanf("입력받을 문자의 서식", 변수의 주소... )
*****
### * 1-2) scanf 함수에서 사용하는 서식 문자
*****
#### %d : int 타입 정수형
#### %d : int 타입 정수형
#### %c : char 타입 문자형
#### %s : char* 타입 문자열
#### %lf : double 타입 실수
#### %f : float 타입 실수
*****
### * 1-3) scanf 함수에서 &의 의미
*****
#### 변수 앞에 &를 붙이게 되면 이는 해당 변수의 주소를 가리키게 된다.
#### int a; 라는 변수가 있다면 &a는 a의 주소를 가리킨다.<br/>
#### scanf에서 두 번째 인자부터는 데이터를 받아들일 변수를 집어넣는데, 이때 &를 붙여서 변수의 주소를 가리키게 한다.
#### 이는 scanf에서는 전달되는 인자에 사용자가 입력 해준 값을 넣어주어야 하는데, 그 인자가 call by value 라면 복사만 될 뿐 인자로 넣어준 변수에는 들어오지 않기 때문에, call by reference를 이용하기 위해서 &를 붙인다.<br/>
#### 그렇기 때문에 일반 변수들을 보낼 때는 &을 붙여서 주소를 보내도록 하고 (call by reference).
#### 배열의 이름과 같이 &를 붙이지 않아도 주소를 가리키는 것들은 &를 떼고 인자로 넣어주면 된다.<br/>
#### 예를 들면 아래와 같이 변수와 배열이 존재한다고 했을 때,
#### char a;
#### char arr[10];<br/>
#### 변수는 scanf("%c", &a)을 넣어야 하고
#### 배열의 이름과 같이 주소를 가리키는 것들은 scanf("%s", arr) 와 같이 &를 붙이지 않아도 된다.
#### 만약 배열의 특정 위치는 변수와 같으니 역시 &를 붙여야겠죠 scanf("%c", &arr[2]) 이와 같이 말이다.
