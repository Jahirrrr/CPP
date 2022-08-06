
// Simple Login and Register System

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Deklarasi
string usn;
int tm;

// isVALID Function
void isValid(string str)
{
	// Deklarasi
    string dir,user;
    ifstream file;
    
    // Codes
    dir = str + ".txt";
    file.open(dir.c_str());
    if(!file.is_open() && file.fail())
    {
        return;
    }
    else
    {
        tm++;
        if(tm == 3)
        {
            cout << "\n Username ini Sudah ada \n Silakan Coba Lagi.";
            return;
        }
        cout << "\n Username ini Sudah ada! \n Buat Username:";
        cin >> usn;
        isValid(usn);
    }
}

int main()
{
	// Deklarasi
    int choice, i, exit = 0;
    string ans, psd, name, fname, bio, usern, pw, line, nusn;
    ofstream fileo;
    ifstream filei;
    
    // Codes
    cout << "Selamat Datang di Aplikasi Login dan Register Sederhana \n";
    while(exit==0)
    {
        cout << "\n Silahkan Pilih Pilihanmu: \n 1. Login (ketik 1 untuk memilih) \n 2. Register (ketik 2 untuk memilih) \n Pilihanmu : ";
        cin >> choice;
        if(choice==1)
        {
            cout << "Masukan Username : ";
            cin >> usn;
            cout << "\n Masukkan Password : ";
            cin >> psd;
            fname = usn + ".txt";
            filei.open(fname.c_str());
            if(!filei.is_open() && filei.fail())
            {
                cout << "\n Kamu tidak teregister, mohon untuk register terlebih dahulu untuk login \n";
                filei.close();
                continue;
            }
            getline(filei, usern);
            getline(filei, line);
            getline(filei, pw);
            if(usn == usern && psd == pw)
            {
                cout << "\n Kamu telah berhasil Login! \n Profil Kamu : \n \n";
                cout << "Username : " << usern << endl;
                cout << "Name:" << line << endl;
                getline(filei, line);
                cout << "Status kamu : " << line << endl;
                filei.close();
            }
            else{
                cout << "\n Username atau Password salah ! \n Mohon untuk coba lagi \n";
            }
            cout << endl;
        }
        else if(choice == 2)
        {
            cout << "\n Masukkan namamu : ";
            cin.ignore();
            getline(cin, name);
            cout << "\n Buat Username : ";
            cin >> usn;
            tm = 0;
            isValid(usn);
            if(tm >= 3)
            {
                continue;
            }
            cout << "\n Buat Password : ";
            cin >> psd;
            fname = usn + ".txt";
            fileo.open(fname.c_str());
            fileo << usn << endl << name << endl << psd << endl;
            cout << "\n Kamu sudah Teregister";
            cout << "\n Tambahkan status Kamu : ";
            cin.ignore();
            getline(cin, bio);
            fileo << bio << endl;
            cout << "\n Status kamu telah Tersimpan: " << bio;
            fileo.close();
        }
        else
        {
            exit = 1;
        }
    }
    cout << "\n Terimakaasihhhhh :)";
}
