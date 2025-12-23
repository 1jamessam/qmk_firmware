#include QMK_KEYBOARD_H

enum layer_number {
  _COLEMAK = 0,
  _SYMB,
  _NAVI,
  _MS,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* COLEMAK
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      | BRID | BRIU |  C-^ |      |      |                    | MPRV | MPLY | MFFD | MUTE | VOLD | VOLU |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   F  |   P  |   B  |                    |   J  |   L  |   U  |   Y  |   ;  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | BSPC |   A  |   R  |   S  |   T  |   G  |-------.    ,-------|   M  |N/SYMB|   E  |   I  |   O  |  ' " |
 * |------+------+------+------+------+------|       |    |  SPOT |------+------+------+------+------+------|
 * | CAPS |   Z  |   X  |   C  |   D  |   V  |-------|    |-------|   K  |   H  |  , < |  . > |  / ? |  MS  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI | LCTL | /  SFT  /       \  ENT \  |ALT-NA|CMD-NA| RALT |
 *                   |      |      |  ESC |/   SPC /         \ NAV  \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
 [_COLEMAK] = LAYOUT(
  XXXXXXX, KC_BRID, KC_BRIU, C(KC_UP), XXXXXXX,       XXXXXXX,                                  KC_MPRV,            KC_MPLY,            KC_MFFD, KC_MUTE, KC_VOLD, KC_VOLU,
  KC_TAB,  KC_Q,       KC_W,     KC_F,    KC_P,          KC_B,                                  KC_J,               KC_L,               KC_U,    KC_Y,    KC_SCLN, XXXXXXX,
  KC_BSPC, KC_A,       KC_R,     KC_S,    KC_T,          KC_G,                                  KC_M,               LT(_SYMB,KC_N),     KC_E,    KC_I,    KC_O,    KC_QUOT,
  KC_CAPS, KC_Z,       KC_X,     KC_C,    KC_D,          KC_V,       XXXXXXX, G(KC_SPC),        KC_K,               KC_H,               KC_COMM, KC_DOT,  KC_SLSH, TG(_MS),
                              KC_LALT, KC_LGUI, CTL_T(KC_ESC), SFT_T(KC_SPC), LT(_NAVI,KC_ENT), LM(_NAVI,MOD_LALT), LM(_NAVI,MOD_LGUI), KC_RALT
 ),

/* SYMBOL
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |   ~  |   #  |   *  |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   ^  |   {  |   }  |   $  |      |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |   %  |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI | LCTL | /  SFT  /       \  ENT \  |ALT-NA|CMD-NA| RALT |
 *                   |      |      |  ESC |/   SPC /         \ NAV  \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
 [_SYMB] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, KC_TILD, KC_HASH, KC_ASTR, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, KC_CIRC, KC_LCBR, KC_RCBR,  KC_DLR, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PERC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
 ),

/* NAVI
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |   9  |   8  |   7  |      |                    |      | HOME |  UP  | END  |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |   3  |   2  |   1  |   0  |-------.    ,-------|      | LEFT | DOWN | RGHT |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |   6  |   5  |   4  |      |-------|    |-------|      | SG-[ | C-^  | SG-] |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI | LCTL | /  SFT  /       \  ENT \  |ALT-NA|CMD-NA| RALT |
 *                   |      |      |  ESC |/   SPC /         \ NAV  \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
 [_NAVI] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                   _______,    _______,      _______,  _______,      _______,    _______,
  _______, XXXXXXX,    KC_9,    KC_8,    KC_7, XXXXXXX,                   KC_PGUP,    KC_HOME,      KC_UP,    KC_END,       XXXXXXX,    XXXXXXX,
  _______, XXXXXXX,    KC_3,    KC_2,    KC_1,    KC_0,                   C(KC_LEFT), KC_LEFT,      KC_DOWN,  KC_RGHT,      C(KC_RGHT), XXXXXXX,
  _______, XXXXXXX,    KC_6,    KC_5,    KC_4, XXXXXXX, XXXXXXX, XXXXXXX, KC_PGDN,    LSG(KC_LBRC), C(KC_UP), LSG(KC_RBRC), XXXXXXX,    XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
 ),

/* MOUSE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      | WHLD |  UP  | WHLU |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------| WHLL | LEFT | DOWN | RGHT | WHLR |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      | MS_R |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI | LCTL | /  SFT  /       \ MS_L \  | MS_M |      |      |
 *                   |      |      |  ESC |/   SPC /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
 [_MS] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                   _______,    _______,      _______,  _______,      _______,    _______,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, MS_WHLD, MS_UP,   MS_WHLU, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   MS_WHLL, MS_LEFT, MS_DOWN, MS_RGHT, MS_WHLR, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MS_BTN3, XXXXXXX, XXXXXXX, XXXXXXX, TG(_MS),
                             _______, _______, _______, _______, MS_BTN1, MS_BTN2, _______, _______
 ),

/* THAI
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

//  [_THAI] = LAYOUT(
//   _______,  UC(L'ภ'), UC(L'ถ'),  UC(L'ุ'), UC(L'ึ'),  UC(L''),                     UC(L''),    UC(L''),    UC(L''),    UC(L''),    UC(L''),    UC(L''),
//   _______,  UC(L'ๆ'), UC(L'ไ'), UC(L'ำ'), UC(L'พ'),  UC(L'ะ'),                     UC(L''),    UC(L''),    UC(L''),    UC(L''),    UC(L''),    UC(L''),
//   _______,  UC(L'ฟ'), UC(L'ห'), UC(L'ก'), UC(L'ด'), UC(L'เ'),                     UC(L''),    UC(L''),    UC(L''),    UC(L''),    UC(L''), UC(L''),
//   _______,  UC(L'ผ'), UC(L'ป'), UC(L'แ'), UC(L'อ'), UC(L'ิ'), UC(L''), UC(L''),  UC(L''),    UC(L''),    UC(L''), UC(L''),  UC(L''),  UC(L''),
//                                  _______, _______, _______, _______, _______,  _______, _______, _______
// ),
};

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}

const uint16_t PROGMEM combo_exlm[] = {KC_W, KC_F, COMBO_END};      // !
const uint16_t PROGMEM combo_lbrack[] = {KC_F, KC_P, COMBO_END};    // [
const uint16_t PROGMEM combo_plus[] = {KC_P, KC_L, COMBO_END};      // +
const uint16_t PROGMEM combo_rbrack[] = {KC_L, KC_U, COMBO_END};    // ]
const uint16_t PROGMEM combo_equal[] = {KC_U, KC_Y, COMBO_END};     // =
const uint16_t PROGMEM combo_grv[] = {KC_R, KC_S, COMBO_END};       // `
const uint16_t PROGMEM combo_lparen[] = {KC_S, KC_T, COMBO_END};    // (
const uint16_t PROGMEM combo_unds[] = {KC_T, LT(_SYMB,KC_N), COMBO_END};    // _
const uint16_t PROGMEM combo_rparen[] = {LT(_SYMB,KC_N), KC_E, COMBO_END};  // )
const uint16_t PROGMEM combo_coln[] = {KC_E, KC_I, COMBO_END};      // :
const uint16_t PROGMEM combo_bsls[] = {KC_COMMA, KC_DOT, COMBO_END};// \.
const uint16_t PROGMEM combo_pipe[] = {KC_X, KC_C, COMBO_END};      // |
const uint16_t PROGMEM combo_at[] = {KC_C, KC_D, COMBO_END};        // @
const uint16_t PROGMEM combo_minus[] = {KC_D, KC_H, COMBO_END};     // -
const uint16_t PROGMEM combo_and[] = {KC_H, KC_COMM, COMBO_END};    // &

combo_t key_combos[] = {
    COMBO(combo_exlm, KC_EXLM),     // !
    COMBO(combo_lbrack, KC_LBRC),   // [
    COMBO(combo_plus, KC_PLUS),     // +
    COMBO(combo_rbrack, KC_RBRC),   // ]
    COMBO(combo_equal, KC_PEQL),    // =
    COMBO(combo_grv, KC_GRV),       // `
    COMBO(combo_lparen, KC_LPRN),   // (
    COMBO(combo_unds, KC_UNDS),     // _
    COMBO(combo_rparen, KC_RPRN),   // )
    COMBO(combo_coln, KC_COLN),     // :
    COMBO(combo_bsls, KC_BSLS),     // \.
    COMBO(combo_pipe, KC_PIPE),     // |
    COMBO(combo_at, KC_AT),         // @
    COMBO(combo_minus, KC_MINS),    // -
    COMBO(combo_and, KC_AMPR),      // &

};
uint16_t COMBO_LEN = ARRAY_SIZE(key_combos);

// https://github.com/cyb3rkun/corneGLP
