#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
int main() {
    int stu = 6;
    int subj = 5;
    int mb[stu][subj];
    cin >> stu >> subj;
	cout <<"Show contents of ma \n";
	//รับคะแนน นักเรียน ไม่เกิน 100 คน ที่สอบ 5 วิชา
	// Mathematics Physics Chemistry Biology English
	string Vishaname[5] = {"Mathematics","Physics", "Chemistry", "Biology", "English"};
	/**<
	6 5
	90 80 71 50 95
	45 85 72 52 60
	90 80 70 50 55
	91 38 75 52 45
	65 38 75 52 45
	91 38 35 42 88
	*/
	int scr;
	for(int i=0; i<stu; i++){
		for(int j=0; j<subj ; j++){
            cin >> scr;
            mb[i][j] = scr;

		}}
    cout << setw(4) << 'M' << setw(4) << 'P' << setw(4) << 'C' << setw(4) << 'B' << setw(4) << 'E' << endl;
    for(int i=0; i<stu; i++){
        for(int j=0; j<subj ; j++){
            cout<< setw(4) << mb[i][j] ;
        }
        cout << endl;
    }
// Average
    float sum[subj] = {0,0,0,0,0};
    float average[subj] = {0,0,0,0,0};

    for (int i = 0 ; i < subj ; i++) {
        for (int j = 0; j<stu; j++) {

        sum[i] += mb[j][i];}

        average[i] = sum[i] / stu;
        cout << Vishaname[i] << "'s average score is:" << average[i] << endl;
}
}
