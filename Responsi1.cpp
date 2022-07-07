#include <iostream>
#include <fstream>
using namespace std;

class shop
{
public:
    void login()
    {
        user1 = "riski adi pangestu";
        pw1 = 183;
        user2 = "didik vinastu";
        pw2 = 181;
        user3 = "devito aldiga fitra";
        pw3 = 179;
        masuk:
        cout << "|-------------------------------|" << endl;
        cout << "|  SELAMAT DATANG DI TOKO DVR   |" << endl;
        cout << "|SILAHKAN LOGIN TERLEBIH DAHULU |" << endl;
        cout << "|-------------------------------|" << endl;
        cout << endl;
        cout << "Masukkan username    : ";
        getline(cin, user);
        cout << "Masukkan password    : ";
        cin >> pw;

        if (user == user1 && pw == pw1)
        {
            saldo = 10000000;
            cout << "\033[2J\033[0;0H";
            tampilan();
        }
        else if (user == user2 && pw == pw2)
        {
            saldo = 20000000;
            cout << "\033[2J\033[0;0H";
            tampilan();
        }
        else if (user == user3 && pw == pw3)
        {
            saldo = 30000000;
            cout << "\033[2J\033[0;0H";
            tampilan();
        }
        else
        {
            cout << "Username atau password yang anda masukkan salah!!";
        }
    }

