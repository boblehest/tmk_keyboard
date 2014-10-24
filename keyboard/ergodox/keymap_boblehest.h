static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(
         // left hand
         GRV,    1,    2,    3,    4,    5, PSCR,
        MINS,    Q,    W,    E,    R,    T,  DEL,
         ESC,    A,    S,    D,    F,    G,
         TAB,    Z,    X,    C,    V,    B, LBRC,
          NO, LGUI, RALT, LALT, LCTL,
                                              NO,   NO,
                                                   FN1,
                                      LSFT,  SPC,  FN0,

        // right hand
                NO,    6,    7,    8,    9,    0,   NO,
              BSPC,    Y,    U,    I,    O,    P,  EQL,
                       H,    J,    K,    L, SCLN, QUOT,
              RBRC,    N,    M, COMM,  DOT, SLSH, BSLS,
                          RCTL, LALT, RALT, RGUI,   NO,
          NO,   NO,
         FN1,
         FN0,  ENT, RSFT
        ),

    KEYMAP( // layer 1
         // left hand
          NO,   F1,   F2,   F3,   F4,   F5,  F11,
          NO,   NO,   NO,   NO,   NO,   NO,   NO,
        CAPS,   NO,   NO,   NO,   NO,   NO,
          NO, HOME, PGDN, PGUP,  END,   NO,   NO,
          NO, LGUI, RALT, LALT, LCTL,
                                              NO,   NO,
                                                    NO,
                                      LSFT,   NO,  FN0,

        // right hand
               F12,   F6,   F7,   F8,   F9,  F10,   NO,
                NO,   NO, MSTP, MPLY, MPRV, MNXT,   NO,
                      NO,   NO,   NO,   NO,   NO,   NO,
                NO,   NO, LEFT, DOWN,   UP, RGHT,   NO,
                          RCTL, LALT, RALT, RGUI,   NO,
          NO,   NO,
          NO,
         FN0,   NO, RSFT
        ),

    KEYMAP( // layer 2
         // left hand
          NO,   NO,   NO,   NO,   NO,   NO,   NO,
          NO,   NO,   NO,  FN2,  FN3,   NO,  DEL,
         ESC, PSLS, PAST, PMNS, PPLS,   NO,
         TAB,   NO,    A,    B,    C,   NO,   NO,
          NO,   NO,    D,    E,    F,
                                              NO,   NO,
                                                   FN1,
                                        NO,  SPC,   NO,

        // right hand
                NO,   NO,   NO,   NO,   NO,   NO,   NO,
              BSPC,    7,    8,    9,   NO,   NO,   NO,
                       4,    5,    6,   NO,   NO,   NO,
                NO,    1,    2,    3,   NO,   UP,   NO,
                          COMM,  DOT, LEFT, DOWN, RGHT,
          NO,   NO,
         FN1,
          NO,  ENT,    0
        )
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    ACTION_LAYER_MOMENTARY(1),
    ACTION_LAYER_TOGGLE(2),
    ACTION_MODS_KEY(MOD_LSFT, KC_9),
    ACTION_MODS_KEY(MOD_LSFT, KC_0),
};

void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
}

