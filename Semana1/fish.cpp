#include <iostream>

using namespace std;

int main(){
    // Seu código vai aqui
	int n;
	cin >> n;

	int nets[n][4];
	

	int hx, hy = 1;
	
	int xi, xf, yi, yf;
	
	//save nets
	for (int i = 0; i < n; i++) {
		cin >> xi >> xf >> yi >> yf;
		
		nets[i][0] = xi - 1;
		nets[i][1] = xf - 1;
		nets[i][2] = yi - 1;
		nets[i][3] = yf - 1;
		
		// find grix size
		if (yf > hy) {
			hy = yf - 1;
		}
		
		if (xf > hx) {
			hx = xf - 1;
		}
		
	}
	
	int grid[hx][hy];

    // initialize grid to all zeroes
	for (int i = 0; i < hx; i++) {
		for (int j = 0; j < hy; j++) {
			grid[i][j] = 0;
		}
	}

    // for (int i = 0; i < hx; i++) {
    //     for (int j = 0; j < hy; j++) {
    //         cout << grid[i][j] << " ";
    //     }
    //     cout << "\n";
	// }
    //  cout << "\n";
	
	// for each net, fill in the grid
	for (int i = 0; i < n; i++) {

		int start_x = nets[i][0];
		int end_x = nets[i][1];
		int start_y = nets[i][2];
		int end_y = nets[i][3];

        // cout << "net " << i << ", start_x: " << start_x << ", end_x: " << end_x << ", start_y: " << start_y << ", end_y: " << end_y << "\n";
		
		for (int k = start_x ; k < end_x; k++) {
			for (int l = start_y ; l < end_y; l++) {
                // cout << "Filling in net " << i << " at " << k << ", " << l << "\n";
				grid[k][l] = 1;
			}
		}

        // for (int i = 0; i < hx; i++) {
        //     for (int j = 0; j < hy; j++) {
        //         cout << grid[i][j] << " ";
        //     }
        //     cout << "\n";
	    // }
        // cout << "\n";
	}
	
	int area = 0;
	
	// count the ones in the grid
	for (int i = 0; i < hx; i++) {
		for (int j = 0; j < hy; j++) {
			if (grid[i][j] == 1) {
				area++;
			}
		}
	}

    // // visualize grid
	// for (int i = 0; i < hx; i++) {
	// 	for (int j = 0; j < hy; j++) {
	// 		cout << grid[i][j] << " ";
	// 	}
    //     cout << "\n";
	// }
	

    cout << area << "\n";

    return 0;
}
