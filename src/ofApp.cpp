#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // ターゲットのパスを設定
    target_path = "/Users/kmasumoto/workspace/openFrameWorks/of_v0.12.0_osx_release/_dev/watchedFolder/test.json";
    // ターゲットのファイルの最終更新時間を取得
    struct stat stat_buf;
    stat(target_path.c_str(), &stat_buf);
    last_file_time = stat_buf.st_mtime;

}
//--------------------------------------------------------------
void ofApp::update(){
    // ターゲットのファイルの最終更新時間を取得
    struct stat stat_buf;
    stat(target_path.c_str(), &stat_buf);
    time_t current_file_time = stat_buf.st_mtime;

    // ファイルの最終更新時間が変わっていたら
    if (last_file_time != current_file_time) {
        // ファイルの最終更新時間を更新
        last_file_time = current_file_time;
        // ファイルが更新されたことを通知
        ofLogNotice() << "File updated!";
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}