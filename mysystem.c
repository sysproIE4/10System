/*
 *  mysystem.c : system 関数のクローンとテストドライバ
 */

#include <stdio.h>
#include <stdlib.h>            // 本物のsystem関数のため
#include <sys/wait.h>          // waitのため

// system関数のクローン
int mysystem(char *command) {
  int status;

  // ここにプログラムを書く

  // status変数にwait()が格納した値から終了ステータスを取り出して返す
  return WEXITSTATUS(status);
}

// テストドライバ（mysystem()関数動作テスト用の仮のmain）
int main(int argc, char *argv[]) {
  if (argc!=2) {
    fprintf(stderr, "使い方 : %s コマンド文字列\n", argv[0]);
    return 1;
  }
  printf("mysystem:\n");
  int r = mysystem(argv[1]);            // mysystemを実行してみる
  printf("retval = %08x\n", r);         // mysystemが返した値

  printf("system:\n");
  int s = system(argv[1]);              // 比較のために本物systemを実行
  printf("retval = %08x\n", s);         // systemが返した値
  return 0;
}

/* 実行例

ここに実行例を書く

*/