    void tampilan()
    {
        cout << "Selamat datang, " << user << "!" << endl;
        cout << endl;
        cout << "Saldo Anda   : " << saldo;
        cout << "\n\n\n\n";
    awal:
        cout << "=====================================================" << endl;
        cout << "        Pilih Toko " <<endl;
        cout << "1. Toko Elektronik " << endl;
        cout << "2. Toko Alat rumah tangga " << endl;
        cout << "3. Toko Style dan Fashion " << endl;
        cout << "=====================================================" << endl;
        cout << "Ingin berbelanja apa hari ini ? [1,2,3] : ";
        cin >> pilih;
        cout << endl;

        switch (pilih)
        {
        case 1:
            cout << "=====================================================" << endl;
            cout << "      Jenis Barang Yang Tersedia !!" << endl;
            cout << endl;
            cout << "1. Webcam   | Rp. 100.000 " << endl;
            cout << "2. Speaker  | Rp. 60.000" << endl;
            cout << "3. Keyboard | Rp. 350.000" << endl;
            cout << "=====================================================" << endl;
            cout << "Pilih Barang [1,2,3] : ";
            cin >> barang;
            switch (barang)
            {
            case 1:
                cout << endl;
                cout << "Jumlah barang        : ";
                cin >> n;
                total = 100000 * n;
                break;
            case 2:
                cout << endl;
                cout << "Jumlah barang        : ";
                cin >> n;
                total = 60000 * n;
                break;
            case 3:
                cout << endl;
                cout << "Jumlah barang        : ";
                cin >> n;
                total = 350000 * n;
                break;
            }

            totbayar1 = total;
            cout << endl;
            cout << "=====================================================" << endl;
            cout << "Total belanja anda Rp. " << totbayar1 << endl;
            cout << "=====================================================" << endl;
            cout << "Mau Belanja lagi ? [y/n] : ";
            cin >> nambah;
            if (nambah == 'y' || nambah == 'Y')
            {
                cout << "\033[2J\033[0;0H";
                goto awal;
            }
            else
            {
                cout << "\033[2J\033[0;0H";
                checkout();
            }

            break;

        case 2:
            cout << "=====================================================" << endl;
            cout << "      Jenis Barang Yang Tersedia !!" << endl;
            cout << endl;
            cout << "1. Piring     | Rp. 30.000       " << endl;
            cout << "2. risecooker | Rp. 100.000      " << endl;
            cout << "3. Dispenser  | Rp. 150.000      " << endl;
            cout << "=====================================================" << endl;
            cout << "Pilih Barang [1,2,3] : ";
            cin >> barang;

            switch (barang)
            {
            case 1:
                cout << endl;
                cout << "Jumlah barang        : ";
                cin >> n;
                total = 30000 * n;
                break;
            case 2:
                cout << endl;
                cout << "Jumlah barang        : ";
                cin >> n;
                total = 100000 * n;
                break;
            case 3:
                cout << endl;
                cout << "Jumlah barang        : ";
                cin >> n;
                total = 150000 * n;
                break;
            }

            totbayar2 = total;
            cout << endl;
            cout << "=====================================================" << endl;
            cout << "Total belanja anda Rp. " << totbayar2 << endl;
            cout << "=====================================================" << endl;

            cout << "Mau Belanja lagi ? [y/n] ";
            cin >> nambah;

            if (nambah == 'y' || nambah == 'Y')
            {
                cout << "\033[2J\033[0;0H";
                goto awal;
            }
            else
            {
                cout << "\033[2J\033[0;0H";
                checkout();
            }
            break;

        case 3:
            cout << "=====================================================" << endl;
            cout << "      Jenis Barang Yang Tersedia !!" << endl;
            cout << endl;
            cout << "1. Kemeja pria & wanita | Rp. 70.000       " << endl;
            cout << "2. Boxer pria           | Rp. 15.000      " << endl;
            cout << "3. Tas pria & wanita    | Rp. 40.000      " << endl;
            cout << "=====================================================" << endl;
            cout << "Pilih Barang [1,2,3]: ";
            cin >> barang;

            switch (barang)
            {
            case 1:
                cout << endl;
                cout << "Jumlah barang        : ";
                cin >> n;
                total = 70000 * n;
                break;
            case 2:
                cout << endl;
                cout << "Jumlah barang        : ";
                cin >> n;
                total = 15000 * n;
                break;
            case 3:
                cout << endl;
                cout << "Jumlah barang        : ";
                cin >> n;
                total = 40000 * n;
                break;
            }

            totbayar3 = total;
            cout << endl;
            cout << "=====================================================" << endl;
            cout << "Total belanja anda Rp. " << totbayar3 << endl;
            cout << "=====================================================" << endl;
            cout << "Mau belanja lagi?(y/n) : ";
            cin >> nambah;

            if (nambah == 'y' || nambah == 'Y')
            {
                cout << "\033[2J\033[0;0H";
                goto awal;
            }
            else
            {
                cout << "\033[2J\033[0;0H";
                checkout();
            }
        }
    }
    void checkout()
    {
        totseluruh = totbayar1 + totbayar2 + totbayar3;
        cout << "=====================================================" << endl;
        cout << "Total belanja keseluruhan      : " << totseluruh << endl;
        cout << endl;
        if (totseluruh >= 50000)
        {
            cout << "Yeaayy, belanjamu lebih dari Rp.50.000" << endl;
            cout << "Maka kamu akan mendapatkan voucer dan free ongkir!!!" << endl;
            cout << "=====================================================" << endl;
            cout << endl;
            cout << "Apakah anda ingin memakai voucer diskon? [y/n] : ";
            cin >> pildis;
            if (pildis == 'Y' || pildis == 'y')
            {
                cout << "=====================================================" << endl;
                cout << "      Pilih voucher " << endl;
                cout << "1. Potongan harga Rp. 5.000" << endl;
                cout << "2. Potongan harga Rp. 7.000 " << endl;
                cout << "=====================================================" << endl;
                cout << "Pilih voucer [1,2] : ";
                cin >> voucerdisk;
                switch (voucerdisk)
                {
                case 1:
                    vdisk = 5000;
                    break;
                case 2:
                    vdisk = 7000;
                    break;
                default:
                    cout << "Voucer tidak tersedia";
                }
            }
        }
        else
        {
            cout << "Voucer tidak tersedia \n";
        }
        cout << endl;
        cout << "=====================================================" << endl;

        cout << "Apakah anda ingin menggunakan jasa asuransi ?\n(Dikenakan biaya Rp. 5000) [y/n] : ";
        cin >> asuransi;
        if (asuransi == 'y' || asuransi == 'Y')
        {
            jaminan = 5000;
            cout << endl;
            cout << "Anda Dikenakan Biaya Rp. 5.000" << endl;
        }
        else
        {
            cout << endl;
            cout << "Anda tidak Dikenakan Biaya Asuransi" << endl;
        }

        cout << endl;
        cout << "=====================================================" << endl;
        cout << "       Pilih ekspedisi pengiriman " << endl;
        cout << " > hemat " << endl;
        cout << " > Reguler" << endl;
        cout << " > Kargo" << endl;
        cout << "=====================================================" << endl;
        cout << "Masukkan nama pengiriman yang anda inginkan :  ";
        cin >> ekspedisi;
        if (ekspedisi == "hemat")
        {
            ongkir = 20000;
        }
        else if (ekspedisi == "reguler")
        {
            ongkir = 30000;
        }
        else if (ekspedisi == "kargo")
        {
            ongkir = 25000;
        }

        if (totseluruh >= 50000)
        {
            cout << endl;
            cout << "=====================================================" << endl;
            cout << "Total belanja melebihi Rp.50.000" << endl;
            cout << "=====================================================" << endl;
            cout << "Apakah anda ingin memakai gratis ongkir? [y/n] ";
            cin >> disong;
            if (disong == 'Y' || disong == 'y')
            {
                cout << endl;
                cout << "=====================================================" << endl;
                cout << "       Pilih Potongan Ongkir " << endl;

                cout << "1. Potongan ongkir Rp. 10.000" << endl;
                cout << "2. Potongan ongkir Rp. 15.000 " << endl;
                cout << "=====================================================" << endl;
                cout << "Pilih Potongan Ongkir [1,2] : ";
                cin >> diskir;
                switch (diskir)
                {
                case 1:
                    odisk = 10000;

                    break;
                case 2:
                    odisk = 15000;
                    break;
                }
            }
        }

        cout << endl;
        cout << "=====================================================" << endl;
        cout << "             Pilih Alamat kamu" << endl;
        cout << "1. Rumah \t\t bandar jaya,Lampung tengah, Lampung" << endl;
        cout << "2. Kost \t\t Umbulharjo, Yogyakarta, DIY" << endl;
        cout << "3. Kampus \t\t Banguntapan, Bantul, DIY" << endl;
        cout << "=====================================================" << endl;
        cout << "Pilih alamat [1,2,3] : ";
        cin >> almt;
       cout << "\033[2J\033[0;0H";
        switch (almt)
        {
        case 1:
            alamat = "bandar jaya,Lampung tengah, Lampung";
          cout << "\033[2J\033[0;0H";
            break;
        case 2:
            alamat = "Umbulharjo, Yogyakarta, DIY";
          cout << "\033[2J\033[0;0H";
          
            break;
        case 3:
            alamat = "Banguntapan, Bantul, DIY";
          cout << "\033[2J\033[0;0H";
          
            break;
        }

        struk();
        struck();
    }

