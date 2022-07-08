# include <iostream>

int main()
{
  printf("5 * 4 - 10 = 10\n");
  // \n은 줄바꿈 Enter와 같다.
  int a=5, b=4, c=10;
  // a,b,c를 각각 5,4,10 에 대입한다.
  printf("%d * %d -%d\n", a, b, c, a * b - c);
  // %d 각각 a,b,c,a*b-c로 대입이 된다.
  a = a * b - c;
  // 앞의 5로 대입된 a를 a*b-c로 대입 한다.(5에서 10으로)
  printf("memory a [%d] = %d\n", &a, a);
  //&a는 a의 주소값. 변수 이름 앞에 &를 붙이면 a의 주소값을 나타내는데 예를들어
  //변수 a의 값이 6이고 0001에 저장되어 있다면 &a의 값이 0001이 된다.
}