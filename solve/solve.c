
#include "input.h"
#include "io.h"

int cmd_solve2(char *args){
 input_t input;
 if(input_init(input)){
  io_printf("init intput failed\r\n");
  return 1;
 }

 return 0;
}

int cmd_solve1(char *args){
 input_t input;
 if(input_init(input)){
  io_printf("init intput failed\r\n");
  return 1;
 }

 return 0;
}

int cmd_input(char *args){
 input_print();
 return 0;
}
