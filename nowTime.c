#include <time.h>
#include <stdio.h>

int main() {
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);

	printf("2020114932 do giheon\n%d-%d-%dT%d:%d:%d\n",tm.tm_year+1900,tm.tm_mon+1,tm.tm_mday,tm.tm_hour,tm.tm_min,tm.tm_sec);
	return 0;
}
