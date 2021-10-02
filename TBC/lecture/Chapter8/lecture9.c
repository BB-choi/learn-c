#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    FILE *file = NULL;
    char file_name[] = "my_file.txt"; // TODO: use scanf(...)
    // 별도 옵션이 없을 경우에는 텍스트파일(txt) 
    // ascii코드로 저장된 것, binary 코드로 저장된것

    file = fopen(file_name, "r"); // read , 저장의 경우에는 "write"

    if (file == NULL) // 이런 이름을 가진 파일이 없다면 NULL
    // stream을 여는 데에 (파일을 읽어들이는 데에)실패했다.
    {
        printf("Failed to open file.\n");
        exit(1); // 프로그램 종료
        // exited with 1 (보통은 실패했을 때 1, -1)
    }

    while ((c = getc(file)) != EOF)
    // 파일 스트림으로부터 getc(character)를 읽어들임 EOF를 만날때까지
    // getc(FILE *_Stream) // 파일 스트림이구나.
        putchar(c);
    fclose(file);
    // 파일 스트림을 fopen해서 연 후에  닫아준다 fclose 
    // 운영체제가 이 파일을 다 사용했음을 알게 됨.

    return (0);
}