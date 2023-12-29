#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static uint32_t init_time = 0;
FILE *event_fp;


uint32_t NDL_GetTicks() {
  struct timeval tv;
  gettimeofday(&tv, NULL);
  // 返回毫秒数
  uint32_t now_time = (uint32_t)(tv.tv_sec * 1000 + tv.tv_usec / 1000) - init_time;
  return now_time;
}

int NDL_PollEvent(char *buf, int len) {
  char k;
  int ret = fscanf(event_fp, "%c", k);
  return ret;
}

void NDL_OpenCanvas(int *w, int *h) {
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  // 初始化时间
  struct timeval tv;
  gettimeofday(&tv, NULL);
  init_time = (uint32_t)(tv.tv_sec * 1000 + tv.tv_usec / 1000);
  // 初始化键盘事件
  event_fp = fopen("/dev/event", "r+");
  return 0;
}

void NDL_Quit() {
  // 关闭键盘事件
  fclose(event_fp);
}
