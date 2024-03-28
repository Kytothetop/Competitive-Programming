#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int m, n;
    cin >> n >> m;

    vector<vector<bool>> visited(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        for (int j = 0; j < m; j++) {
            if (temp[j] == '1')
                visited[i][j] = true;
        }
    }

    int cnt = 0;
    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (visited[i][j]) {
                q.push({i, j});
                visited[i][j] = false; // Marking as visited
                cnt++;

                while (!q.empty()) {
                    pair<int, int> pos = q.front();
                    int x = pos.first;
                    int y = pos.second;
                    q.pop();

                    for (int dx = -1; dx <= 1; dx++) {
                        for (int dy = -1; dy <= 1; dy++) {
                            int nx = x + dx;
                            int ny = y + dy;

                            if (nx >= 0 && nx < n && ny >= 0 && ny < m && visited[nx][ny]) {
                                q.push({nx, ny});
                                visited[nx][ny] = false; // Marking as visited
                            }
                        }
                    }
                }
            }
        }
    }

    cout << cnt;

    return 0;
}


/*#include <iostream>
#include <set>
#include <queue>

using namespace std;

int main()
{
    unsigned short m,n;
    cin >> n >> m;
    set<pair<unsigned short,unsigned short>> arr;
    for(unsigned short i =0; i < n ; i++)
        {
            string temp;
            cin >> temp;
            for(unsigned short j = 0; j < m ; j++)
                {
                    if(temp[j] == '1')
                        arr.insert({i,j});
                }
        }

    int cnt =0;
    while(not arr.empty())
        {
            queue<pair<unsigned short,unsigned short>> q;

            q.push(*(arr.begin()));
//            cout << q.front().first << ','<< q.front().second << '\n';
            cnt++;
            arr.erase(*(arr.begin()));
            while(not q.empty())
                {
//                    pair<unsigned short,unsigned short> pos = q.front();
                    unsigned short x = q.front().first;
                    unsigned short y = q.front().second;
                    q.pop();
                    for(short i = -1 ; i <= 1 ; i++)
                        {
                            for(short j = -1 ; j <= 1 ; j++)
                                {
                                    if(arr.count({x+i,y+j}) and (not (i == 0 and j == 0)))
                                        {
                                            q.push({x+i,y+j});
                                            arr.erase({x+i,y+j});
//                                            cout << x+i << ' ' << y+j << '\n';
                                        }
                                }
                        }
//					arr.erase({x,y});
                }
        }
    cout << cnt;


    return 0;
}
/*
#include <iostream>
#include <set>
#include <queue>

using namespace std;

// encode coordinates (x, y) to a single integer value
int encode(int x, int y, int m) {
    return x * m + y;
}

int main() {
    short m, n;
    cin >> n >> m;

    set<short> arr;

    for (short i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        for (short j = 0; j < m; j++) {
            if (temp[j] == '1')
                arr.insert(encode(i, j, m));
        }
    }

    int cnt = 0;
    while (!arr.empty()) {
        queue<short> q;

        q.push(*(arr.begin()));
        cnt++;
        arr.erase(arr.begin());

        while (!q.empty()) {
            int encoded_pos = q.front();
            q.pop();

            // Decode integer value back to coordinates (x, y)
            int x = encoded_pos / m;
            int y = encoded_pos % m;

            for (short i = -1; i <= 1; i++) {
                for (short j = -1; j <= 1; j++) {
                    int nx = x + i;
                    int ny = y + j;
                    int encoded_neighbor = encode(nx, ny, m);
                    if (nx >= 0 && nx < n && ny >= 0 && ny < m && arr.count(encoded_neighbor) &&
                        !(i == 0 && j == 0)) {
                        q.push(encoded_neighbor);
                        arr.erase(encoded_neighbor);
                    }
                }
            }
        }
    }

    cout << cnt;

    return 0;
}

*/
