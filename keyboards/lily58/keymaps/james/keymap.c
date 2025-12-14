#include QMK_KEYBOARD_H

enum layer_number {
  _COLEMAK = 0,
  _SYMB,
  _NAVI,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* COLEMAK
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      | BRID | BRIU |      |      |      |                    | MPRV | MPLY | MFFD | MUTE | VOLD | VOLU |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   F  |   P  |   B  |                    |   J  |   L  |   U  |   Y  |   ;  |   \  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | BSPC |   A  |   R  |   S  |   T  |   G  |-------.    ,-------|   M  |N/SYMB|   E  |   I  |   O  |  ' " |
 * |------+------+------+------+------+------|       |    |  SPOT |------+------+------+------+------+------|
 * | CAPS |   Z  |   X  |   C  |   D  |   V  |-------|    |-------|   K  |   H  |  , < |  . > |  / ? | PGDN |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI | LCTL | /  SFT  /       \  ENT \ |ALT-NA|CMD-NA| RALT |
 *                   |      |      |  ESC |/   SPC /         \ NAV  \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
 [_COLEMAK] = LAYOUT(
  XXXXXXX, KC_BRID, KC_BRIU, XXXXXXX, XXXXXXX,       XXXXXXX,                                  KC_MPRV,            KC_MPLY,            KC_MFFD, KC_MUTE, KC_VOLD, KC_VOLU,
  KC_TAB,  KC_Q,       KC_W,    KC_F,    KC_P,          KC_B,                                  KC_J,               KC_L,               KC_U,    KC_Y,    KC_SCLN, KC_BSLS,
  KC_BSPC, KC_A,       KC_R,    KC_S,    KC_T,          KC_G,                                  KC_M,               LT(_SYMB,KC_N),     KC_E,    KC_I,    KC_O,    KC_QUOT,
  KC_CAPS, KC_Z,       KC_X,    KC_C,    KC_D,          KC_V,       XXXXXXX, G(KC_SPC),        KC_K,               KC_H,               KC_COMM, KC_DOT,  KC_SLSH, KC_PGDN,
                             KC_LALT, KC_LGUI, CTL_T(KC_ESC), SFT_T(KC_SPC), LT(_NAVI,KC_ENT), LM(_NAVI,MOD_LALT), LM(_NAVI,MOD_LGUI), KC_RALT
 ),

/* SYMBOL
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |   #  |   @  |   &  |   |  |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   !  |      |      |   =  |   `  |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   ^  |      |      |   $  |   *  |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|   ~   |    |       |------+------+------+------+------|------|
 * |      |      |      |      |   :  |   %  |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI | LCTL | /SFT/SPC/       \ENT/NAV\ | RCTL | RGUI | RALT |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
 [_SYMB] = LAYOUT(
  XXXXXXX, XXXXXXX, KC_HASH,   KC_AT, KC_AMPR, KC_PIPE,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, KC_EXLM, XXXXXXX, XXXXXXX, KC_PEQL,  KC_GRV,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, KC_CIRC, XXXXXXX, XXXXXXX,  KC_DLR, KC_ASTR,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_COLN, KC_PERC, KC_TILD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
 ),

/* NAVI
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      | C-^  |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |   7  |   8  |   9  |      |                    | PGUP | HOME |  UP  | END  |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   0  |   4  |   5  |   6  |      |-------.    ,-------|  C<- | LEFT | DOWN | RGHT |  C-> |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------|------|
 * |      |      |   1  |   2  |   3  |      |-------|    |-------| PGDN | SG-[ |      | SG-] |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI | LCTL | /SFT/SPC/       \ENT/NAV\ | RCTL | RGUI | RALT |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
 [_NAVI] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX,    XXXXXXX,      C(KC_UP), XXXXXXX,      XXXXXXX,    XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_PGUP,    KC_HOME,      KC_UP,    KC_END,       XXXXXXX,    XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   C(KC_LEFT), KC_LEFT,      KC_DOWN,  KC_RGHT,      C(KC_RGHT), XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PGDN,    LSG(KC_LBRC), XXXXXXX,  LSG(KC_RBRC), XXXXXXX,    XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
 )

/* MOUSE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |  UP  |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      | LEFT | DOWN | RGHT |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------|------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |      |      |/  MS_1  /       \ MS_2 \ |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
 [_MOUSE] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, MS_UP,   XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, MS_LEFT, MS_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, MS_BTN1, MS_BTN2,  _______, _______, _______
 )






/* THAI
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
#* |------+------+------+------+------+------|                    |------+------+------+------+------+------|
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
//   _______,  UC(L'ภ'), UC(L'ถ'), UC(L'ุ'), UC(L'ึ'),UC(L''),                     UC(L''),    UC(L''),    UC(L''),    UC(L''),    UC(L''),    UC(L''),
//   _______,  UC(L'ๆ'), UC(L'ไ'), UC(L'ำ'), UC(L'พ'),    UC(L'ะ'),                     UC(L''),    UC(L''),    UC(L''),    UC(L''),    UC(L''),    UC(L''),
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

const uint16_t PROGMEM combo_lparen[] = {KC_S, KC_T, COMBO_END};   // (
const uint16_t PROGMEM combo_rparen[] = {LT(_SYMB,KC_N), KC_E, COMBO_END};  // )
const uint16_t PROGMEM combo_lbrack[] = {KC_F, KC_P, COMBO_END};    // [
const uint16_t PROGMEM combo_rbrack[] = {KC_L, KC_U, COMBO_END};    // ]
const uint16_t PROGMEM combo_lcrlbr[] = {KC_C, KC_D, COMBO_END};    // {
const uint16_t PROGMEM combo_rcrlbr[] = {KC_H, KC_COMM, COMBO_END}; // }
const uint16_t PROGMEM combo_plus[] = {KC_P, KC_L, COMBO_END};      // +
const uint16_t PROGMEM combo_equal[] = {KC_T, LT(_SYMB,KC_N), COMBO_END};  // =
const uint16_t PROGMEM combo_minus[] = {KC_D, KC_H, COMBO_END};     // -
const uint16_t PROGMEM combo_unds[] = {KC_G, KC_M, COMBO_END};      // _
const uint16_t PROGMEM combo_lt[] = {KC_W, KC_F, COMBO_END};        // <
const uint16_t PROGMEM combo_gt[] = {KC_U, KC_Y, COMBO_END};        // >
const uint16_t PROGMEM combo_astr[] = {KC_F, KC_U, COMBO_END};      // *

combo_t key_combos[] = {
    COMBO(combo_lparen, KC_LPRN),
    COMBO(combo_rparen, KC_RPRN),
    COMBO(combo_lbrack, KC_LBRC),
    COMBO(combo_rbrack, KC_RBRC),
    COMBO(combo_lcrlbr, KC_LCBR),
    COMBO(combo_rcrlbr, KC_RCBR),
    COMBO(combo_plus, KC_PLUS),
    COMBO(combo_equal, KC_PEQL),
    COMBO(combo_minus, KC_MINS),
    COMBO(combo_unds, KC_UNDS),
    COMBO(combo_lt, KC_LT),
    COMBO(combo_gt, KC_GT),
    COMBO(combo_astr, KC_ASTR),

};
uint16_t COMBO_LEN = ARRAY_SIZE(key_combos);

// https://github.com/cyb3rkun/corneGLP
