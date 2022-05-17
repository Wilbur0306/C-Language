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


# #02 재귀 Recursion
