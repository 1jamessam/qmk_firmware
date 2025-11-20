#!/bin/bash

# env -u SDKROOT -u CPPFLAGS -u CFLAGS -u CXXFLAGS -u OBJCFLAGS -u OBJCXXFLAGS -u LDFLAGS \
#     qmk compile -kb lily58 -km james

CPPFLAGS="" CFLAGS="" CXXFLAGS="" OBJCFLAGS="" OBJCXXFLAGS="" LDFLAGS="" SDKROOT="" \
    qmk compile -kb lily58 -km james
