FROM ghcr.io/gztimewalker/gzctf/xinetd:alpine

COPY getflag /getflag
RUN chmod +x /getflag
COPY xinetd.conf /etc/xinetd.conf

CMD ["xinetd", "-dontfork"]
