FROM ubuntu:14.04

WORKDIR /usr/src/myapp

RUN apt-get update && apt-get install -y build-essential autoconf automake libtool make gcc g++ && rm -rf /var/lib/apt/lists/*

#CMD /bin/sh -c "gcc -o myapp main.c && ./myapp"
CMD /bin/sh -c "autoscan"
