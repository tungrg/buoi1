#include <stdio.h>
#include <stdlib.h>


typedef struct students {
    char name[20];
    unsigned int birth_year;
    float gpa;
} student;

void print_menu_main(int *lenh)
{
	system("clear");
    printf("1.Nhap thong tin sinh vien.\n");
    printf("2.Xoa thong tin sinh vien.\n");
    printf("3.Sua thong tin sinh vien.\n");
    printf("4.Hien thi toan bo sinh vien\n");
    printf("5.Ket thuc.\n");
	scanf("%d",lenh);
}
student print_menu_1 (int *lenh) {
    student arg;
    system("clear");
    printf("1.Nhap ten sinh vien: ");
    scanf("%19s", arg.name);
    printf("2.Nhap nam sinh: ");
    scanf("%d",&arg.birth_year);
    printf("3.Nhap diem trung binh: ");
    scanf("%f",&arg.gpa);
    return arg;
}

int main (){
    system("clear");
    int lenh;
    student arg;
    //do 
    //{
       arg = print_menu_1(&lenh);
    //} while(lenh != 5);
    printf("Nam sinh: %d\n",arg.birth_year);
    printf("GPA: %.6f\n",arg.gpa);
    printf("Ho va ten: %s",arg.name);
    return 0;
}