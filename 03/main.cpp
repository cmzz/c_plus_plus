#include <iostream>

int stonetolb(int);

int main() {
    using namespace std;
    int stone;

    cout << "enter the weight in stone: " ;
    cin >> stone;

    int pounds = stonetolb(stone);
    cout << stone << " stone  = " ;
    cout << pounds << " pounds. " << endl;

    return 0;

}

int stonetolb(int n) {
    return 15 * n;
}