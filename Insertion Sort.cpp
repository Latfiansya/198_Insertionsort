#include <isotream>
using namespace std;

int arr[20];	//membuat array dengan panjang data 20
int n;			//membuat variabel input n
void input() {	//prosedur input
	while (true) {
		cout << "Masukkan jumlah data pada array : "; //membuat input jumlah elemen array
		cin >> n;

		if (n <= 20) {
			break;
		}
		else {
			cout << "\nArray yang anda masukan maksimal 20 elemen.\n"; //menampilkan pesan jika data lebih dari 20
		}
	}
}