#include "detect_checker/detect_checker_stereo.h"

#include "capture_cam/capture_cam_stereo.h"

void StereoCheckerDetector::process(const cv::Mat &img_l, const cv::Mat &img_r) {
    if (!is_rectify_)
        calib_stereo_fisheye_.calib(img_l, img_r);
    else
        calib_stereo_fisheye_.rectify(img_l, img_r);
}
