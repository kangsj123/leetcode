# 문자열  

## c++ 문자열 처리 정리  
### cin  
- 처음 입력된 white space를 무시한다. (엔터, 탭, 띄어쓰기)  
- 개행 문자를 저장하지 않는다.  
- 배열의 크기를 넘어사는 문자열을 입력받으면, 다른 변수 소유의 메모리에 덮어쓰게 된다.  

### getline  
- enter 키에 전달되는 개행문자를 입력의 끝으로 간주하여 한 행 전체를 읽는다.  
- 개행문자는 저장하지 않고 배열에 저장할 때 개행문자는 널 문자로 대체된다.  
- 공백 포함하여 입력 받는다.  
```c++ 
char str[20];//20개 이상 받으면 20까지만 입력 받는다.    
cin.getline(str, 20);
```
```c++
//istream 객체, string 변수의 이름, delimitChar  
//delimitChar는 '\n'가 들어가있다.  
//delimitChar를 만날때까지 읽어 string 변수에 저장  
string str;
getline(cin, str);
```

### get  
- 문자 하나를 입력 받는데, 엔터, 띄어쓰기도 하나의 문자로 취급한다.  
```c++
int a = cin.get();
```
