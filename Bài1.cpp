#include<stdio.h>
#include<string.h>	
int main(){
	struct SinhVien{
	    char name[100];
	    int age;
	    char phoneNumber[100];
    };
    struct SinhVien sv1={"Hoang Duong",18,"0904018911"};
    printf("Thong tin sinh vien\n");
    printf("FullName: %s\n",sv1.name);
    printf("Age: %d\n",sv1.age);
    printf("PhoneNumber: %s\n",sv1.phoneNumber);
	return 0;
}
