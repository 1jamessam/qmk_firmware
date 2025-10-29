#include QMK_KEYBOARD_H

enum layer_number {
  _COLEMAK = 0,
  _SYMB,
  _NUM,
  _NAVI,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* COLEMAK
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  | SG<- | SG-> |  C-^ |  C<- |  C-> |                    | MPRV | MPLY | MFFD | MUTE | VOLD | VOLU |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   F  |   P  |   B  |                    |   J  |   L  |   U  |   Y  |   ;  | PGUP |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | BSPC |   A  |   R  |   S  |   T  |   G  |-------.    ,-------|   M  |N/SYMB| E/NUM|   I  |   O  |  ' " |
 * |------+------+------+------+------+------|  - _  |    |  DEL  |------+------+------+------+------+------|
 * | CAPS |   Z  |   X  |   C  |   D  |   V  |-------|    |-------|   K  |   H  |  , < |  . > |  / ? | PGDN |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI | LCTL | /SFT/SPC/       \ENT/NAV\ | GU-SH| GU-CT| RALT |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
 [_COLEMAK] = LAYOUT(
  KC_ESC, LSG(KC_LBRC), LSG(KC_RBRC), LCTL(KC_UP), LCTL(KC_LEFT),  LCTL(KC_RGHT),                                   KC_MPRV,       KC_MPLY,        KC_MFFD,       KC_MUTE, KC_VOLD, KC_VOLU,
  KC_TAB,         KC_Q,         KC_W,        KC_F,          KC_P,           KC_B,                                   KC_J,          KC_L,           KC_U,          KC_Y,    KC_SCLN, KC_PGUP,
  KC_BSPC,        KC_A,         KC_R,        KC_S,          KC_T,           KC_G,                                   KC_M,          LT(_SYMB,KC_N), LT(_NUM,KC_E), KC_I,    KC_O,    KC_QUOT,
  KC_CAPS,        KC_Z,         KC_X,        KC_C,          KC_D,           KC_V,        KC_MINS, KC_DEL,           KC_K,          KC_H,           KC_COMM,       KC_DOT,  KC_SLSH, KC_PGDN,
                                          KC_LALT,       KC_LCTL,        KC_LGUI, LSFT_T(KC_SPC), LT(_NAVI,KC_ENT), LGUI(KC_LSFT), LGUI(KC_LCTL),  KC_RALT
 ),

/* SYMBOL
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |   #  |   @  |   &  |   |  |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   !  |   [  |   ]  |   =  |   `  |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   ^  |   (  |   )  |   $  |   *  |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|   :   |    |       |------+------+------+------+------|------|
 * |      |      |   {  |   }  |   ~  |   %  |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI | LCTL | /SFT/SPC/       \ENT/NAV\ | RCTL | RGUI | RALT |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
 [_SYMB] = LAYOUT(
  XXXXXXX, XXXXXXX, KC_HASH,   KC_AT, KC_AMPR, KC_PIPE,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, KC_EXLM, KC_LBRC, KC_RBRC, KC_PEQL,  KC_GRV,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, KC_CIRC, KC_LPRN, KC_RPRN,  KC_DLR, KC_ASTR,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR, KC_COLN, KC_PERC, KC_COLN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
 ),

/* NUM
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   /  |   9  |   8  |   7  |   *  |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   -  |   3  |   2  |   1  |   +  |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|   0   |    |       |------+------+------+------+------|------|
 * |      |   =  |   6  |   5  |   4  |   .  |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI | LCTL | /SFT/SPC/       \ENT/NAV\ | RCTL | RGUI | RALT |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
 [_NUM] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, KC_PSLS,    KC_9,    KC_8,    KC_7, KC_ASTR,                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, KC_MINS,    KC_3,    KC_2,    KC_1, KC_PLUS,                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, KC_PEQL,    KC_6,    KC_5,    KC_4,  KC_DOT, KC_0, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
 ),

/* NAVI
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      | C-^  |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    | PGUP | HOME |  UP  | END  |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|  C<- | LEFT | DOWN | RGHT |  C-> |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------|------|
 * |      |      |      |      |      |      |-------|    |-------| PGDN | SG-[ |      | SG-] |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI | LCTL | /SFT/SPC/       \ENT/NAV\ | RCTL | RGUI | RALT |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
 [_NAVI] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX,       XXXXXXX,      LCTL(KC_UP), XXXXXXX,      XXXXXXX,       XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_PGUP,       KC_HOME,      KC_UP,       KC_END,       XXXXXXX,       XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   LCTL(KC_LEFT), KC_LEFT,      KC_DOWN,     KC_RGHT,      LCTL(KC_RGHT), XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PGDN,       LSG(KC_LBRC), XXXXXXX,     LSG(KC_RBRC), XXXXXXX,       XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
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
