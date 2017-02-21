static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(
         // left hand
         GRV,    1,    2,    3,    4,    5,  INS,
         TAB,    Q,    W,    E,    R,    T,  DEL,
         ESC,    A,    S,    D,    F,    G,
        MINS,    Z,    X,    C,    V,    B, LBRC,
         F14, RALT, LSFT, LALT, LCTL,
                                             F15,  FN1,
                                                    NO,
                                      LGUI,  SPC,  FN0,

        // right hand
              CAPS,    6,    7,    8,    9,    0,  F18,
              BSPC,    Y,    U,    I,    O,    P, BSLS,
                       H,    J,    K,    L, SCLN, QUOT,
              RBRC,    N,    M, COMM,  DOT, SLSH,  EQL,
                          RCTL, LALT, RGUI, RALT,  APP,
         FN1,  F21,
          NO,
         FN0,  ENT, RSFT
        ),

// NUMERIC INPUT //////////////////////////////////////////////////////////
    KEYMAP( // layer 2
         // left hand
          NO,   F1,   F2,   F3,   F4,   F5,  F11,
         TAB,   NO,   NO,  FN3,  FN4,   NO,  DEL,
         ESC, PSLS, PAST, PMNS, PPLS,   NO,
          NO,   NO,    A,    B,    C,   NO,   NO,
          NO,   NO,    D,    E,    F,
                                              NO,  FN2,
                                                   FN1,
                                        NO,  SPC,   NO,

        // right hand
               F12,   F6,   F7,   F8,   F9,  F10,   NO,
              BSPC,    7,    8,    9,   NO,   NO,   NO,
                       4,    5,    6,   NO,   NO,   NO,
                NO,    1,    2,    3,   NO,   UP,   NO,
                          COMM,  DOT, LEFT, DOWN, RGHT,
         FN2,   NO,
         FN1,
          NO,  ENT,    0
        ),

// GAME INPUT /////////////////////////////////////////////////////////////
    KEYMAP( // layer 3
         // left hand
         GRV,    1,    2,    3,    4,    5,    6,
         ESC,    Q,    W,    E,    R,    T,  DEL,
         TAB,    A,    S,    D,    F,    G,
        MINS,    Z,    X,    C,    V,    B, LBRC,
          F14, RALT, LGUI, LALT, LCTL,
                                             F15,   NO,
                                                   FN2,
                                      LSFT,  SPC,  FN0,

        // right hand
              CAPS,    6,    7,    8,    9,    0,  F18,
              BSPC,    Y,    U,    I,    O,    P, NUBS,
                       H,    J,    K,    L, SCLN, QUOT,
              RBRC,    N,    M, COMM,  DOT, SLSH,  EQL,
                          RCTL, LALT, RGUI, RALT,  APP,
          NO,  F21,
         FN2,
         FN0,  ENT, RSFT
        ),

// FUNCTION KEYS AND OTHER RARELY USED KEYS ///////////////////////////////
    KEYMAP( // layer 1
         // left hand
          NO,   F1,   F2,   F3,   F4,   F5,  F11,
          NO,   NO,   NO,   NO,   NO,   NO,   NO,
          NO,   NO,   NO,   NO,   NO,   NO,
          NO,   NO,   NO,   NO,   NO,   NO,   NO,
        PSCR, RALT, LSFT, LALT, LCTL,
                                              NO,   NO,
                                                    NO,
                                      LGUI,   NO,  FN0,

        // right hand
               F12,   F6,   F7,   F8,   F9,  F10,   NO,
                NO,   NO, MSTP, MPLY, MPRV, MNXT,   NO,
                      NO, LEFT, DOWN,   UP, RGHT,   NO,
                NO,   NO, HOME, PGDN, PGUP,  END,   NO,
                          RCTL, LALT, RGUI, RALT,   NO,
          NO,   NO,
          NO,
         FN0,   NO, RSFT
        )
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    ACTION_LAYER_MOMENTARY(3),
    ACTION_LAYER_INVERT(1, ON_PRESS),
    ACTION_LAYER_INVERT(2, ON_PRESS),
    ACTION_MODS_KEY(MOD_LSFT, KC_9),
    ACTION_MODS_KEY(MOD_LSFT, KC_0),
};

void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
}

