#include "task.h"

int selectMenu(){
    int menu;
    printf("\n*** Task ***\n");
    printf("1. 조회\n");
    printf("2. 추가\n");
    printf("3. 수정\n");
    printf("4. 삭제\n");
    printf("5. 파일저장\n");
    printf("6. 과목 상태 수정\n");
    printf("7. 과목 이름 검색\n");
    printf("8. 마감 기한 검색\n");
    printf("9. 과제 상태 검색\n");
    printf("0. 종료\n\n");
    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);
    return menu;
}

int addTask(Task *t){
    printf("과제의 과목 이름은? ");
    getchar();
    fgets(t->className, 30, stdin);
    t->className[strlen(t->className)-1]='\0';
    printf("과제의 마감 기한은? ");
    scanf("%s", t->date);
    printf("과제의 상태는? (안함:0 완료:1 진행중:2) ");
    scanf("%d", &t->state);
    return 1;
}

void updateTask(Task *t){
    printf("과제의 과목 이름은? ");
    getchar();
    fgets(t->className, 30, stdin);
    t->className[strlen(t->className)-1]='\0';
    printf("과제의 마감 기한은? ");
    scanf("%s", t->date);
    printf("과제의 상태는? (안함:0 완료:1 진행중:2) ");
    scanf("%d", &t->state);
    printf("=> 수정성공!\n");
}

int deleteTask(Task *t){
    t->state = -1;
    return 1;
}

void listTask(Task *t[], int count){
    printf("---------------------------------\n");
    printf("번호    과목이름    마감기한  현황\n");
    for(int i=0; i<count; i++){
        if(t[i] == NULL) continue;
        printf("%2d.    ", i+1);
        readTask(*t[i]);
    }
    printf("\n");
}

void readTask(Task t){
    printf("%8s %7s    ", t.className, t.date);
    if(t.state == 0) printf("안함\n");
    else if(t.state == 1) printf("완료\n");
    else printf("진행중\n");
}

int selectDataNo(Task *t[], int count){
    int no;
    listTask(t, count);
    printf("번호는 (취소 :0)? ");
    scanf("%d", &no);
    return no;
}

void searchClassName(Task *t[], int count){
    int scnt =0;
    char search[30];
    printf("검색할 과목명은? ");
    getchar();
    fgets(search, 30, stdin);
    search[strlen(search)-1]='\0';
    printf("---------------------------------\n");
    for(int i=0; i<count; i++){
        if(t[i]->state == -1)continue;
        if(strstr(t[i]->className, search)){
            printf("%2d ", i+1);
            readTask(*t[i]);
            scnt++;
        }
    }
    if(scnt == 0)printf("=> 검색된 데이터 없음!");
    else printf("=> 찾았음!\n");
    printf("\n");
}

void searchDate(Task *t[], int count){
    int scnt =0;
    char search[30];
    printf("검색할 마감 기한은? ");
    scanf("%s", search);
    printf("---------------------------------\n");
    for(int i=0; i<count; i++){
        if(t[i]->state == -1)continue;
        if(strstr(t[i]->date, search)){
            printf("%2d ", i+1);
            readTask(*t[i]);
            scnt++;
        }
    }
    if(scnt == 0)printf("=> 검색된 데이터 없음!");
    else printf("=> 찾았음!\n");
    printf("\n");
}

void searchState(Task *t[], int count){
    int scnt =0;
    int search;
    printf("검색할 과목 상태는? (안함:0 완료:1 진행중:2) ");
    scanf("%d", &search);
    printf("---------------------------------\n");
    for(int i=0; i<count; i++){
        if(t[i]->state == -1)continue;
        if(t[i]->state==search){
            printf("%2d ", i+1);
            readTask(*t[i]);
            scnt++;
        }
    }
    if(scnt == 0)printf("=> 검색된 데이터 없음!");
    else printf("=> 찾았음!\n");
    printf("\n");
}

void updateState(Task *t){
    printf("수정할 과제의 상태는? (안함:0 완료:1 진행중:2) ");
    scanf("%d", &t->state);
    printf("=> 과제 상태 수정성공!\n");
}

int loadData(Task *t[]){
    int count=0,i=0;
    FILE *fp;
    if((fp = fopen("task.txt", "rt"))){
        for(i=0; i<20; i++){
            fscanf(fp, "%s", t[i]->date);
            if(feof(fp)) break;
            fscanf(fp, "%d", &t[i]->state);
            fscanf(fp, "%[^\n]s", t[i]->className);
        }
        fclose(fp);
        printf("=> 로딩 성공!\n");
    }
    else printf("=> 파일 없음\n");
    return i;
}

void saveData(Task *t[], int count){
    FILE *fp;
    fp = fopen("task.txt", "wt");
    for(int i=0; i<count; i++){
        if(t[i]->state == -1) continue;
        fprintf(fp, "%s %d %s\n", t[i]->date, t[i]->state, t[i]->className);
    } 
    fclose(fp);
    printf("=> 저장됨!\n");
}
