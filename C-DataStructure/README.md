# π#01 μλ£κ΅¬μ‘°μ μκ³ λ¦¬μ¦μ μ΄ν΄ (11 ~ 45p.g)
<img width="600" alt="μ€ν¬λ¦°μ· 2022-05-17 μ€ν 3 55 06" src="https://user-images.githubusercontent.com/95270655/168748123-45632481-76c6-4dfb-b12f-253fdb7d47c1.png">

### μμ°¨ νμ μκ³ λ¦¬μ¦
```c
#include <stdio.h>

int LSearch(int ar[], int len, int target)
{
  int i;
  for(i = 0; i < len; i++)
  {
    if(ar[i] == target)
        return i;  //μ°Ύμ λμμ μΈλ±μ€ κ° λ°ν
  )
  return -1;  //μ°Ύμ§ λͺ»νμμ μλ―Ένλ κ° λ°ν
}

int main(void)
{
  int arr[] = {3, 5, 2, 4, 9};
  int idxl
  
  idx = LSearch(arr, sizeof(arr)/sizeof(int), 4);
  if(idx == -1)
    printf("νμ μ€ν¨\n");
  else
    printf("νκ² μ μ₯ μΈλ±μ€: %d\n", idx);
    
  idx = LSearch(arr, sizeof(arr)/sizeof(int), 7)
  if(idx = -1)
    printf("νμ μ€ν¨\n");
  else
    printf("νμΌ μ μ₯ μΈλ±μ€: %d\n", idx);
    
  return 0;
}
```

### μ΄μ§ νμ μκ³ λ¦¬μ¦
```c
#include <stdio.h>

int BSearch(int ar[], int len, int target)
{
  int first = 0;  //νμ λμμ μμ μΈλ±μ€ κ° 
  int last  = len - 1;  //νμ λμμ λ§μ§λ§ μΈλ±μ€ κ°
  int mid;
  
  while(first <= last)
  {
    mid = (first + last)/2;  //νμ λμμ μ€μμ μ°Ύλλ€
    
    if(target == ar[mid])  //μ€μμ μ μ₯λ κ²μ΄ νκ²μ΄λΌλ©΄
    {
      return mid;   //νμ μλ£!
    }
    else    //νκ²μ΄ μλλΌλ©΄ νμ λμμ λ°μΌλ‘ μ€μΈλ€
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

<img width="488" alt="μ€ν¬λ¦°μ· 2022-05-17 μ€ν 3 58 55" src="https://user-images.githubusercontent.com/95270655/168748786-100bfde4-c8fb-42f9-981c-03727c1055ac.png">

<img width="490" alt="μ€ν¬λ¦°μ· 2022-05-17 μ€ν 3 59 11" src="https://user-images.githubusercontent.com/95270655/168748827-00ff3cb2-ce29-4790-a189-106190b3bee1.png">

<img width="489" alt="μ€ν¬λ¦°μ· 2022-05-17 μ€ν 3 59 26" src="https://user-images.githubusercontent.com/95270655/168748865-d452d2b5-fe97-4b61-99f5-cd182bd6025b.png">

<img width="491" alt="μ€ν¬λ¦°μ· 2022-05-17 μ€ν 3 59 48" src="https://user-images.githubusercontent.com/95270655/168748946-9b22797a-68c6-4bc2-9ac6-dd2808091909.png">

*****

# π#02 μ¬κ· Recursion (49 ~ 64p.g)
<img width="462" alt="μ€ν¬λ¦°μ· 2022-05-17 μ€ν 7 47 50" src="https://user-images.githubusercontent.com/95270655/168794362-9e305b6b-9da7-4dfe-81f1-ebb47c4aaf8b.png">

### μ¬κ·ν¨μ 
```c
#include <stdio.h>

void Recursive(int num)
{
  if(num <= 0). //μ¬κ·μ νμΆμ‘°κ±΄
    return;   //μ¬κ·μ νμΆ!
  printf("Recursice call! %d\n", num);
  Recursive(num -1);
}

