FROM ghcr.io/gztimewalker/gzctf/xinetd:alpine AS builder

FROM python:alpine

COPY --from=builder /usr/sbin/xinetd /usr/sbin/xinetd
RUN mkdir -p /etc/xinetd.d/

CMD ["sleep", "infinity"]
