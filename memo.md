## 코딩할 때 주의할 점  

- 전체적으로 코드를 구성하는 과정을 거친 후 코딩하자.  
- 필기를 하거나 주석으로 구성을 해보거나  

array  
- 인자를 넘길 때, 이차원 배열의 경우 int arr[][3] 이런 식으로 상수의 크기가 할당되어야 가능하다.  
  이렇게 전달하기 힘들 경우에는 최대 크기를 지정할 것  
- int arr[][]의 경우, call by reference  
  struct의 경우, call by value   

vector  
- call by value   
- 복사본이 인자로 넘어간다.  
- call by reference로 하기 위해서는 포인터나 참조(&)를 이용한다.  
- erase(O(N)), insert(O(N))  


자주하는 실수    
- min, max값 설정 시 주의  
  max값도 음수값이 될 수 있다.  
  int의 경우,   
  min: -2^31(0x80000000)    
  max: 2^31-1(0x7fffffff)  
- if문 여러개 사용 시 주의  
  첫번째 if문에서 변경된 값이 두번째 if문에서 쓰이는 경우 잘못된 결과를 가져올 수 있다.  
  이런 경우에는 서로 상관관계가 없어도 if, else if를 사용하는 습관  


