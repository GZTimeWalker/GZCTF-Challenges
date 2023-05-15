FROM ghcr.io/gztimewalker/gzctf/xinetd:alpine

COPY --chmod=755 getflag /getflag
COPY xinetd.conf /etc/xinetd.conf

CMD ["xinetd", "-dontfork"]
