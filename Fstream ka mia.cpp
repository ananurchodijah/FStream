#include<iostream>
#include<conio.h>
#include <fstream>
#include <stdlib.h>
using namespace std;
int penunjuk;
int data[7];
int maks=7;
bool IsEmpty()
{
	if(penunjuk== -1)
	return true;
	else
	return false;
}

bool IsFull()
{
	if(penunjuk == maks-1)
	return true;
	else
	return false;
}
void Push()
{
	if(IsFull())
{
	cout<<"Tumpukan telah Penuh!";
	getch();
}
else
{
	penunjuk++;
	cout<<"Masukkan data ke dalam stack : ";
	cin>>data[penunjuk];
}
}

void Pop()
{
	if(IsEmpty())
{
	cout<<"Stack Kosong!";
	getch();
}
else
{
	cout<<"Data yang diambil adalah : "<<data[penunjuk];
	penunjuk--;
	getch();
}
}

void Clear()
for(int a=penunjuk;a>=0;a--)
{
	cout<<"Data dari tumpukan ke "<<a<<" : "<<data[a]<<endl;
}
getch();

int read()
{
	int a;
	ofstream input;
	input.open("Read.txt");
	for(int a=penunjuk;a>=0;a--)
{
	input<<"Data dari tumpukan ke "<<a<<" : "<<data[a]<<endl;
}
	input.close();
}

int main()
{
	int pil;
	menu:
	system("cls");
	cout<<"=======Program Stack dan FStream======="<<endl;
	cout<<"1. Penambahan Stack"<<endl;
	cout<<"2. Pengambilan Stack"<<endl;
	cout<<"3. Membersihkan Stack"<<endl;
	cout<<"4. Mencetak Stack"<<endl;
	cout<<"5. Cetak Ke Notepad"<<endl;
	cout<<"6. Exit"<<endl;
	cout<<"======================================="<<endl;
	cout<<"Pilih menu : ";
	cin>>pil;
	switch(pil)
{
	case 1:
	Push();
	getch();
	goto menu;
	case 2:
	Pop();
	getch();
	goto menu;
	case 3:
	Clear();
	getch();
	goto menu;
	case 4:
	View();
	getch();
	goto menu;
	case 5:
	read();
	getch();
	goto menu;
	case 6:
	return 0;
	break;
	default:
	cout<<"Tidak ada di dalam menu!";
	getch();
	goto menu;
}
}
