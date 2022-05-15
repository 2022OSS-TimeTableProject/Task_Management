# 함수 설명 및 결과 이미지

## 1. selectMenu(), addTask()

- selectMenu 함수는 함수가 구현될 때 반복문으로 실행되어 입력 받은 숫자에 해당하는 부분을 실행한다. addTask 함수는 새로운 과제를 추가하는 함수로 과목의 이름과 마감 기한, 과제의 상태를 새롭게 추가한다.

<img width="373" alt="스크린샷 2022-05-13 오전 2 50 17" src="https://user-images.githubusercontent.com/103631319/168138319-6c3cd701-34de-46a6-8b8c-1744269c1088.png">

---

## 2. listTask(), readTask()

- listTask 함수는 함수 내에서 해당하는 과목의 정보를 불러와 출력하는 readTask 함수를 반복적으로 호출해 과제의 목록을 출력한다.

<img width="325" alt="스크린샷 2022-05-13 오전 2 51 06" src="https://user-images.githubusercontent.com/103631319/168138420-d375cdf3-ee1b-4435-9796-54457244e4e2.png">

---

## 3. selectDataNo() 

- 과제의 목록을 조회해 번호를 선택해 과제를 삭제를 하거나 수정을 할 수 있게 한다. 

---

## 4. updateTask()

- updateTask 함수는 과제의 이름과 마감 기한, 상태와 같은 과제 정보를 수정한다.

<img width="372" alt="스크린샷 2022-05-13 오전 2 52 22" src="https://user-images.githubusercontent.com/103631319/168138490-222074bf-33fd-485f-864b-7a7daeee7c7e.png">

---

## 5. deleteTask()

- deleteTask 함수는 조회된 과제의 목록 중에 선택된 과제를 삭제한다.

<img width="324" alt="스크린샷 2022-05-13 오전 2 53 16" src="https://user-images.githubusercontent.com/103631319/168138519-3a5211eb-fd64-46af-b4ce-47509572f657.png">

---

## 6. updateState()

- updateState는 선택한 과제의 진행 상황을 번호로 선택하여 수정한다.

<img width="428" alt="스크린샷 2022-05-13 오전 3 05 39" src="https://user-images.githubusercontent.com/103631319/168141227-555d3b58-1d01-4a84-9e05-cf43e2eec018.png">


---

## 7. saveData()

- 추가된 과제의 목록을 task.txt 파일에 저장한다.

<img width="175" alt="스크린샷 2022-05-13 오전 3 03 29" src="https://user-images.githubusercontent.com/103631319/168140986-1c297713-d0aa-43ef-8a04-28b8786188e4.png">
<img width="273" alt="스크린샷 2022-05-13 오전 3 04 40" src="https://user-images.githubusercontent.com/103631319/168141078-4002175d-35f6-4eac-b444-45869788e39d.png">

---

## 8. loadData()

- main 함수를 실행할 때 가장 먼저 호출되는 함수로 task.txt 파일에 저장된 과제의 목록을 불러온다.

<img width="325" alt="스크린샷 2022-05-13 오전 3 04 01" src="https://user-images.githubusercontent.com/103631319/168141025-35d5e2a2-1c6a-4028-baee-ade2c3e440f6.png">

---

## 9. searchClassName()

- 검색하고자 하는 과제의 이름을 입력해 일치하는 것이 없다면 아무것도 출력하지 않는다.

<img width="298" alt="스크린샷 2022-05-13 오전 3 06 18" src="https://user-images.githubusercontent.com/103631319/168141262-bb4278dd-1721-47b4-992e-89c6376669b6.png">

---

## 10. searchDate()

- 과제의 마감 기한을 입력해 일치하는 과제를 출력하고 일치하는 것이 없다면 아무것도 출력하지 않는다.

<img width="290" alt="스크린샷 2022-05-13 오전 3 06 49" src="https://user-images.githubusercontent.com/103631319/168141299-a1353495-2224-4e97-986e-98ed8c56dfa8.png">

---

## 11. searchState()

- 과제의 상태를 나타내는 번호를 입력해 일치하는 과제를 출력하고 일치하는 것이 없다면 아무것도 출력하 않는다.

<img width="408" alt="스크린샷 2022-05-13 오전 3 07 17" src="https://user-images.githubusercontent.com/103631319/168141327-20eb4dfb-e1d5-41eb-a724-66e8cc73052c.png">