    void struck()
    {
        cout << "\033[2J\033[0;0H";
        cout << "||==============================================================||" << endl;
        cout << "||                       TOKO ONLINE DVR " << endl;
        cout << "||==============================================================||" << endl;
        cout << "||" << endl;
        cout << "|| Riwayat Pemesanan...!!" << endl;
        cout << "||" << endl;
        cout << "|| Nama Lengkap User      : " << user << endl;
        cout << "|| Alamat Pengiriman      : " << alamat << endl;
        cout << "|| Jasa Pengririman       : " << ekspedisi <<endl;
        cout << "|| Total Belanja Anda     : Rp. " << totseluruh << endl;
        cout << "|| Biaya Asuransi         : Rp. " << jaminan << endl;
        cout << "|| Biaya Ongkir           : Rp. " << ongkir << endl;
        cout << "|| Voucher Diskon         : Rp. " << vdisk << endl;
        cout << "|| Potongan Ongkir        : Rp. " << odisk << endl;
        cout << "||" << endl;
        cout << "|| Total Biaya Yang Harus Dibayar : Rp."
             << totseluruh + jaminan + ongkir - vdisk - odisk << endl;
        cout << "|| Dibayar Dengan Saldo Anda.... " << endl;
        cout << "||"<<endl;
        cout << "|| Sisa Saldo Anda        : Rp.  " <<saldo - (totseluruh + jaminan + ongkir - vdisk - odisk)<< endl;
        cout << "||"<<endl;
        cout << "||                         Pesanan Anda Sedang diPersiapkan...!!" << endl;
        cout << "||==============================================================||" << endl;
    }

    void struk()
    {

        tulis_data.open("Struk belanja.txt");

        tulis_data << "||==============================================================||" << endl;
        tulis_data << "||                      TOKO ONLINE DRD " << endl;
        tulis_data << "||==============================================================||" << endl;
        tulis_data << "||" << endl;
        tulis_data << "|| Riwayat Pemesanan...!!" << endl;
        tulis_data << "||" << endl;
        tulis_data << "|| Nama Lengkap User      : " << user << endl;
        tulis_data << "|| Alamat Pengiriman      : " << alamat << endl;
        tulis_data << "|| Jasa Pengiriman        : " << ekspedisi <<endl;
        tulis_data << "|| Total Belanja Anda     : Rp. " << totseluruh << endl;
        tulis_data << "|| Biaya Asuransi         : Rp. " << jaminan << endl;
        tulis_data << "|| Biaya Ongkir           : Rp. " << ongkir << endl;
        tulis_data << "|| Voucher Diskon         : Rp. " << vdisk << endl;
        tulis_data << "|| Potongan Ongkir        : Rp. " << odisk << endl;
        tulis_data << "||" << endl;
        tulis_data << "|| Total Biaya Yang Harus Dibayar : Rp."
                   << totseluruh + jaminan + ongkir - vdisk - odisk << endl;
        tulis_data << "|| Dibayar Dengan Saldo Anda.... " << endl;
        tulis_data << "||"<<endl;
        tulis_data << "|| Sisa Saldo Anda        : Rp.  " <<saldo - (totseluruh + jaminan + ongkir - vdisk - odisk)<< endl;
      tulis_data << "||"<<endl;
        tulis_data << "||" << endl;
        tulis_data << "||" << endl;
        tulis_data << "||                         Pesanan Anda Sedang diPersiapkan...!!" << endl;
        tulis_data << "||==============================================================||" << endl;

        tulis_data.close();
    }

private:
    ofstream tulis_data;
    string user, user1, user2, user3, alamat, ekspedisi;
    int pilih, barang, vdisk =0, odisk, jaminan =0;
    char nambah, asuransi, disong, pildis;
    int pw, pw1, pw2, pw3, saldo, n, diskir, ongkir, almt;
    int totbayar1 = 0, totbayar2 = 0, totbayar3 = 0, total = 0, totseluruh = 0, voucer, voucerdisk;
};

int main()
{
    shop x;
    x.login();
}