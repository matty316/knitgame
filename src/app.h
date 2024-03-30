#ifndef APP_H
#define APP_H

void initApp(void);
void loop(void);
void closeApp(void);

struct App {
    float player_x;
    float player_y;
};

#endif
