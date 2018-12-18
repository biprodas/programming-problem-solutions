#include <bits/stdc++.h>
using namespace std;

int main(){
	int pre = 0, hour, min, sec, speed=0, newSpeed;
	float distance=0;
    	char buffer[101];
	while(cin.getline(buffer, sizeof(buffer))){
        int n = sscanf(buffer, "%d:%d:%d %d", &hour, &min, &sec, &newSpeed);
		int now = hour*3600 + min*60 + sec;
		distance += (now - pre) * speed;
		pre = now;
		n==3 ?  printf("%02d:%02d:%02d %.2f km\n", hour, min, sec, distance/3600) : speed = newSpeed;
    	}
    
    	return 0;
}



