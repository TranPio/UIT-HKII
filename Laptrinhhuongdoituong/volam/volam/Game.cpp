#include <iostream>
#include "Game.h"
#include <string>
using namespace std;
Game::Game() {
    this->ten = "";
    this->level = 0;
}
Game::~Game() {
}
void Game::nhap() {
    cin.ignore();
    cout <<"Nhap ten : ";
        getline(cin, ten);
    cout << "Nhap cap do: ";
        cin >> level;
}
void Game::xuat() const {
    cout << ten << " | " << level;
}
long long Game::tinhsatthuong() {
    return 0;
}
string Game::xuathe() {
    return 0;
}