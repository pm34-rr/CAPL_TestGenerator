#include <ctime>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main( int argc, char ** argv )
{
	int n;
	if ( argc > 1 )
		n = atoi( argv[1] );
	else {
		cout << "Type strings count" << endl;
		cin >> n;
	}
	srand( time( NULL ) );
	ofstream output( "strings" + to_string( n ) + ".txt" );
	int sameCount	= n * 0.2;
	string word;
	word.resize( 13 );
	for ( int i = 0; i < sameCount; ++i ) {
		for ( int j = 0; j < 4; ++j ) {
			for ( int j = 0; j < 13; ++j )
				word[j] = rand() % 26 + 'a';
			output << word << endl;
		}
		output << word << endl;
	}

	cout << "END" << endl;

	return 0;
}
