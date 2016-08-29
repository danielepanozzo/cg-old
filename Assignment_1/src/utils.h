#ifndef UTILS_H
#define UTILS_H

#include <Eigen/Core>
#include <algorithm>

unsigned char double_2_unsignedchar(const double d)
{
    return round(std::max(std::min(1.,d),0.)*255);
}

void write_matrix_to_png(const Eigen::MatrixXd& R, const Eigen::MatrixXd& G, const Eigen::MatrixXd& B, const Eigen::MatrixXd& A, const std::string& filename)
{
    assert(R.rows() == G.rows() && G.rows() == B.rows() && B.rows() == A.rows());
    assert(R.cols() == G.cols() && G.cols() == B.cols() && B.cols() == A.cols());

    const int w = R.rows();                              // Image width
    const int h = R.cols();                              // Image height
    const int comp = 4;                                  // 3 Channels Red, Green, Blue, Alpha
    const int stride_in_bytes = w*comp;                  // Lenght of one row in bytes
    std::vector<unsigned char> data(w*h*comp,0);         // The image itself;

    for (unsigned wi = 0; wi<w;++wi)
    {
        for (unsigned hi = 0; hi < h; ++hi)
        {
            data[(hi * w * 4) + (wi * 4) + 0] = double_2_unsignedchar(R(wi,hi));
            data[(hi * w * 4) + (wi * 4) + 1] = double_2_unsignedchar(G(wi,hi));
            data[(hi * w * 4) + (wi * 4) + 2] = double_2_unsignedchar(B(wi,hi));
            data[(hi * w * 4) + (wi * 4) + 3] = double_2_unsignedchar(A(wi,hi));
        }
    }

    stbi_write_png(filename.c_str(), w, h, comp, data.data(), stride_in_bytes);
}
#endif