#include "Danhsachboquanao.h"

void Danhsachboquanao::Nhap()
{
	cout << "\n\t Nhap so luong bo quan ao: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		Boquanao* x = new Boquanao;
		cout << "\n\t Nhap thong tin bo quan ao thu  " << i + 1 << ": "<<endl;
		x->Nhap();
		ds_boquanao.push_back(x);

	}
}

void Danhsachboquanao::Xuat(ostream &os) const
{
	for (int i = 0; i < n; i++) {
		os << "\n\t Thong tin bo quan ao thu " << i + 1 << ": ";
		ds_boquanao[i]->Xuat(os);
	}

}
