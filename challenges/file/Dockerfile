FROM ghcr.io/gztimewalker/gzctf/xinetd:alpine

COPY init.sh getflag /
RUN chmod +x /getflag && chmod +x /init.sh
COPY xinetd.conf /etc/xinetd.conf

CMD ["xinetd", "-dontfork"]
