#include <stdio.h>
#include <stdlib.h>

const int MAX = 100;
typedef struct students {
    char name[50];
    unsigned int birth_year;
    float gpa;
} student;
student list_student [100];
int list_student_size = 0;

void print_menu_main(int *lenh)
{
    int index = 0;
    printf("Menu:\n");
    printf("  1.Nhap thong tin sinh vien.\n");
    printf("  2.Xoa thong tin sinh vien.\n");
    printf("  3.Sua thong tin sinh vien.\n");
    printf("  4.Hien thi toan bo sinh vien\n");
    printf("  5.Ket thuc.\n");
    printf("Vui long chon lenh: ");
	scanf("%d",&index);
    *lenh = index;
}
void print_menu_1() {
    student arg;
    if (list_student_size >= MAX) {
        printf("Danh sach sinh vien da day (Du so %d sinh vien)\n", MAX);
        getchar();
        return;
    }
    printf("1.Nhap ten sinh vien: ");
    scanf("%19s", arg.name);
    printf("2.Nhap nam sinh: ");
    scanf("%d",&arg.birth_year);
    printf("3.Nhap diem trung binh: ");
    scanf("%f",&arg.gpa);
    list_student[list_student_size++] = arg;
    getchar();
    return;
}

void print_menu_2(){
    int so_thu_tu;
    printf("Chon so thu tu cua sinh vien can xoa: ");
    scanf("%d", &so_thu_tu);
    if (so_thu_tu + 1 > list_student_size) {
        printf("so thu tu vua nhap khong thuoc ve sinh vien nao");
        getchar();
    }
    list_student_size--;
    for (int i = so_thu_tu; i < list_student_size; i++) {
        list_student[i] = list_student[i+1];
    }
    printf("Xoa thanh cong\nBam phim bat ky de tro ve");
    getchar();

}

void print_menu_3() {
    student arg;
    int so_thu_tu;
    printf("Nhap so thu tu sinh vien can sua: ");
    scanf("%d",&so_thu_tu);
    printf("1.Nhap ten sinh vien: ");
    scanf("%19s", arg.name);
    printf("2.Nhap nam sinh: ");
    scanf("%d",&arg.birth_year);
    printf("3.Nhap diem trung binh: ");
    scanf("%f",&arg.gpa);
    list_student[so_thu_tu] = arg;
}

void print_menu_4(){
    for (int i = 0; i < list_student_size; i++) {
        printf("%d\n", i);
        printf("GPA: %.2f\n",list_student[i].gpa);
        printf("Ho va ten: %s\n",list_student[i].name);
        printf("Nam sinh: %d\n",list_student[i].birth_year);
    }
    getchar();
}

int run_func(int *lenh) {
    print_menu_main(lenh);
    if (*lenh == 1) {
        print_menu_1();
    } else if (*lenh == 2) {
        print_menu_2();
    } else if (*lenh ==3) {
        print_menu_3();
    } else if (*lenh == 4) {
        print_menu_4();
    } else {
        printf("Vui long nhap lenh dung\n");
    }
}

int main (){
    int lenh;
    system("clear");
    do {
        run_func(&lenh);
    } while (lenh != 5);
    
    return 0;
}