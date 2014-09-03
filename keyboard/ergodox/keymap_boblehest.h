static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(
         // left hand
         EQL,    1,    2,    3,    4,    5,   NO,
        BSLS,    Q,    W,    E,    R,    T,  ESC,
         TAB,    A,    S,    D,    F,    G,
        LSFT,    Z,    X,    C,    V,    B, LGUI,
         ESC,   NO,   NO, LALT, LCTL,
                                             ESC,  FN0,
                                                  PGUP,
                                      BSPC,  DEL, PGDN,

        // right hand
               GRV,    6,    7,    8,    9,    0, MINS,
              LBRC,    Y,    U,    I,    O,    P, RBRC,
                       H,    J,    K,    L, SCLN, QUOT,
              RGUI,    N,    M, COMM,  DOT, SLSH, RSFT,
                          RCTL, RALT,   NO,   NO,  FN1,
        LEFT, RGHT,
          UP,
        DOWN,  ENT,  SPC
        ),

    KEYMAP( // layer 1
         // left hand
          NO,   F1,   F2,   F3,   F4,   F5,  F12,
        PSCR,   NO,   NO,   NO,   NO,   NO, HOME,
        CAPS,   NO,   NO,   NO,   NO,   NO,
          NO,   NO,   NO,   NO,   NO,   NO,  END,
          NO,   NO,   NO,   NO,   NO,
                                              NO, TRNS,
                                                    NO,
                                        NO,   NO,   NO,

        // right hand
               F12,   F6,   F7,   F8,   F9,  F10,   NO,
                NO, MSTP, MPLY, MPRV, MNXT,   NO,   NO,
                      NO,   NO,   NO,   NO,   NO,   NO,
                NO,   NO,   NO,   NO,   NO,   NO,   NO,
                            NO,   NO,   NO,   NO,   NO,
          NO,   NO,
          NO,
          NO,   NO,   NO
        ),

    KEYMAP( // layer 2
         // left hand
          NO,   NO,   NO,   NO,   NO,   NO,   NO,
          NO,   NO,   NO,   NO,   NO,   NO,   NO,
          NO,   NO,   NO,   NO,   NO,   NO,
          NO,   NO,   NO,   NO,   NO,   NO,   NO,
          NO,   NO,   NO,   NO,   NO,
                                              NO,   NO,
                                                    NO,
                                      TRNS, TRNS,   NO,

        // right hand
                NO,   NO,   NO,   NO,   NO,   NO,   NO,
                NO,    7,    8,    9,   NO,   NO,   NO,
                       4,    5,    6,   NO,   NO,   NO,
                NO,    1,    2,    3,   NO,   NO,   NO,
                          COMM,  DOT,   NO,   NO, TRNS,
          NO,   NO,
          NO,
          NO,  ENT,    0
        )
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    ACTION_LAYER_MOMENTARY(1),
    ACTION_LAYER_TOGGLE(2),
};

void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
}

