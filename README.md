# cpp module
## subject 번역
[by Joockim](https://www.notion.so/CPP_MODULE-d127f182fb4340669314cf9354d303d8)

## CPP 코딩 표준

[구글 표준을 기준으로 하자](https://valueelectronic.tistory.com/161)

1. 함수/변수/파일명은 약어 사용하지 않고 서술형으로 짓는다.
   - 가능한 상세한 이름을 사용한다.
   - 다른 사람이 즉시 이해할 수 있는 것이 글자 길이를 줄이는 것보다 중요하다.
   - 제 3자에게 익숙하지 않은 약어를 사용하지 않으며, 축약하지 않는다.

2. 파일명/디렉터리명은 모두 소문자로하고 '_'를 사용
   - 이미 존재하는 파일 이름은 사용하지 않는다.
   - 파일 이름은 되도록 상세하게 짓는다.
   - 인라인 함수는 헤더 파일에 정의한다.
3. 타입 이름은 대문자로 시작하며 "_" 없이 단어마다 첫 글자를 대문자로 작성한다.
4. 변수 이름은 모두 소문자로 작성하며 언더바 사용
   - 전역변수는 g_ 접두어 사용
5. 상수 이름은 k로 시작하고, 대소문자가 섞인 형태를 사용한다.
6. 함수이름은 대문자로 시작하고 각 단어 첫 글자를 대문자로 사용
   - 실행 중 크래시가 발생할 수 있다면 함수의 이름 뒤에 OrDie를 붙인다.
7. 열거형 이름은 접두어 "e"를 붙이고, 각 단어의 첫 글자를 대문자로 쓰며 언더바 "_" 는 사용하지 않는다.
8. 가능하면 매크로를 사용하지 않는다. 매크로보다는 인라인함수, 열거형, const 변수를 사용한다.

#### *예외*

*표준 기술을 구현하는 경우, 해당 표준 문서 상의 표현과 통일성을 갖기 위해 문서 상에 정의된 이름/형태를 그대로 사용할 수 있다.*



## CPP00

### char[] to string

cpp에서 string이라는 변수타입이 새로 생겼는데, c에서 문자열을 다룰 때 사용하던 char[] 을 string으로 변환은 어떻게 할까?

- Char[] to string

```cpp
char ch2[100] = {"Oh my god"};
string str(ch2);

cout <<str<<endl;
```

string 선언시에 괄호안에 char변수를 넣어주면 된다.

* String to char[]

```cpp
char ch[100];
string a = "I wanna go to bed";
strcpy(ch,a.c_str());

cout<<ch<<endl;
```

1 ) c_str로 string변수를 char로 변환 

2 ) strcpy로 ch변수에 변환값 저장



### std::end 과 "\n" 차이

https://yechoi.tistory.com/48



### 컴파일러 익스플로러로 코드 성능 비교하기

https://gcc.godbolt.org/



### Class 로 생성된 인스턴스는 메모리를 어떻게 사용하는가?

궁금한 이유, c 에서 포인터는 64비트 운영체제의 경우 8바이트를 차지한다는 것을 알기 때문에 구조체등을 인자로 받을 때 포인터로 받아서 메모리 복제에 소요되는 시간을 줄일 수 있었다. 클래스도 포인터로 넘겨주는게 좋은가?



### 입력 버퍼 ? 스트림?

http://www.tcpschool.com/cpp/cpp_io_streamBuffer

![스트림](README.assets/img_c_stream.png)

[C++에서 EOF (cnt+D) 로 종료 시](https://pythonq.com/so/c%2B%2B/1570575) 



## CPP01



### 클래스 생성자 만들 때, 어떤식으로 이름짓는게 좋은지 조언을 구해보자

![image-20210419112037581](README.assets/image-20210419112037581.png)



### 소멸자에 virtual을 쓰는 이유

[링크](http://hyacinth.byus.net/moniwiki/wiki.php/C%2B%2B/%EC%86%8C%EB%A9%B8%EC%9E%90%EC%97%90%20virtual%EC%9D%84%20%EC%93%B0%EB%8A%94%20%EC%9D%B4%EC%9C%A0)



### 난수 발생

난수를 발생시킬 때 rand와 시드값 생성인 srand의 한계가 존재한다. > srand(time(0)) 은 초단위의 씨드이기 때문에 같은 난수가 사용될 확률이 매우 높다.

또한 나머지 연산자를 통해 최대값 미만의 난수를 얻는 방법을 주로 사용한는데, 여기서는 비균일 분포를 이룬다는 한계가 존재한다. 이는 금융 등



[c++ 에서는 c에서 쓰던 rand 와 srand를 갖다 버리자](https://modoocode.com/304)