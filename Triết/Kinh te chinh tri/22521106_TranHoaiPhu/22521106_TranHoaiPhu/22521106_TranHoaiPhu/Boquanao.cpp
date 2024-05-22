#include "Boquanao.h"
void Boquanao::Nhap()
{
	Sanpham* x;
	Phukien* y;
	cout << "\n\n\t\t NHAP THONG TIN BO DO" << endl;
	cout << "\n\t Nhom bo do ( 1- Bo Hoang Hon, 2- Bo Free): ";
	cin >> goibo;
	if (goibo == 1) {
		cin.ignore();
		cout << "\n\t Nhap vao ma bo: ";
		getline(cin, Mabo);
		cout << "\n\t Nhap vao gioi tinh(1- Nam, 2- Nu): ";
		cin >> gtbo;
		if (gtbo == 1) {
			GTbo = "Nam";
		}
		else {
			GTbo = "Nu";
		}
		cout << "\n\t Nhap vao size(1- Size S, 2- Size M, 3- Size L): ";
		cin >> sizebo;
		if (sizebo == 1) {
			Sizebo = "Size S";
		}
		else if (sizebo == 2) {
			Sizebo = "Size M";
		}
		else {
			Sizebo = "Size L";
		}
		cout << "\n\t Nhap vao thong tin ao so mi "<<endl;
		x = new Aosomi;
		x->Nhap();
		ds_bo.push_back(x);
		cout << "\n\t Nhap vao thong tin quan tay "<<endl;
		x = new Quantay;
		x->Nhap();
		ds_bo.push_back(x);
		cout << "\n\t Nhap vao so luong phu kien(LUU Y:NHAP VAO 1 CON SO): ";
		cin >> sopk;
		for (int i = 0; i < sopk; i++) {
			cout << "\n Nhap thong tin loai phu kien thu " << i + 1 << " (LUU Y: BAN CO " << sopk << " LOAI PHU KIEN)";
			cout << "\n\t Nhap vao lua chon phu kien(1- Vong tay, 2- Khan quang co): ";
			cin >> pk;
			if (pk == 1) {
				y = new Vongtay;
				y->Nhap();
				ds_pk.push_back(y);
			}
			else {
				y = new Khanquang;
				y->Nhap();
				ds_pk.push_back(y);
			}
		}
		Loaibo = "Bo hoang hon";
	}
	else {
		cin.ignore();
		cout << "\n\t Nhap vao ma bo: ";
		getline(cin, Mabo);
		cout << "\n\t Nhap vao gioi tinh(1- Nam, 2- Nu): ";
		cin >> gtbo;
		if (gtbo == 1) {
			GTbo = "Nam";
		}
		else {
			GTbo = "Nu";
		}
		cout << "\n\t Nhap vao size(1- Size S, 2- Size M, 3- Size L): ";
		cin >> sizebo;
		if (sizebo == 1) {
			Sizebo = "Size S";
		}
		else if (sizebo == 2) {
			Sizebo = "Size M";
		}
		else {
			Sizebo = "Size L";
		}
		cout << "\n\t Nhap vao thong tin ao thun "<<endl;
		x = new Aothun;
		x->Nhap();
		ds_bo.push_back(x);
		cout << "\n\t Nhap vao lua chon quan (1-Quan short, 2-Quan tay, 3-Quan jean): ";
		cin >> quan;
		if (quan == 1) {
			x = new Quanshort;
			x->Nhap();
			ds_bo.push_back(x);
		}
		else if (quan == 2) {
			x = new Quantay;
			x->Nhap();
			ds_bo.push_back(x);
		}
		else {
			x = new Quanjean;
			x->Nhap();
			ds_bo.push_back(x);
		}
		cout << "\n\t Nhap vao so luong phu kien(LUU Y:NHAP VAO 1 CON SO): ";
		cin >> sopk;
		for (int i = 0; i < sopk; i++) {
			cout << "\n Nhap thong tin loai phu kien thu " << i + 1 << " (LUU Y: BAN CO " << sopk << " LOAI PHU KIEN)";
			cout << "\n\t Nhap vao lua chon phu kien(1- Vong tay, 2- Khan quang co): ";
			cin >> pk;
			if (pk == 1) {
				y = new Vongtay;
				y->Nhap();
				ds_pk.push_back(y);
			}
			else {
				y = new Khanquang;
				y->Nhap();
				ds_pk.push_back(y);
			}
		}
		Loaibo = "Bo Free";
	}
}

void Boquanao::Xuat(ostream& os) const
{
	long sum = 0;
	double gia1bo;
	for (int i = 0; i < ds_bo.size(); i++) {
		sum += ds_bo[i]->Don_gia();
	}
	for (int j = 0; j < ds_pk.size(); j++) {
		sum += ds_pk[j]->Don_gia_pk();
	}
	if (goibo == 1) {
		gia1bo = 1.3 * sum;
	}
	else {
		gia1bo = 1.2 * sum;
	}
	os << "\n Bo quan ao: ";
	os << Mabo << " " << Loaibo << " " << GTbo << " " << Sizebo << " " << (size_t)gia1bo ;
	for (int i = 0; i < ds_bo.size(); i++) {
		ds_bo[i]->Xuat(os);
	}
	for (int i = 0; i < ds_pk.size(); i++) {
		cout << endl;
		cout << "Phu kien thu " << i + 1 << ": ";
		ds_pk[i]->Xuat(os);
	}
}
