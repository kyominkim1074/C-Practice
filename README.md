# C 언어

## C 프로그래밍

### 순서

1. 소스 파일(source file) 작성
2. 선행처리기(preprocessor)에 의한 선행처리
3. 컴파일러(compiler)에 의한 컴파일
4. 링커(linker)에 의한 링크
5. 실행 파일(executable file) 생성

### 소스 파일

- c언어를 사용해서 논리적으로 작성된 프로그램, 원시 파일이라고도 한다.
- 확장자는 .c

### C 예제

```c
#include <stdio.h>
#define TEXT "Hello world"

int main()
{
    printf(TEXT);
    return 0;
}    
```

```c
#include <stdio.h>

int main() {
    printf("hello world");
    return 0;
}
```

### 특징

1. 기본 단위는 함수
2. 각 명령문은 세미콜론으로 끝난다.
3. 대소문자를 구분한다.
4. 자유 형식(free-format)을 허용한다.

### 주석

- 코드에 대한 이해를 돕는 설명을 적거나 디버깅을 위해 작성한다.
- 한 줄 주석은 시작위치에 //을 사용하고, 여러 줄 주석은 /*로 시작해서 */로 끝나야 한다.

```c
// 한 줄 주석
/* 여러 줄
주석 */
```

#### 주석까지 작성한 예시

```c
#include <stdio.h>

/* 이 주석 다음 줄 부터
 main() 함수가 시작됨 */

int main()
{
    printf("hello world");
    return 0;
}
```

