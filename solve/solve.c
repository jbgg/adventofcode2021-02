
#include "input.h"
#include "io.h"

int cmd_solve2(char *args){
 input_t input;
 if(input_init(input)){
  io_printf("init intput failed\r\n");
  return 1;
 }

 line_t l;
 long hpos;
 long depth;
 long aim;
 long res;
 hpos = 0;
 depth = 0;
 aim = 0;
 while(!input_endq(input)){
  if(input_readline(input, l)){
   io_printf("readline failed\r\n");
   return 1;
  }
  if(l->mov == MOV_FORWARD){
   hpos += l->n;
   depth += aim * l->n;
  }else if(l->mov == MOV_DOWN){
   aim += l->n;
  }else if(l->mov == MOV_UP){
   aim -= l->n;
  }
 }
 res = hpos * depth;
 io_printf("%d\r\n", res);
 return 0;
}

int cmd_solve1(char *args){
 input_t input;
 if(input_init(input)){
  io_printf("init intput failed\r\n");
  return 1;
 }

 line_t l;
 long hpos;
 long depth;
 long res;
 hpos = 0;
 depth = 0;
 while(!input_endq(input)){
  if(input_readline(input, l)){
   io_printf("readline failed\r\n");
   return 1;
  }
  if(l->mov == MOV_FORWARD){
   hpos += l->n;
  }else if(l->mov == MOV_DOWN){
   depth += l->n;
  }else if(l->mov == MOV_UP){
   depth -= l->n;
  }
 }
 res = hpos * depth;
 io_printf("%d\r\n", res);
 return 0;
}

int cmd_input(char *args){
 input_print();
 return 0;
}