int main(void)
{
  Recursive(3);
  return 0;
}
```

<img width="460" alt="μ€ν¬λ¦°μ· 2022-05-17 μ€ν 7 48 14" src="https://user-images.githubusercontent.com/95270655/168794422-5d513e1b-858b-49b8-b999-30e04c78d4d1.png">

### νΌλ³΄λμΉ μμ΄
```c
#include <stdio.h>

int Fibo(int n)
{
  if(n == 1)
    return 0;
  else if(n == 2)
    return 1;
  else
    return Fibo(n-1) + Fibo(n-2);
}

int main(void)
{
  int i;
  for(i = 1; i < 15; i++)
    printf("%d ", Fibo(i));
    
  return 0;
}
```

### μ΄μ§ νμ μκ³ λ¦¬μ¦μ μ¬κ·μ  κ΅¬ν
```c
#include <stdio.h>

int BSearchRecur(int ar[], int first, int last, int target)
{
    int mid;
    if(first > last)
      return -1;                   // -1μ λ°νμ νμμ μ€ν¨λ₯Ό μλ―Έ
    mid = (first + last) / 2;      //νμλμμ μ€μμ μ°Ύλλ€
    
    if(ar[mid] == target)
      return mid;   //νμλ νκ²μ μΈλ±μ€ κ° λ°ν
    else if(target < ar[mid])
      return BSearchRecur(ar, first, mid - 1, target);
    else
      return BSearchRecur(ar, mid + 1, last, target);
}

int main(void)
{
  int arr[] = {1, 3, 5, 7, 9};
  int idx;
  
  idx = BSearchRecur(arr, 0, sizeof(arr)/sizeof(int)-1, 7);
  if(idx == -1)
    printf("νμ μ€ν¨\n");
  else
    printf("νκ² μ μ₯ μΈλ±μ€:  %d\n", idx);
    
  idx = BSearchRecur(arr, 0, sizeof(arr)/siezof(int)-1, 4);
  if(idx == -1)
    printf("νμ μ€ν¨ \n");
  else
    printf("νκ² μ μ₯ μΈλμ€: %d\n", idx);
    
  return 0;
}
```
<img width="464" alt="μ€ν¬λ¦°μ· 2022-05-17 μ€ν 7 48 35" src="https://user-images.githubusercontent.com/95270655/168794465-95ec749b-9f96-4ca7-97bc-b80010d1a988.png">

<img width="464" alt="μ€ν¬λ¦°μ· 2022-05-17 μ€ν 7 48 58" src="https://user-images.githubusercontent.com/95270655/168794529-71e51152-577a-49fc-850a-cfbf65c3fc15.png">

<img width="467" alt="μ€ν¬λ¦°μ· 2022-05-17 μ€ν 7 49 14" src="https://user-images.githubusercontent.com/95270655/168794589-889021dd-0f7f-4672-a758-b38d56591df3.png">

### νλΈμ΄ νμ μ¬κ·ν¨μ
```c
#include <stdio.h>

void HanoiTowerMove(int num, char from, char by, char to)
{
    if(num == 1)
    {
      printf("μλ°1μ %cμμ %cλ‘ μ΄λ\n", from, to);
    }
    else
    {
      HanoiTowerMove(num-1, from, to, by);
      printf("μλ° %dμ(λ₯Ό) %cμμ %cλ‘ μ΄λ \n", num, from, to);
      HanoiTowerMove(num-1, by, from, to);
    }
}

int main(void)
{
  //λ§λ Aμ μλ° 3κ°λ₯Ό λ§λBμ κ²½μ νμ¬ λ§λCλ‘ μ?κΈ°κΈ°
  HanoiTowerMove(3, 'A', 'B', 'C');
  return 0;
}
```
### νλΈμ΄ νμ μ¬κ·ν¨μ μ€νκ²°κ³Ό
```
μλ°1μ Aμμ Cλ‘ μ΄λ
μλ°2μ(λ₯Ό) Aμμ Bλ‘ μ΄λ
μλ°1μ Cμμ Bλ‘ μ΄λ
μλ°3μ(λ₯Ό) Aμμ Cλ‘ μ΄λ
μλ°1μ Bμμ Aλ‘ μ΄λ
μλ°2μ(λ₯Ό) Bμμ Cλ‘ μ΄λ
μλ°1μ Aμμ Cλ‘ μ΄λ
```
