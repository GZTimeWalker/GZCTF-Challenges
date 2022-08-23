FROM alpine:latest AS builder

ARG XINETD_VERSION=2.3.15.4
ARG VERSION=3.1.1

RUN apk add build-base autoconf automake libtool pkgconf git
RUN git clone -b ${XINETD_VERSION} https://github.com/openSUSE/xinetd.git
RUN cd xinetd && sh ./autogen.sh && ./configure && make

FROM alpine:latest

COPY --from=builder /xinetd/xinetd /usr/sbin
RUN mkdir -p /etc/xinetd.d/
COPY xinetd.conf /etc/xinetd.conf
COPY getflag /getflag

CMD ["xinetd", "-dontfork"]
