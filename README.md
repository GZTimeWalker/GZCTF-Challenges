<picture>
  <source media="(prefers-color-scheme: dark)" srcset="assets/banner.dark.svg">
  <img alt="Banner" src="assets/banner.light.svg">
</picture>

# GZ::CTF

[![publish](https://github.com/GZTimeWalker/GZCTF/actions/workflows/ci.yml/badge.svg)](https://github.com/GZTimeWalker/GZCTF/actions/workflows/ci.yml)
![version](https://img.shields.io/github/v/release/GZTimeWalker/GZCTF?include_prereleases&label=version)
![license](https://img.shields.io/github/license/GZTimeWalker/GZCTF?color=FF5531)
[![Telegram Group](https://img.shields.io/endpoint?color=blue&url=https%3A%2F%2Ftg.sumanjay.workers.dev%2Fgzctf)](https://telegram.dog/gzctf)

GZ::CTF is an open source CTF platform based on ASP.NET Core.

## About

This repository contains dynamic container challenge templates which can be used in GZ::CTF.

## Hint for creating challenges

- Please do not use `EXPOSE` to expose ports in the challenge Dockerfile, because GZ::CTF will automatically map the specified port to a random port on the host. If `EXPOSE` is used in the Dockerfile, it will cause the challenge to expose multiple ports and occupy port resources, and even expose safety risks.