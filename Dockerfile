# 使用官方 Ubuntu 作为基础镜像
FROM ubuntu:20.04

# 设置环境变量，避免一些交互式安装提示
ENV DEBIAN_FRONTEND=noninteractive

# 更新软件包并安装必要的工具
RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    git \
    g++ \
    wget \
    && rm -rf /var/lib/apt/lists/*


# 设置工作目录
WORKDIR /my_test_project

# 将项目文件复制到容器中
COPY . /my_test_project

# 创建构建目录
RUN mkdir build

# 在容器中构建并运行测试
WORKDIR /my_test_project/build
RUN cmake .. && make && ./test_math

# 默认命令：进入 bash shell
CMD ["bash"]
