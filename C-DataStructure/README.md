# #01 자료구조와 알고리즘의 이해 (11 ~ 45p.g)
<img width="600" alt="스크린샷 2022-05-17 오후 3 55 06" src="https://user-images.githubusercontent.com/95270655/168748123-45632481-76c6-4dfb-b12f-253fdb7d47c1.png">

### 순차 탐색 알고리즘
```c
#include <stdio.h>

int LSearch(int ar[], int len, int target)
{
  int i;
  for(i = 0; i < len; i++)
  {
    if(ar[i] == target)
        return i;  //찾은 대상의 인덱스 값 반환
  )
  return -1;  //찾지 못했음을 의미하는 값 반환
}

int main(void)
{
  int arr[] = {3, 5, 2, 4, 9};
  int idxl
  
  idx = LSearch(arr, sizeof(arr)/sizeof(int), 4);
  if(idx == -1)
    printf("탐색 실패\n");
  else
    printf("타겟 저장 인덱스: %d\n", idx);
    
  idx = LSearch(arr, sizeof(arr)/sizeof(int), 7)
  if(idx = -1)
    printf("탐색 실패\n");
  else
    printf("타켓 저장 인덱스: %d\n", idx);
    
  return 0;
}
```

### 이진 탐색 알고리즘
```c
#include <stdio.h>

int BSearch(int ar[], int len, int target)
{
  int first = 0;  //탐색 대상의 시작 인덱스 값 
  int last  = len - 1;  //탐색 대상의 마지막 인덱스 값
  int mid;
  
  while(first <= last)
  {
    mid = (first + last)/2;  //탐색 대상의 중앙을 찾는다
    
    if(target == ar[mid])  //중앙에 저장된 것이 타겟이라면
    {
      return mid;   //탐색 완료!
    }
    else    //타겟이 아니라면 탐색 대상을 반으로 줄인다
    {
      if(target < ar[mid])
        last = mid -1;
      else
        first = mid + 1;
    }
  }
  return -1;
}
```

<img width="488" alt="스크린샷 2022-05-17 오후 3 58 55" src="https://user-images.githubusercontent.com/95270655/168748786-100bfde4-c8fb-42f9-981c-03727c1055ac.png">

<img width="490" alt="스크린샷 2022-05-17 오후 3 59 11" src="https://user-images.githubusercontent.com/95270655/168748827-00ff3cb2-ce29-4790-a189-106190b3bee1.png">

<img width="489" alt="스크린샷 2022-05-17 오후 3 59 26" src="https://user-images.githubusercontent.com/95270655/168748865-d452d2b5-fe97-4b61-99f5-cd182bd6025b.png">

<img width="491" alt="스크린샷 2022-05-17 오후 3 59 48" src="https://user-images.githubusercontent.com/95270655/168748946-9b22797a-68c6-4bc2-9ac6-dd2808091909.png">

*****

# #02 재귀 Recursion (49 ~ 64p.g)
<img width="462" alt="스크린샷 2022-05-17 오후 7 47 50" src="https://user-images.githubusercontent.com/95270655/168794362-9e305b6b-9da7-4dfe-81f1-ebb47c4aaf8b.png">

### 재귀함수 
```c
#include <stdio.h>

void Recursive(int num)
{
  if(num <= 0). //재귀의 탈출조건
    return;   //재귀의 탈출!
  printf("Recursice call! %d\n", num);
  Recursive(num -1);
}

int main(void)
{
  Recursive(3);
  return 0;
}
```

<img width="460" alt="스크린샷 2022-05-17 오후 7 48 14" src="https://user-images.githubusercontent.com/95270655/168794422-5d513e1b-858b-49b8-b999-30e04c78d4d1.png">

<img width="464" alt="스크린샷 2022-05-17 오후 7 48 35" src="https://user-images.githubusercontent.com/95270655/168794465-95ec749b-9f96-4ca7-97bc-b80010d1a988.png">

<img width="464" alt="스크린샷 2022-05-17 오후 7 48 58" src="https://user-images.githubusercontent.com/95270655/168794529-71e51152-577a-49fc-850a-cfbf65c3fc15.png">

<img width="467" alt="스크린샷 2022-05-17 오후 7 49 14" src="https://user-images.githubusercontent.com/95270655/168794589-889021dd-0f7f-4672-a758-b38d56591df3.png">

