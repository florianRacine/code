/**
 *    author:  evoPrg
 *    created: 21.09.2022 09:20:23
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<tuple<int,int>> film;
    vector<tuple<int,int>> selectFilm;
    for (int i = 0; i < n; i++) {
        int start; cin >> start;
        int end; cin >> end;
        film.push_back(make_tuple(end,start));
    }
    sort(film.begin(), film.end());
    selectFilm.push_back(make_tuple(get<0>(film[0]),get<1>(film[0])));
    for (int i = 1; i < n; i++) {
        if (get<0>(selectFilm[i-1]) <= get<1>(selectFilm[i])) {
            selectFilm.push_back(make_tuple(get<0>(film[i]),get<1>(film[i])));
        }
    }
    for (int i = 0; i < (int) selectFilm.size(); i++) {
        cout << "debut = " << get<1>(selectFilm[i]);
        cout << ", fin = " << get<0>(selectFilm[i]) << endl;
    }
    return 0;
}
