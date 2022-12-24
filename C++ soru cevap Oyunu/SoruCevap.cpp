#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	HANDLE h =GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,5);
	cout<<"----------- || MERHABA BILGI YARISINA HOSGELDIN ||----------- \n";
	SetConsoleTextAttribute(h,1);
	for(int i =1; i<100; i++){
		cout<<"# \t";
	}
	
	SetConsoleTextAttribute(h,5);
	cout<<"\n"<< "----- || LUTFEN SORULARI CEVAPLARKEN SIKLARI AYNEN YAZIN ||----- \n";
	int puan = 0;
	SetConsoleTextAttribute(h,15);
	cout<<"\n";
	string s1="Istanbulun fethi kac yilinda yapilmistir ?\n";
	cout<<s1;
	string siklar[]={"1997","1645","1245","1453","\n"};
		for(int i=0;i<4;i++){
			SetConsoleTextAttribute(h,3);
		cout<< siklar[i]<<endl;
	}
	string cevap;
	cin>>cevap;
	if(cevap==siklar[3]){
			SetConsoleTextAttribute(h,5);
		cout<<"Dogru bildin\n";
		puan+=1;
	}else{
		cout<<"bu yanlisti \n";
	}
	SetConsoleTextAttribute(h,15);
		string s2="Dunya kendi ekseni etrafinda kac saatte doner ?\n";
	cout<<s2;
	string s2sik[]={"12","24","28","16","\n"};
	for(int i=0;i<4;i++){
		SetConsoleTextAttribute(h,3);
		cout<<s2sik[i]<<endl;
	}
	string cevb;
	cin>>cevb;
	if(cevb==s2sik[1]){
			SetConsoleTextAttribute(h,5);
		cout<<"Dogru bildin\n";
		puan+=1;
	}else{
		cout<<"bu yanlisti \n";
	}
	SetConsoleTextAttribute(h,15);
	string s3="ilk defa uzaya cikan kisi kimdir ?\n";
	cout<<s3;
	string s3sik[]={"pacho","neil","yuri","micho","\n"};
	for(int i=0;i<4;i++){
		SetConsoleTextAttribute(h,3);
		cout<<s3sik[i]<<endl;
	}
	string cevb3;
	cin>>cevb3;
	if(cevb3==s3sik[2]){
			SetConsoleTextAttribute(h,5);
		cout<<"Dogru bildin\n";
		puan+=1;
	}else{
		cout<<"bu yanlisti \n";
	}
		SetConsoleTextAttribute(h,15);
	string s4="Arastirmalara gore insanlar en cok neden korkar ?\n";
	cout<<s4;
	string s4sik[]={"hayalet","issizlik","mutsuzluk","agaclar","\n"};
	for(int i=0;i<4;i++){
		SetConsoleTextAttribute(h,3);
		cout<<s4sik[i]<<endl;
	}
	string cevb4;
	cin>>cevb4;
	if(cevb4==s4sik[1]){
			SetConsoleTextAttribute(h,5);
		cout<<"Dogru bildin\n";
		puan+=1;
	}else{
		cout<<"bu yanlisti :( \n";
	}
		SetConsoleTextAttribute(h,15);
	string s5="Duyun u umumiye ne zaman kuruldu ?\n";
	cout<<s5;
	string s5sik[]={"1900","1870","1881","1540","\n"};
	for(int i=0;i<4;i++){
		SetConsoleTextAttribute(h,3);
		cout<<s5sik[i]<<endl;
	}
	string cevb5;
	cin>>cevb5;
	if(cevb5==s5sik[2]){
			SetConsoleTextAttribute(h,5);
		cout<<"Dogru bildin\n";
		puan+=1;
	}else{
		cout<<"bu yanlisti :( \n";
	}
	SetConsoleTextAttribute(h,15);
	string s6="Gunes isiklari dunyaya kac dakikada gelmektedir ?\n";
	cout<<s6;
	string s6sik[]={"5","12","6","8","\n"};
	for(int i=0;i<4;i++){
		SetConsoleTextAttribute(h,3);
		cout<<s6sik[i]<<endl;
	}
	string cevb6;
	cin>>cevb6;
	if(cevb6==s6sik[2]){
			SetConsoleTextAttribute(h,5);
		cout<<"Dogru bildin\n";
		puan+=1;
	}else{
		cout<<"bu yanlisti :( \n";
	}
	SetConsoleTextAttribute(h,15);
	string s7="Dunyaya en yakin yildiz hangisidir ?\n";
	cout<<s7;
	string s7sik[]={"ProximaCentauri","AlfaCentauri","Pixma","EnsaHefkauri","\n"};
	for(int i=0;i<4;i++){
		SetConsoleTextAttribute(h,3);
		cout<<s7sik[i]<<endl;
	}
	string cevb7;
	cin>>cevb7;
	if(cevb7==s7sik[0]){
			SetConsoleTextAttribute(h,5);
		cout<<"Dogru bildin\n";
		puan+=1;
	}else{
		cout<<"bu yanlisti :( \n";
	}
	for(int i =0;i<5;i++){
		cout<<"FINAL "<<"PUANIN :"<<puan <<"-------------"<<"\n";
	}
	system("pause");
    return 0;
}
