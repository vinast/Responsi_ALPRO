#include <iostream>
using namespace std;

struct mahasiswa
{
  string nama, tanggal, kelas, nis, jmlhp;
};
struct mahasiswa a[500];

class Responsi
{
public:
  void input();
  void sort();
  void search();
  void output();

private:
  int jml_mhs;
  string tanggal_temp, nis_temp, nama_temp, kelas_temp, bay_temp, id;
};

void Responsi::input()
{
  cout << "|--------------------------------|" << endl;
  cout << "|            RESPONSI            |" << endl;
  cout << "|--------------------------------|" << endl;
  cout << "Masukan Banyak Siswa  : ";
  cin >> jml_mhs;
  cout << endl;

  for (int i = 0; i < jml_mhs; i++)
  {
    cout << "Tanggal Pembayaran    : ";
    cin >> a[i].tanggal;
    cout << "NIS                   : ";
    cin >> a[i].nis;
    cout << "Nama                  : ";
    cin >> a[i].nama;
    cout << "Kelas                 : ";
    cin >> a[i].kelas;
    cout << "Jumlah Pembayaran     : ";
    cin >> a[i].jmlhp;
    cout << endl;
    cout << "";
  }
}

void Responsi::sort()
{
  for (int i = 0; i < jml_mhs; i++)
  {
    for (int j = 0; j < jml_mhs - i - 1; j++)
    {

      if (a[j].tanggal > a[j + 1].tanggal)
      {

        tanggal_temp = a[j].tanggal;
        nis_temp = a[j].nis;
        nama_temp = a[j].nama;
        kelas_temp = a[j].kelas;
        bay_temp = a[j].jmlhp;

        a[j].tanggal = a[j + 1].tanggal;
        a[j].nis = a[j + 1].nis;
        a[j].nama = a[j + 1].nama;
        a[j].kelas = a[j + 1].kelas;
        a[j].jmlhp = a[j + 1].jmlhp;

        a[j + 1].tanggal = tanggal_temp;
        a[j + 1].nis = nis_temp;
        a[j + 1].nama = nama_temp;
        a[j + 1].kelas = kelas_temp;
        a[j + 1].jmlhp = bay_temp;
      }
    }
  }
}

void Responsi::output()
{
  cout << "|------------------------------------------------------------------|" << endl;
  cout << "| TANGGAL PEMBAYARAN |  NIS  |  NAMA  | KELAS  | JUMLAH PEMBAYARAN |" << endl;

  for (int i = 0; i < jml_mhs; i++)
  {
    cout << "|-------------------------------------------------------------------|" << endl;
    cout << "         " << a[i].tanggal << "          " << a[i].nis << "  " << a[i].nama << "    " << a[i].kelas << "         " << a[i].jmlhp << "     " << endl;
  }
  cout << "|-------------------------------------------------------------------|" << endl;
  cout << endl;
}

void Responsi::search()
{
  cout << "Cari : ";
  cin >> id;
  cout << "DITEMUKAN" << endl;
  for (int i = 0; i < jml_mhs; i++)
  {
    if (a[i].nis == id)
    {
      cout << "Tanggal Pembayaran        : " << a[i].tanggal << endl;
      cout << "Nis                       : " << a[i].nis << endl;
      cout << "Nama                      : " << a[i].nama << endl;
      cout << "Kelas                     : " << a[i].kelas << endl;
      cout << "Jumlah Pembayaran         : " << a[i].jmlhp << endl;

      break;
    }
  }
}

int main()
{
  Responsi x;
  x.input();
  x.sort();
  x.output();
  x.search();
  return 0;
}