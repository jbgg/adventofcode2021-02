#ifndef __INPUT_H__
#define __INPUT_H__

struct _input_t {
 char *p;
};
typedef struct _input_t input_t[1];

enum mov_t {MOV_FORWARD, MOV_DOWN, MOV_UP};
struct _line_t {
 enum mov_t mov;
 long n;
};
typedef struct _line_t line_t[1];

void input_print();
int input_init(input_t);

int input_readnumber(input_t input, long *v);
int input_readword(input_t input, char *w, int s);
int input_readline(input_t input, line_t l);

int input_endq(input_t input);

void input_skipblank(input_t input);
void input_skipspace(input_t input);

#endif /* __INPUT_H__ */
