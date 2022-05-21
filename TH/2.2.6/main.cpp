#include <stdio.h>
#define MAX 100

typedef struct Date{
    int _date;
    int _morth;
    int _year;
};

typedef struct PostOffice{
    int ID;
    char SendName[100];
    char RepName[100];
    float Weight;
    Date DateSent;
    char Description[1000];
    float Price;
};

void ScanNum(int &n){
    printf("Nhap so luong san phan: 0 < n <= 100 ");
    do{
        scanf("%d", &n);
        if(n <= 0 || n > 100){
            printf("Qua so luong quy dinh!\n");
        }
    }while(n <= 0 || n > 100);
}

void ScanDate(Date &date){
    printf("Ngay: ");
    scanf("%d", &date._date);
    printf("Thang: ");
    scanf("%d", &date._morth);
    printf("Nam: ");
    scanf("%d", &date._year);
}

void PrintDate(Date date){
    printf("%d/%d/%d\n", date._date, date._morth, date._year);
}

void ScanPostOffice(PostOffice &PO){
    printf("Ma buu kien: ");
    scanf("%d", &PO.ID);
    fflush(stdin); // Xoa bo nho dem
    printf("Ten nguoi gui: ");
    gets(PO.SendName);
    fflush(stdin);
    printf("Ten nguoi nhan: ");
    gets(PO.RepName);
    printf("Trong luong: ");
    scanf("%f", &PO.Weight);
    ScanDate(PO.DateSent);
    fflush(stdin);
    printf("Noi dung buu kien: ");
    gets(PO.Description);
    printf("Don gia gui: ");
    scanf("%f", &PO.Price);
}

void PrintPostOffice(PostOffice PO){
    printf("Ma buu kien: %d\n", PO.ID);
    printf("Ten nguoi gui: %s\n", PO.SendName);
    printf("Ten nguoi nhan: %s\n", PO.RepName);
    printf("Trong luong: %f\n", PO.Weight);
    printf("Ngay gui: ");
    PrintDate(PO.DateSent);
    printf("Noi dung buu kien: %s\n", PO.Description);
    printf("Don gia gui: %f\n", PO.Price);
}

void ScanArrayPO(PostOffice PO[], int &n){
    ScanNum(n);
    for(int i = 0; i < n; i++){
        ScanPostOffice(PO[i]);
    }
}

void PrintArrayPO(PostOffice PO[], int n){
    for(int i = 0; i < n; i++){
        PrintPostOffice(PO[i]);
    }
}

void AddPO(PostOffice PO[], int &n){
    ++n;
    ScanPostOffice(PO[n]);
}

void _swapPO(PostOffice &PO1, PostOffice &PO2){
    PostOffice tg = PO1;
    PO1 = PO2;
    PO2 = tg;
}



int main()
{
    int n;
    PostOffice DataPostOffice[MAX];
    ScanPostOffice(DataPostOffice[0]);
    PrintPostOffice(DataPostOffice[0]);
}
