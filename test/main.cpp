#include <stdio.h>
#include <stdlib.h>

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "head.h"


#include <sstream>

int main(){


  //��ȡcsv�ļ�
  char s[800];
  //char number_char[5];  //��char *����ռ�
  char *number_char;
  //number_char = new char[5];
  number_char = (char *)malloc(sizeof(char)*5);
  for (int i = 0; i < 2; ++i){
    char csvname_header[80] = ".\\main\\";
    sprintf(number_char, "%d", i + 1);
    strcat(csvname_header, number_char);
    strcat(csvname_header, "\\");

    for (int j = 0; j < 4; ++j){
      char csvname[80] = "";
      strcat(csvname, csvname_header);
      sprintf(number_char, "%d", j + 1);
      strcat(csvname, number_char);
      strcat(csvname, "\\result.csv");

      FILE *fp = fopen(csvname, "r");
      if(!fp){
        int i = 0;
      }
      fclose(fp);
    }
  }

  return 0;
}