#!/bin/bash

# shellcheck disable=SC2034
CPPFLAGS="" CFLAGS="" CXXFLAGS="" OBJCFLAGS="" OBJCXXFLAGS="" LDFLAGS="" SDKROOT=""

qmk compile -kb lily58 -km james

qmk c2json keyboards/lily58/keymaps/james/keymap.c | keymap parse -l Colemak Symbol Navi-Number Mouse -q - >james_keymap.yaml
cat <<'EOF' >>james_keymap.yaml
combos:
  - {p: [14, 15], k: '!', l: ['Colemak']}
  - {p: [15, 16], k: '[', l: ['Colemak']}
  - {p: [19, 20], k: ']', l: ['Colemak']}
  - {p: [20, 21], k: '=', l: ['Colemak']}
  - {p: [26, 27], k: '`', l: ['Colemak']}
  - {p: [27, 28], k: '(', l: ['Colemak']}
  - {p: [31, 32], k: ')', l: ['Colemak']}
  - {p: [32, 33], k: ':', l: ['Colemak']}
  - {p: [38, 39], k: '|', l: ['Colemak']}
  - {p: [39, 40], k: '@', l: ['Colemak']}
  - {p: [45, 46], k: '&', l: ['Colemak']}
  - {p: [46, 47], k: '\', l: ['Colemak']}

  - {p: [16, 19], k: '+', l: ['Colemak']}
  - {p: [28, 31], k: '_', l: ['Colemak']}
  - {p: [40, 45], k: '-', l: ['Colemak']}

EOF
keymap draw -k lily58/rev1 james_keymap.yaml >james_keymap.ortho.svg

# env -u SDKROOT -u CPPFLAGS -u CFLAGS -u CXXFLAGS -u OBJCFLAGS -u OBJCXXFLAGS -u LDFLAGS \
#     qmk compile -kb lily58 -km james
