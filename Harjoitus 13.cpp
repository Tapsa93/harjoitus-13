//***************************
//Tapio Pekkarinen
//Harjoitus 13
//23.10.2014
//versio 1.0
/*Tee ohjelma, joka kysyy etunimesi ja sukunimesi. 
Ohjelma yhdist�� nimet yhdeksi merkkijonoksi ja tulostaa ne lopuksi nayt�lle.
a) Kayta cstring-kirjastoa (C:n merkkitaulukot) tehd�ksesi merkkijonojen yhdist�misen 
b) Kayta string-kirjastoa (C++:n merkkijonot) tehd�ksesi merkkijonojen yhdist�misen TEE, JOS ON AIKAA
Esimerkki Anna etunimi: Aku Anna sukunimi: Ankka Nimesi oli: Aku Ankka*/
#include <iostream>	
using namespace std;
#include <cstring>
int main()
{
	char jono1[20];
	char jono2[20];
	char v�li[2] = " ";
	cout << "Anna etunimesi: ";
	cin >> jono1;
	cout << "Anna sukunimesi: ";
	cin >> jono2;
	strcat_s(jono1, v�li);
	strcat_s(jono1, jono2);
	cout << "Nimesi oli: " << jono1;

	return 0;
		
}