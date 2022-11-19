#include <iostream>
using namespace std;
int main() {

	char players[100];
	cin >> players;

	int team1 = 1 , team0 = 1;

	for (int i = 1; players[i] != '\0'; i++) {

		if (team1 >= 7 || team0 >= 7) {
			cout << "YES";
			return 0;
		}

		if (players[i] == '1') {
			team1++;
			team0 = 0;
		}

		else if (players[i] == '0') {
			team0++;
			team1 = 0;
		}
	}

	cout << "NO";
	return 0;
}
