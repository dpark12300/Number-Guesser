#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int genanswer() {
	return rand() % 100 + 1;
}
int main() {
	srand(time(NULL));
	int answer = genanswer();
	bool playagain = true;
	// while playagain is true ...
	// while (condition) {}
	while (playagain) {
		// TODO: while guess != answer ...
		int guess = 0;
		cout << "Guess a number between 1 and 100! And do it soon. I'm tired." << endl;
		cin >> guess;
		if (guess < answer) {
			cout << "🤣 If you're an airplane, increase your altitude!🤣" << endl;
		} else if (guess > answer) {
			cout << "🤣 Mine lower, and you'll find diamonds!🤣" << endl;
		} else {
			cout << "👍 You guessed it! Wanna play again?👍" << endl;
		}
	}
}