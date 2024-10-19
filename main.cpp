/*
#include <iostream>

using namespace std;

int main() {
    cout << "Merhaba"<<" "<<"Dünya"<<" "<<"Nasılsın";
    return 0;
}
*/

/*
int main(){
    cout<<"Toplama işlemi sonucu"<<" "<<10+5<<" "<<"Bölme işlemi sonucu"<<" "<<10/2; // toplama ve carpma yapar
    cout<<"Çarpma işlemi sonucu"<<" "<<10*10<<" "<<"Çıkarma işlemi sonucu"<<" "<<100/2; // bölme ve cıkarma yapar
    
    return 0;
}
*/

// 2. bolum
/*
#include <iostream>

using namespace std;

int main(){
    cout<<"toplama islemi = "<<10+5<<endl; // "endl" satırları ayırır
    cout<<"bölme islemi   = "<<10/5<<endl;
    cout<<"carpma islemi  = "<<10*5<<endl;
    cout<<"cıkarma islemi = "<<10-5<<endl;
}
*/

/*
#include <iostream>
using namespace std;

int main(){
string isim, soyisim;
int yas=10;

isim=" mehmet";
soyisim=" atıcı";

cout<<"Merhaba"<<isim<<soyisim<<" "<<"Yaşın doğru mu? "<<yas;
*/

/*
#include <iostream>
using namespace std;
int main(){
    string isim, soyisim;
    int yas=10;
    
    cout<<"lütfen bir isim gir: ";
    cin>>isim;
    cout<<isim;
}
*/

/*
#include <iostream>
using namespace std;
int main(){
    string isim, soyisim, tc, dogumtarih, boy;
    cout<<"İsim girin: "<<endl;
    cin>>isim;
    cout<<"Soyisim girin: "<<endl;
    cin>>soyisim;
    cout<<"TC Kimlik girin: "<<endl;
    cin>>tc;
    cout<<"Doğum Tarihi girin"<<endl;
    cin>>dogumtarih;
    cout<<"Boyunuzu girin"<<endl;
    cin>>boy;
    
    cout<<"Merhaba: "<<isim<<endl<<" Soyisim Gir: "<<soyisim<<endl<<" Lütfen TC girin: "<<tc<<endl<<" Doğum tarihi gir: "<<dogumtarih<<endl<<" Boyunu gir"<<boy;
}
*/

/*
#include <iostream>
using namespace std;
int main(){
    
    string ad, soyad, dogumtarihi;
    double boy;
    int tc;
    cout<<"adınızı girin: ";
    cin>>ad;
    cout<<"soyadınızı girin: ";
    cin>>soyad;
    cout<<"doğum tarihinizi girin: ";
    cin>>dogumtarihi;
    cout<<"boyunu gir: ";
    cin>boy;
    cout<<"tc girin";
    cin>>tc;
    
    cout<<"merhaba "<<ad<<" "<<soyad<<" Doğum tarihin: "<<dogumtarihi<<endl;
    cout<<"boyunuz: "<<boy<<"Tcniz"<tc;
}
*/

/*
İLK ÖRNEK
#include <iostream>
using namespace std;
int main(){
    cout<<"0-100 arası bir sayı giriniz";
    int sayi1;
    cin>> sayi1;
    
    if (sayi1<50){
        cout<<"Sayınız küçük";
    }
    else if(sayi1>50){
        cout<<"sayınız büyük";
    }
    else{
        cout<<"Sayınız eşit";
    }
}

2. ÖRNEK 

#include <iostream>
using namespace std;
int main(){
    cout<<" 0-100 arası bir sayı giriniz ";
    int sayi1;
    cin>> sayi1;
    
    if (sayi1<50){
        cout<<"Sayınız küçük";
    }
    else if(sayi1>50){
        cout<<"sayınız büyük";
    }
    else{
        cout<<"Sayınız eşit";
    }
}

3. ÖRNEK 

#include <iostream>
using namespace std;
int main(){
    //ehliyet için 18 yaşını doldurmuş olmak zorunda
    int yas;
    cin>>yas;
    if(yas>=18){
        cout<<"Giriş Başarılı gelebilirsin ";
    }
    else {
        cout<< "sınava giremezsin ";
    }
    
}

4. ÖRNEK

#include <iostream>
using namespace std;
int main(){
    int puan;
    cout<<"Lütfen puan giriniz ";
    cin>>puan;
    if(puan<50){
        cout<<"FF";
    }
    else if(puan<60){
        cout<<"DD";
    }
    else if(puan<70){
        cout<<"CC";
    }
    else if(puan<80){
        cout<<"BB";
    }
    else if(puan<101){
        cout<<"AA";
    }
}    
    
5. ÖRNEK
#include <iostream>
using namespace std;

int main() {
    string kullanicAdi = "mehmet";
    string giris;
    
    cout << "Kullanıcı adınızı girin: ";
    cin >> giris;
    
    if (giris == kullanicAdi) {
        cout << "Hoş geldin mehmet" << endl;
    } else {
        cout << "mehmet nerede???" << endl;
    }
    
    return 0;
}


6. ÖRNEK 

#include <iostream>
using namespace std;

int main() {
    string mezun;
    int yas;
    
    cout << "Mezuniyet durumunuzu girin (lise/üniversite): ";
    cin >> mezun;
    cout << "Yaşınızı girin: ";
    cin >> yas;
    
    if (mezun == "lise" && yas >= 18) {
        cout << "Sınava giriş yapabilirsin" << endl;
    } else if (mezun == "lise" || mezun == "üniversite") {
        cout << "Sınava giriş yapabilirsin" << endl;
    } else {
        cout << "Giriş yapamazsın" << endl;
    }
    
    return 0;
}


7. ÖRNEK

#include <iostream>
#include <string>

int main() {
    std::string correctUsername = "DOGU"; // Doğru kullanıcı adı
    std::string correctPassword = "1234";      // Doğru şifre

    std::string username;
    std::string password;

    std::cout << "Kullanici adinizi girin: ";
    std::cin >> username;

    std::cout << "Sifrenizi girin: ";
    std::cin >> password;

    // Kullanıcı adı ve şifre kontrolü
    if (username == correctUsername && password == correctPassword) {
        std::cout << "Giris basarili! Hoş geldiniz!" << std::endl;
    } else {
        std::cout << "Giris basarisiz! Kullanici adi veya sifre yanlis." << std::endl;
    }

    return 0;
}

8. örnek

#include <iostream>
using namespace std;

int main() {
    int bakiye = 1000;
    int secim;

    cout << "Merhaba Hosgeldiniz, Bakiyeniz: " << bakiye << endl;
    cout << "Ana yemek için 1'e basin" << endl;
    cout << "Tatli için 2'ye basin" << endl;
    cout << "Icecek için 3'e basin" << endl;
    cin >> secim;

    if (secim == 1) {
        bakiye -= 200;
        cout << "Ana yemek sectiniz Kalan bakiye: " << bakiye << endl;
    } else if (secim == 2) {
        bakiye -= 100;
        cout << "Tatli sectiniz Kalan bakiye: " << bakiye << endl;
    } else if (secim == 3) {
        bakiye -= 50;
        cout << "Icecek sectiniz Kalan bakiye: " << bakiye << endl;
    } else {
        cout << "Hatali secim yaptiniz 1-2-3 basin" << endl;
    }

    return 0;
}
*/



