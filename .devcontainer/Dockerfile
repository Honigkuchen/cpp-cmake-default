ARG BASE=mcr.microsoft.com/devcontainers/cpp:1-ubuntu-24.04
FROM $BASE

RUN apt update && apt install -y lsb-release wget software-properties-common gnupg
RUN wget https://apt.llvm.org/llvm.sh \
    && chmod u+x llvm.sh \
    && ./llvm.sh 20 \
    && apt-get update \
    && apt-get upgrade -y \
    && apt install -y \
    clang-format-20 \
    libstdc++-14-dev \
    libfmt-dev \
    libgtest-dev \
    libbenchmark-dev \
    cmake-format \
    cmake-curses-gui \
    && rm -rf /var/lib/apt/lists/* \
    && rm llvm.sh \
    && sudo update-alternatives --install /usr/bin/cc cc /usr/bin/clang-20 100 \
    && sudo update-alternatives --install /usr/bin/c++ c++ /usr/bin/clang++-20 100

ENTRYPOINT [ "bash" ]