static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(
         // left hand
         EQL,    1,    2,    3,    4,    5,  ESC,
        SLSH,    Q,    W,    E,    R,    T, PGUP,
         TAB,    A,    S,    D,    F,    G,
        LSFT,    Z,    X,    C,    V,    B, PGDN,
           A,    B,    C,    D,    E,
                                               F, LGUI,
                                                  LALT,
                                        SPC, ENT, LCTL,

        // right hand
               GRV,    6,    7,    8,    9,    0, MINS,
              LBRC,    Y,    U,    I,    O,    P, RBRC,
                       H,    J,    K,    L, SCLN, QUOT,
               FN0,    N,    M, COMM,  DOT, SLSH, RSFT,
                          LEFT, DOWN,   UP, RGHT,  FN1,
        RGUI,    G,
        RALT,
        RCTL, BSPC, DEL
        ),

    KEYMAP( // layer 1
         // left hand
          NO,   F1,   F2,   F3,   F4,   F5,  F12,
        PSCR, MSTP, MPLY, MPRV, MNXT,   NO, HOME,
        CAPS,   NO,   NO,   NO,   NO,   NO,
          NO,   NO,   NO,   NO,   NO,   NO,  END,
          NO,   NO,   NO,   NO,   NO,
                                              NO,   NO,
                                                    NO,
                                        NO,   NO,   NO,

        // right hand
               F12,   F6,   F7,   F8,   F9,  F10,   NO,
                NO,   NO,   NO,   NO,   NO,   NO,   NO,
                      NO,   NO,   NO,   NO,   NO,   NO,
              TRNS,   NO,   NO,   NO,   NO,   NO,   NO,
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
                                        NO,   NO,   NO,

        // right hand
                NO,   NO, NLCK, PSLS, PAST, PMNS,   NO,
                NO,   NO,   P7,   P8,   P9, PPLS,   NO,
                      NO,   P4,   P5,   P6, PPLS,   NO,
                NO,   NO,   P1,   P2,   P3, PENT,   NO,
                            NO,   NO, PDOT, PENT, TRNS,
          NO,   P0,
          NO,
          NO,   NO,   NO
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

