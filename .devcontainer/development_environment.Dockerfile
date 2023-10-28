ARG base_tag=debian
ARG base_img=mcr.microsoft.com/vscode/devcontainers/base:${base_tag}

FROM --platform=linux/amd64 ${base_img}

RUN apt-get update --fix-missing && apt-get -y upgrade
RUN apt-get install -y --no-install-recommends \
    apt-utils \
    cmake \
    clang \
    clangd \
    git