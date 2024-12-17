#pragma once

#include "ofMain.h"

// システム監視のためのヘッダファイル
#include <sys/stat.h>

class ofApp : public ofBaseApp{
    string target_path; // ターゲットへの絶対パス

    struct stat stat_buf; // stat使うためのやつ
    time_t last_file_time; // ファイルの最終更新時間

	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
};
