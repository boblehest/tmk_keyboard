static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(
         // left hand
          NO,    1,    2,    3,    4,    5,   NO,
        LBRC,    Q,    W,    E,    R,    T,  DEL,
         TAB,    A,    S,    D,    F,    G,
         ESC,    Z,    X,    C,    V,    B, LGUI,
         EQL,   NO,   NO, LALT, LCTL,
                                              NO,   NO,
                                                   FN1,
                                      LSFT,  SPC,  FN0,

        // right hand
                NO,    6,    7,    8,    9,    0,   NO,
              BSPC,    Y,    U,    I,    O,    P, RBRC,
                       H,    J,    K,    L, SCLN, QUOT,
              RGUI,    N,    M, COMM,  DOT, SLSH, BSLS,
                          RCTL, RALT,   NO,  GRV, MINS,
          NO,   NO,
          NO,
          NO,  ENT, RSFT
        ),

    KEYMAP( // layer 1
         // left hand
          NO,   F1,   F2,   F3,   F4,   F5,  F12,
          NO,   NO,   NO,   NO,   NO,   NO,   NO,
          NO,   NO,   NO,   NO,   NO,   NO,
        CAPS, HOME, PGDN, PGUP,  END,   NO,   NO,
          NO,   NO,   NO, LALT, LCTL,
                                              NO,   NO,
                                                    NO,
                                      LSFT,   NO,  FN0,

        // right hand
               F12,   F6,   F7,   F8,   F9,  F10,   NO,
                NO, MSTP, MPLY, MPRV, MNXT,   NO,   NO,
                      NO,   NO,   NO,   NO,   NO,   NO,
                NO,   NO, LEFT, DOWN,   UP, RGHT,   NO,
                          RCTL, RALT,   NO,   NO,   NO,
          NO,   NO,
          NO,
          NO,   NO, RSFT
        ),

    KEYMAP( // layer 2
         // left hand
          NO,   NO,   NO,   NO,   NO,   NO,   NO,
          NO,   NO,   NO,   NO,   NO,   NO,  DEL,
         TAB,   NO,   NO,   NO,   NO,   NO,
         ESC,   NO,   NO,   NO,   NO,   NO,   NO,
          NO,   NO,   NO,   NO,   NO,
                                              NO,   NO,
                                                   FN1,
                                        NO,  SPC,   NO,

        // right hand
                NO,   NO,   NO,   NO,   NO,   NO,   NO,
              BSPC,    7,    8,    9,   NO,   NO,   NO,
                       4,    5,    6,   NO,   NO,   NO,
                NO,    1,    2,    3,   NO,   NO,   NO,
                          COMM,  DOT,   NO,   NO,   NO,
          NO,   NO,
          NO,
          NO,  ENT,    0
        )
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    ACTION_LAYER_TOGGLE(1),
    ACTION_LAYER_TOGGLE(2),
};

void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
}

