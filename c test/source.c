#include <stdio.h>
#include <stdlib.h>


typedef struct students {
    char name[20];
    unsigned int birth_year;
    float gpa;
} student;
student list_student [100];
int list_student_size = 0;

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
void print_menu_1 () {
    student arg;
    system("clear");
    printf("1.Nhap ten sinh vien: ");
    scanf("%19s", arg.name);
    printf("2.Nhap nam sinh: ");
    scanf("%d",&arg.birth_year);
    printf("3.Nhap diem trung binh: ");
    scanf("%f",&arg.gpa);
    return arg;
    list_student[list_student_size++] = arg;
}

void print_menu_2(){
    system("clear");
    int so_thu_tu;
    printf("Chon so thu tu cua sinh vien can xoa: ");
    scanf("%d", &so_thu_tu);
    list_student[so_thu_tu].name = "";
    list_student[so_thu_tu].GPA = 0;
    list_student[so_thu_tu].birth_year = 0;
    list_student_size--;
}

void print_menu_3 () {
    student arg;
    system("clear");
    int so_thu_tu;
    printf("Nhap so thu tu sinh vien can sua: ");
    scanf("%d",&so_thu_tu);
    printf("1.Nhap ten sinh vien: ");
    scanf("%19s", arg.name);
    printf("2.Nhap nam sinh: ");
    scanf("%d",&arg.birth_year);
    printf("3.Nhap diem trung binh: ");
    scanf("%f",&arg.gpa);
    return arg;
    list_student[so_thu_tu] = arg;
}

void print_menu_4(){
    system("clear");
    for (int i = 0; i < list_student_size; i++) {
        printf("%d\n", i+1);
        printf("GPA: %.2f\n",list_student[i].gpa);
        printf("Ho va ten: %s",list_student[i].name);
        printf("Nam sinh: %d\n",list_student[i].birth_year);
    }
    
}

int main (){
    system("clear");
    //int lenh;
    student arg;
    //do 
    //{
       arg = print_menu_1();
    //} while(lenh != 5);
    printf("GPA: %.2f\n",arg.gpa);
    printf("Ho va ten: %s",arg.name);
    printf("Nam sinh: %d\n",arg.birth_year);
    
    return 0;
}
