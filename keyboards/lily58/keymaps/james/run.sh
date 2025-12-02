#!/bin/bash

CPPFLAGS="" CFLAGS="" CXXFLAGS="" OBJCFLAGS="" OBJCXXFLAGS="" LDFLAGS="" SDKROOT="" \
    qmk compile -kb lily58 -km james

CPPFLAGS="" CFLAGS="" CXXFLAGS="" OBJCFLAGS="" OBJCXXFLAGS="" LDFLAGS="" SDKROOT="" \
    qmk c2json keyboards/lily58/keymaps/james/keymap.c |
    keymap parse -l Colemak Symbol Number Navigation -q - > james_keymap.yaml
cat <<'EOF' >> james_keymap.yaml
combos:
  - {p: [14, 15], k: '<', l: ['Colemak']}
  - {p: [15, 16], k: '[', l: ['Colemak']}
  - {p: [15, 20], k: '*', l: ['Colemak'], a: top, offset: 0.1}
  - {p: [16, 19], k: '+', l: ['Colemak']}
  - {p: [19, 20], k: ']', l: ['Colemak']}
  - {p: [20, 21], k: '>', l: ['Colemak']}
  - {p: [27, 28], k: '(', l: ['Colemak']}
  - {p: [29, 30], k: '_', l: ['Colemak'], a: bottom}
  - {p: [28, 31], k: '=', l: ['Colemak']}
  - {p: [31, 32], k: ')', l: ['Colemak']}
  - {p: [39, 40], k: '{', l: ['Colemak']}
  - {p: [40, 45], k: '-', l: ['Colemak'], a: bottom}
  - {p: [45, 46], k: '}', l: ['Colemak']}
EOF
keymap draw -k lily58/rev1 james_keymap.yaml > james_keymap.ortho.svg

# env -u SDKROOT -u CPPFLAGS -u CFLAGS -u CXXFLAGS -u OBJCFLAGS -u OBJCXXFLAGS -u LDFLAGS \
#     qmk compile -kb lily58 -km james
