//
// Created by Lenovo on 11/23/2023.
//
#include<iostream>
using namespace std;
int main(){
    int cnt=1,draw=1;
    char ans;
    while(cnt) {
        char q = '1', w = '2', e = '3', r = '4', t = '5', y = '6', u = '7', p = '9', o = '8';
        cout << q << " | " << w << " | " << e << endl
             << r << " | " << t << " | " << y << endl
             << u << " | " << o << " | " << p << endl;
        int cell;
        for (int i = 0; i < 9; i++) {
            if ((q == 'x' && w == 'x' && e == 'x') || (r == 'x' && t == 'x' && y == 'x') ||
                (u == 'x' && o == 'x' && p == 'x') || (q == 'x' && r == 'x' && u == 'x') ||
                (w == 'x' && t == 'x' && o == 'x') || (e == 'x' && y == 'x' && p == 'x') ||
                (q == 'x' && t == 'x' && p == 'x') || (u == 'x' && t == 'x' && e == 'x')) {
                cout << "player 1 win" << endl;
                draw=0;
                break;
            } else if ((q == 'o' && w == 'o' && e == 'o') || (r == 'o' && t == 'o' && y == 'o') ||
                       (u == 'o' && o == 'o' && p == 'o') || (q == 'o' && r == 'o' && u == 'o') ||
                       (w == 'o' && t == 'o' && o == 'o') || (e == 'o' && y == 'o' && p == 'o') ||
                       (q == 'o' && t == 'o' && p == 'o') || (u == 'o' && t == 'o' && e == 'o')) {
                cout << "player 2 win" << endl;
                draw=0;
                break;
            }

            cout << "Enter cell num : ";
            cin >> cell;
            if (i == 0 || i == 2 || i == 4 || i == 6 || i == 8) {
                if (cell == 1) {
                    q = 'x';
                    cout << q << " | " << w << " | " << e << endl
                         << r << " | " << t << " | " << y << endl
                         << u << " | " << o << " | " << p << endl;
                } else if (cell == 2) {
                    w = 'x';
                    cout << q << " | " << w << " | " << e << endl
                         << r << " | " << t << " | " << y << endl
                         << u << " | " << o << " | " << p << endl;
                } else if (cell == 3) {
                    e = 'x';
                    cout << q << " | " << w << " | " << e << endl
                         << r << " | " << t << " | " << y << endl
                         << u << " | " << o << " | " << p << endl;
                } else if (cell == 4) {
                    r = 'x';
                    cout << q << " | " << w << " | " << e << endl
                         << r << " | " << t << " | " << y << endl
                         << u << " | " << o << " | " << p << endl;
                } else if (cell == 5) {
                    t = 'x';
                    cout << q << " | " << w << " | " << e << endl
                         << r << " | " << t << " | " << y << endl
                         << u << " | " << o << " | " << p << endl;
                } else if (cell == 6) {
                    y = 'x';
                    cout << q << " | " << w << " | " << e << endl
                         << r << " | " << t << " | " << y << endl
                         << u << " | " << o << " | " << p << endl;
                } else if (cell == 7) {
                    u = 'x';
                    cout << q << " | " << w << " | " << e << endl
                         << r << " | " << t << " | " << y << endl
                         << u << " | " << o << " | " << p << endl;
                } else if (cell == 8) {
                    o = 'x';
                    cout << q << " | " << w << " | " << e << endl
                         << r << " | " << t << " | " << y << endl
                         << u << " | " << o << " | " << p << endl;
                } else if (cell == 9) {
                    p = 'x';
                    cout << q << " | " << w << " | " << e << endl
                         << r << " | " << t << " | " << y << endl
                         << u << " | " << o << " | " << p << endl;
                }

            }
            if (i == 1 || i == 3 || i == 5 || i == 7) {
                if (cell == 1) {
                    q = 'o';
                    cout << q << " | " << w << " | " << e << endl
                         << r << " | " << t << " | " << y << endl
                         << u << " | " << o << " | " << p << endl;
                } else if (cell == 2) {
                    w = 'o';
                    cout << q << " | " << w << " | " << e << endl
                         << r << " | " << t << " | " << y << endl
                         << u << " | " << o << " | " << p << endl;
                } else if (cell == 3) {
                    e = 'o';
                    cout << q << " | " << w << " | " << e << endl
                         << r << " | " << t << " | " << y << endl
                         << u << " | " << o << " | " << p << endl;
                } else if (cell == 4) {
                    r = 'o';
                    cout << q << " | " << w << " | " << e << endl
                         << r << " | " << t << " | " << y << endl
                         << u << " | " << o << " | " << p << endl;
                } else if (cell == 5) {
                    t = 'o';
                    cout << q << " | " << w << " | " << e << endl
                         << r << " | " << t << " | " << y << endl
                         << u << " | " << o << " | " << p << endl;
                } else if (cell == 6) {
                    y = 'o';
                    cout << q << " | " << w << " | " << e << endl
                         << r << " | " << t << " | " << y << endl
                         << u << " | " << o << " | " << p << endl;
                } else if (cell == 7) {
                    u = 'o';
                    cout << q << " | " << w << " | " << e << endl
                         << r << " | " << t << " | " << y << endl
                         << u << " | " << o << " | " << p << endl;
                } else if (cell == 8) {
                    o = 'o';
                    cout << q << " | " << w << " | " << e << endl
                         << r << " | " << t << " | " << y << endl
                         << u << " | " << o << " | " << p << endl;
                } else if (cell == 9) {
                    p = 'o';
                    cout << q << " | " << w << " | " << e << endl
                         << r << " | " << t << " | " << y << endl
                         << u << " | " << o << " | " << p << endl;
                }

            }
        }
        if(draw==1)
            cout<<"draw"<<endl;
        cout<<"Do you want to play again? (y/n)";
        cin>>ans;
        if(ans=='n'){
            cnt=0;
            cout<<"thanks for playnig my game";
        }
    }


    return 0;
}
