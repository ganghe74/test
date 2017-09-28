#include <stdio.h> // 프로젝트 오일러 8번

int main() {

	char text[1000] = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
	int high = 0;
	int high_list[5] = { 0 };
	int temp[5] = { 0 };

	for (int i = 0; i < 996; i++) {
		temp[0] = text[i] - 48;			// - 48 은 아스키코드 -> 숫자 변환하는 계산.
		temp[1] = text[i + 1] - 48;
		temp[2] = text[i + 2] - 48;
		temp[3] = text[i + 3] - 48;
		temp[4] = text[i + 4] - 48;
		if (high < temp[0] * temp[1] * temp[2] * temp[3] * temp[4]) {
			high = temp[0] * temp[1] * temp[2] * temp[3] * temp[4];
			for (int j = 0; j < 5; j++) {
				high_list[j] = temp[j];
			}
			printf("HIGH : %d\n", high);
		}
		printf("%d %d %d %d %d\n", temp[0], temp[1], temp[2], temp[3], temp[4]);
	}

	printf("\n최고 기록 : %d\n", high);
	printf("배열 : ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", high_list[i]);
	}
	printf("\n");

}

/*  포럼답안
#include <stdio.h>

static char* large_val =
"73167176531330624919225119674426574742355349194934"	\
"96983520312774506326239578318016984801869478851843"	\
"85861560789112949495459501737958331952853208805511"	\
"12540698747158523863050715693290963295227443043557"	\
"66896648950445244523161731856403098711121722383113"	\
"62229893423380308135336276614282806444486645238749"	\
"30358907296290491560440772390713810515859307960866"	\
"70172427121883998797908792274921901699720888093776"	\
"65727333001053367881220235421809751254540594752243"	\
"52584907711670556013604839586446706324415722155397"	\
"53697817977846174064955149290862569321978468622482"	\
"83972241375657056057490261407972968652414535100474"	\
"82166370484403199890008895243450658541227588666881"	\
"16427171479924442928230863465674813919123162824586"	\
"17866458359124566529476545682848912883142607690042"	\
"24219022671055626321111109370544217506941658960408"	\
"07198403850962455444362981230987879927244284909188"	\
"84580156166097919133875499200524063689912560717606"	\
"05886116467109405077541002256983155200055935729725"	\
"71636269561882670428252483600823257530420752963450";

int main(int argc, char** argv)
{
int i;
int max_value = 0;
int offset = 0;
int value;

for( i = 0; large_val[i+4]; i++ )
{
value = ( large_val[i] - '0' ) *
( large_val[i+1] - '0' ) *
( large_val[i+2] - '0' ) *
( large_val[i+3] - '0' ) *
( large_val[i+4] - '0' );

if ( value > max_value )	// 최대값 기억
{
max_value = value;
offset = i;
}
}
printf( "max_value = %d at %d\n", max_value, offset );
return 0;
}
*/