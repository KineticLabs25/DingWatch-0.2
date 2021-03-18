const unsigned char iAL1 [] PROGMEM = {
  // 'AL1', 34x10px
  0x7f, 0xf9, 0xe0, 0x3f, 0x80, 0xff, 0xfd, 0xe0, 0x3f, 0xc0, 0xf0, 0x3d, 0xe0, 0x03, 0xc0, 0xf0,
  0x3d, 0xe0, 0x03, 0xc0, 0xff, 0xfd, 0xe0, 0x03, 0xc0, 0xff, 0xfd, 0xe0, 0x03, 0xc0, 0xf0, 0x3d,
  0xe0, 0x03, 0xc0, 0xf0, 0x3d, 0xe0, 0x03, 0xc0, 0xf0, 0x3d, 0xff, 0x83, 0xc0, 0xf0, 0x3c, 0xff,
  0x83, 0xc0
};
const unsigned char iAL2 [] PROGMEM = {
  // 'AL2', 40x10px
  0x7f, 0xf9, 0xe0, 0x3f, 0xfe, 0xff, 0xfd, 0xe0, 0x3f, 0xff, 0xf0, 0x3d, 0xe0, 0x00, 0x0f, 0xf0, 
  0x3d, 0xe0, 0x00, 0x0f, 0xff, 0xfd, 0xe0, 0x1f, 0xff, 0xff, 0xfd, 0xe0, 0x3f, 0xff, 0xf0, 0x3d, 
  0xe0, 0x3c, 0x00, 0xf0, 0x3d, 0xe0, 0x3c, 0x00, 0xf0, 0x3d, 0xff, 0xbf, 0xff, 0xf0, 0x3c, 0xff, 
  0xbf, 0xff
};


// 'iAM', 15x42px
const unsigned char iAM [] PROGMEM = {
  0x1f, 0xf0, 0x3f, 0xf8, 0x7f, 0xfc, 0x7f, 0xfc, 0xfc, 0x7e, 0xf8, 0x3e, 0xf0, 0x1e, 0xf0, 0x1e, 
  0xf0, 0x1e, 0xff, 0xfe, 0xff, 0xfe, 0xff, 0xfe, 0xf0, 0x1e, 0xf0, 0x1e, 0xf0, 0x1e, 0xf0, 0x1e, 
  0xf0, 0x1e, 0xf0, 0x1e, 0xf0, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x1e, 
  0xf8, 0x3e, 0xf8, 0x3e, 0xf8, 0x3e, 0xfc, 0x7e, 0xfc, 0x7e, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
  0xf7, 0xde, 0xf3, 0x9e, 0xf3, 0x9e, 0xf3, 0x9e, 0xf1, 0x1e, 0xf0, 0x1e, 0xf0, 0x1e, 0xf0, 0x1e, 
  0xf0, 0x1e, 0xf0, 0x1e
};
// 'iPM', 15x42px
const unsigned char iPM [] PROGMEM = {
  0x7f, 0xfc, 0xff, 0xfe, 0xff, 0xfe, 0xff, 0xfe, 0xf0, 0x1e, 0xf0, 0x1e, 0xf0, 0x1e, 0xf0, 0x1e, 
  0xff, 0xfe, 0xff, 0xfe, 0xff, 0xfe, 0xff, 0xfc, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 
  0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x1e, 
  0xf8, 0x3e, 0xf8, 0x3e, 0xf8, 0x3e, 0xfc, 0x7e, 0xfc, 0x7e, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
  0xf7, 0xde, 0xf3, 0x9e, 0xf3, 0x9e, 0xf3, 0x9e, 0xf1, 0x1e, 0xf0, 0x1e, 0xf0, 0x1e, 0xf0, 0x1e, 
  0xf0, 0x1e, 0xf0, 0x1e
};


// 'SU', 20x7px
const unsigned char iSU [] PROGMEM = {
  0x1f, 0xff, 0xf0, 0x7f, 0xff, 0xe0, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xe0, 0x7f, 
  0xff, 0xe0, 0x1f, 0xff, 0xf0
};
// 'MO', 21x7px
const unsigned char iMO [] PROGMEM = {
  0x3f, 0xff, 0xf8, 0x7f, 0xff, 0xf0, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xf0, 0x7f, 
  0xff, 0xf0, 0x3f, 0xff, 0xf8
};
// 'TU', 22x7px
const unsigned char iTU [] PROGMEM = {
  0x3f, 0xff, 0xfc, 0x7f, 0xff, 0xf8, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xf8, 0x7f, 
  0xff, 0xf8, 0x3f, 0xff, 0xfc
};
// 'WE', 24x7px
const unsigned char iWE [] PROGMEM = {
  0x3f, 0xff, 0xfc, 0x7f, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 
  0xff, 0xfe, 0x3f, 0xff, 0xfc
};
// 'TH', 22x7px
const unsigned char iTH [] PROGMEM = {
  0xff, 0xff, 0xf0, 0x7f, 0xff, 0xf8, 0x7f, 0xff, 0xfc, 0x7f, 0xff, 0xfc, 0x7f, 0xff, 0xfc, 0x7f, 
  0xff, 0xf8, 0xff, 0xff, 0xf0
};
// 'FR', 21x7px
const unsigned char iFR [] PROGMEM = {
  0xff, 0xff, 0xe0, 0x7f, 0xff, 0xf0, 0x7f, 0xff, 0xf8, 0x7f, 0xff, 0xf8, 0x7f, 0xff, 0xf8, 0x7f, 
  0xff, 0xf0, 0xff, 0xff, 0xe0
};
// 'SA', 20x7px
const unsigned char iSA [] PROGMEM = {
  0xff, 0xff, 0x80, 0x7f, 0xff, 0xe0, 0x7f, 0xff, 0xf0, 0x7f, 0xff, 0xf0, 0x7f, 0xff, 0xf0, 0x7f, 
  0xff, 0xe0, 0xff, 0xff, 0x80
};


// '5s', 19x12px
const unsigned char i5s [] PROGMEM = {
  0x7f, 0xff, 0xe0, 0xff, 0xff, 0x80, 0xff, 0xff, 0x00, 0xff, 0xfc, 0x00, 0xff, 0xf8, 0x00, 0xff, 
  0xe0, 0x00, 0xff, 0xc0, 0x00, 0xff, 0x00, 0x00, 0xfe, 0x00, 0x00, 0xf8, 0x00, 0x00, 0xf0, 0x00, 
  0x00, 0xc0, 0x00, 0x00
};
// '10s', 36x15px
const unsigned char i10s [] PROGMEM = {
  0x00, 0x00, 0x0f, 0xff, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xc0, 0x00, 0x00, 0x7f, 0xff, 0xe0, 0x00, 
  0x00, 0xff, 0xff, 0xe0, 0x00, 0x03, 0xff, 0xff, 0xf0, 0x00, 0x07, 0xff, 0xff, 0xf0, 0x00, 0x1f, 
  0xff, 0xff, 0xe0, 0x00, 0x3f, 0xff, 0xfe, 0x00, 0x00, 0xff, 0xff, 0xe0, 0x00, 0x01, 0xff, 0xfe, 
  0x00, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x00, 0x0f, 0xff, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 
  0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x00
};
// '15s', 28x8px
const unsigned char i15s [] PROGMEM = {
  0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x01, 0xff, 0xf0, 
  0x00, 0x1f, 0xff, 0xf0, 0x00, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xe0
};
// '20s', 28x8px
const unsigned char i20s [] PROGMEM = {
  0xff, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xff, 0xf0, 0x00, 0xff, 0xff, 0xf0, 0x00, 0x1f, 0xff, 0xf0, 
  0x00, 0x01, 0xff, 0xf0, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x10
};
// '25s', 36x15px
const unsigned char i25s [] PROGMEM = {
  0xfe, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x0f, 
  0xff, 0x00, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x00, 0x01, 0xff, 0xfe, 0x00, 0x00, 0x00, 0xff, 
  0xff, 0xe0, 0x00, 0x00, 0x3f, 0xff, 0xfe, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xe0, 0x00, 0x07, 0xff, 
  0xff, 0xf0, 0x00, 0x03, 0xff, 0xff, 0xf0, 0x00, 0x00, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x7f, 0xff, 
  0xe0, 0x00, 0x00, 0x1f, 0xff, 0xc0, 0x00, 0x00, 0x0f, 0xff, 0x00
};
// '30s', 19x12px
const unsigned char i30s [] PROGMEM = {
  0xc0, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xf8, 0x00, 0x00, 0xfe, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0xc0, 0x00, 0xff, 0xe0, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xfc, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 
  0x80, 0x7f, 0xff, 0xe0
};
// '35s', 19x12px
const unsigned char i35s [] PROGMEM = {
  0x00, 0x00, 0x60, 0x00, 0x01, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x1f, 0xe0, 0x00, 
  0x7f, 0xe0, 0x00, 0xff, 0xe0, 0x03, 0xff, 0xe0, 0x07, 0xff, 0xe0, 0x1f, 0xff, 0xe0, 0x3f, 0xff, 
  0xe0, 0xff, 0xff, 0xc0
};
// '40s', 36x15px
const unsigned char i40s [] PROGMEM = {
  0x00, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0xff, 0xc0, 0x00, 
  0x00, 0x0f, 0xff, 0x00, 0x00, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x07, 0xff, 0xf8, 0x00, 0x00, 0x7f, 
  0xff, 0xf0, 0x00, 0x07, 0xff, 0xff, 0xc0, 0x00, 0x7f, 0xff, 0xff, 0x80, 0x00, 0xff, 0xff, 0xfe, 
  0x00, 0x00, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x7f, 0xff, 0xf0, 0x00, 0x00, 0x7f, 0xff, 0xe0, 0x00, 
  0x00, 0x3f, 0xff, 0x80, 0x00, 0x00, 0x0f, 0xff, 0x00, 0x00, 0x00
};
// '45s', 28x8px
const unsigned char i45s [] PROGMEM = {
  0x7f, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xf0, 0x00, 0xff, 0xff, 0x80, 0x00, 
  0xff, 0xf8, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00
};
// '50s', 28x8px
const unsigned char i50s [] PROGMEM = {
  0x80, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0xff, 0xf8, 0x00, 0x00, 
  0xff, 0xff, 0x80, 0x00, 0xff, 0xff, 0xf0, 0x00, 0xff, 0xff, 0xff, 0x00, 0x7f, 0xff, 0xff, 0xf0
};
// '55s', 36x15px
const unsigned char i55s [] PROGMEM = {
  0x0f, 0xff, 0x00, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x00, 0x00, 0x7f, 0xff, 0xe0, 0x00, 0x00, 0x7f, 
  0xff, 0xf0, 0x00, 0x00, 0xff, 0xff, 0xfc, 0x00, 0x00, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x7f, 0xff, 
  0xff, 0x80, 0x00, 0x07, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x7f, 0xff, 0xf0, 0x00, 0x00, 0x07, 0xff, 
  0xf8, 0x00, 0x00, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 
  0xc0, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x07, 0xf0
};
// '60s', 19x12px
const unsigned char i60s [] PROGMEM = {
  0xff, 0xff, 0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xe0, 0x07, 0xff, 0xe0, 0x03, 0xff, 0xe0, 0x00, 
  0xff, 0xe0, 0x00, 0x7f, 0xe0, 0x00, 0x1f, 0xe0, 0x00, 0x0f, 0xe0, 0x00, 0x03, 0xe0, 0x00, 0x01, 
  0xe0, 0x00, 0x00, 0x60
};


const unsigned char mainMenu [] PROGMEM = {
  // 'mainMenuBG', 168x144px
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x0f, 0xf8,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1f,
  0x80, 0x00, 0x00, 0x07, 0xf0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0x0f,
  0xf8, 0xff, 0xdc, 0x38, 0x0f, 0x1f, 0xdf, 0xe7, 0xf3, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xfe, 0x1f, 0x0f, 0xfd, 0xff, 0xdc, 0x38, 0x0f, 0x3f, 0xdf, 0xc7, 0xf3, 0xe3, 0xc0,
  0x02, 0x00, 0x00, 0x78, 0x00, 0x01, 0x00, 0x0f, 0x1f, 0x0f, 0xfd, 0xff, 0xdc, 0x38, 0x0f, 0x38,
  0x1f, 0x80, 0x33, 0xc7, 0x00, 0x01, 0x80, 0x00, 0x30, 0x00, 0x06, 0x00, 0x03, 0x8f, 0x0e, 0x1d,
  0xc0, 0x1c, 0x38, 0x0f, 0x33, 0xdf, 0x3f, 0xb3, 0xc6, 0x00, 0x00, 0x40, 0x00, 0x30, 0x00, 0x08,
  0x00, 0x01, 0x8f, 0x0e, 0x1d, 0xc0, 0x1c, 0x38, 0x0f, 0x37, 0xde, 0x7f, 0xb3, 0xce, 0x00, 0x00,
  0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x01, 0xcf, 0x0f, 0xfd, 0xfe, 0x1c, 0x38, 0x0f, 0x37, 0xdc,
  0xff, 0xb3, 0xcc, 0x00, 0x00, 0x08, 0x00, 0x30, 0x00, 0x40, 0x00, 0x00, 0xcf, 0x0f, 0xf9, 0xfe,
  0x0e, 0x70, 0x0f, 0x37, 0xd9, 0xff, 0xb3, 0xcc, 0x00, 0x00, 0x06, 0x00, 0x30, 0x01, 0x80, 0x00,
  0x00, 0xcf, 0x0e, 0x1d, 0xc0, 0x0e, 0x70, 0x0f, 0x37, 0xd3, 0xff, 0xb3, 0xce, 0x00, 0x00, 0x01,
  0x00, 0x30, 0x02, 0x00, 0x00, 0x01, 0xcf, 0x0e, 0x1d, 0xc0, 0x07, 0xe0, 0x0f, 0x37, 0xc7, 0xf8,
  0x33, 0xcd, 0xe0, 0x00, 0x00, 0xc0, 0x30, 0x0c, 0x00, 0x00, 0x1e, 0xcf, 0x0e, 0x1d, 0xff, 0xc3,
  0xc7, 0x0f, 0x37, 0xcf, 0xf0, 0x33, 0xcc, 0x1e, 0x00, 0x00, 0x20, 0x30, 0x10, 0x00, 0x01, 0xe0,
  0xcf, 0x0e, 0x1d, 0xff, 0xc3, 0xc7, 0x0f, 0x37, 0xdf, 0xe0, 0x33, 0xcc, 0x01, 0xe0, 0x00, 0x18,
  0x30, 0x60, 0x00, 0x1e, 0x00, 0xcf, 0x0e, 0x1c, 0xff, 0xc1, 0x87, 0x0f, 0x37, 0xff, 0xe0, 0x33,
  0xcc, 0x00, 0x1e, 0x00, 0x04, 0x30, 0x80, 0x01, 0xe0, 0x00, 0xcf, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0x37, 0xff, 0xf0, 0x33, 0xcc, 0x00, 0x01, 0xc0, 0x03, 0x33, 0x00, 0x0e, 0x00, 0x00, 0xcf,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x37, 0xff, 0xf8, 0x33, 0xcc, 0x00, 0x00, 0x3c, 0x00, 0xfc,
  0x00, 0xf0, 0x00, 0x00, 0xcf, 0x00, 0x7f, 0xc0, 0x7f, 0xe0, 0x0f, 0x37, 0xff, 0xfc, 0x33, 0xcc,
  0x00, 0x00, 0x03, 0xc0, 0x30, 0x0f, 0x00, 0x00, 0x00, 0xcf, 0x00, 0xff, 0xe0, 0x7f, 0xf0, 0x0f,
  0x37, 0xff, 0xfe, 0x33, 0xce, 0x00, 0x00, 0x00, 0x20, 0x30, 0x10, 0x00, 0x00, 0x01, 0xcf, 0x00,
  0xff, 0xe0, 0x7f, 0xf0, 0x0f, 0x37, 0xff, 0xff, 0x33, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xcf, 0x00, 0xe0, 0xe0, 0x00, 0x70, 0x0f, 0x37, 0xf3, 0xff, 0xb3, 0xcf, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0x00, 0xe0, 0xe0, 0x00, 0x70, 0x0f, 0x37,
  0xe1, 0xff, 0xb3, 0xce, 0x00, 0x00, 0x00, 0x20, 0x30, 0x10, 0x00, 0x00, 0x01, 0xcf, 0x00, 0xe0,
  0xe0, 0x3f, 0xf0, 0x0f, 0x37, 0xc0, 0xff, 0xb3, 0xcc, 0x00, 0x00, 0x03, 0xc0, 0x30, 0x0f, 0x00,
  0x00, 0x00, 0xcf, 0x00, 0xe0, 0xe0, 0x7f, 0xe0, 0x0f, 0x37, 0xc0, 0x7f, 0xb3, 0xcc, 0x00, 0x00,
  0x3c, 0x00, 0xfc, 0x00, 0xf0, 0x00, 0x00, 0xcf, 0x00, 0xe0, 0xe0, 0x70, 0x00, 0x0f, 0x37, 0xc0,
  0x3f, 0xb3, 0xcc, 0x00, 0x01, 0xc0, 0x03, 0x33, 0x00, 0x0e, 0x00, 0x00, 0xcf, 0x00, 0xe0, 0xe0,
  0x70, 0x00, 0x0f, 0x33, 0xc0, 0x1f, 0xb3, 0xcc, 0x00, 0x1e, 0x00, 0x04, 0x30, 0x80, 0x01, 0xe0,
  0x00, 0xcf, 0x00, 0xff, 0xef, 0x7f, 0xf0, 0x0f, 0x38, 0x00, 0x00, 0x33, 0xcc, 0x01, 0xe0, 0x00,
  0x18, 0x30, 0x60, 0x00, 0x1e, 0x00, 0xcf, 0x00, 0xff, 0xef, 0x7f, 0xf0, 0x0f, 0x3f, 0xff, 0xff,
  0xf3, 0xcc, 0x1e, 0x00, 0x00, 0x20, 0x30, 0x10, 0x00, 0x01, 0xe0, 0xcf, 0x00, 0x7f, 0xcf, 0x7f,
  0xf0, 0x0f, 0x1f, 0xff, 0xff, 0xf3, 0xcd, 0xe0, 0x00, 0x00, 0xc0, 0x30, 0x0c, 0x00, 0x00, 0x1e,
  0xcf, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x00, 0x07, 0xce, 0x00, 0x00, 0x01, 0x00,
  0x30, 0x02, 0x00, 0x00, 0x01, 0xcf, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x0f,
  0xcc, 0x00, 0x00, 0x06, 0x00, 0x30, 0x01, 0x80, 0x00, 0x00, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xcc, 0x00, 0x00, 0x08, 0x00, 0x30, 0x00, 0x40, 0x00, 0x00, 0xcf,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xce, 0x00, 0x00, 0x30, 0x00, 0x30,
  0x00, 0x30, 0x00, 0x01, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc6,
  0x00, 0x00, 0x40, 0x00, 0x30, 0x00, 0x08, 0x00, 0x01, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xc7, 0x00, 0x01, 0x80, 0x00, 0x30, 0x00, 0x06, 0x00, 0x03, 0x8f, 0xc0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xe3, 0xc0, 0x02, 0x00, 0x00, 0x78, 0x00,
  0x01, 0x00, 0x0f, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe1, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0f, 0xf0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfe, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
  0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f,
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x7f, 0xf8, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xe7, 0x80, 0x00,
  0x38, 0x00, 0x00, 0xe0, 0x00, 0x01, 0xc0, 0x00, 0x03, 0x80, 0x00, 0x07, 0x00, 0x00, 0x1c, 0x00,
  0x01, 0xe7, 0xe6, 0x00, 0x00, 0x70, 0x00, 0x01, 0xc0, 0x00, 0x03, 0x80, 0x00, 0x01, 0xc0, 0x00,
  0x03, 0x80, 0x00, 0x0e, 0x00, 0x00, 0x67, 0xcc, 0x00, 0x00, 0x60, 0x00, 0x01, 0x80, 0x00, 0x03,
  0x00, 0x00, 0x00, 0xc0, 0x00, 0x01, 0x80, 0x00, 0x06, 0x00, 0x00, 0x33, 0xcc, 0x00, 0x00, 0x60,
  0x00, 0x01, 0x80, 0x00, 0x03, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x01, 0x80, 0x00, 0x06, 0x00, 0x00,
  0x33, 0xcc, 0x00, 0x00, 0x60, 0x00, 0x01, 0x80, 0x00, 0x03, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x01,
  0x80, 0x00, 0x06, 0x00, 0x00, 0x33, 0xe6, 0x00, 0x00, 0x70, 0x00, 0x01, 0xc0, 0x00, 0x03, 0x80,
  0x00, 0x01, 0xc0, 0x00, 0x03, 0x80, 0x00, 0x0e, 0x00, 0x00, 0x67, 0xe7, 0x80, 0x00, 0x38, 0x00,
  0x00, 0xe0, 0x00, 0x01, 0xc0, 0x00, 0x03, 0x80, 0x00, 0x07, 0x00, 0x00, 0x1c, 0x00, 0x01, 0xe7,
  0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0x8f, 0xf8, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xfc,
  0x7f, 0xb8, 0xe3, 0x87, 0x3f, 0x0f, 0xfb, 0x8e, 0x38, 0x73, 0xfc, 0x7f, 0xdc, 0x71, 0xff, 0x7f,
  0x83, 0xfc, 0xfe, 0x3f, 0xfc, 0xff, 0xb8, 0xe3, 0x87, 0x7f, 0x8f, 0xfb, 0x8e, 0x38, 0x73, 0xfc,
  0x7f, 0xdc, 0x71, 0xff, 0x7f, 0xc7, 0xfd, 0xff, 0x3f, 0xfc, 0xe0, 0x38, 0xe3, 0xcf, 0x73, 0x81,
  0xc3, 0x8e, 0x38, 0x73, 0x80, 0x0e, 0x1c, 0x71, 0xc0, 0x71, 0xc7, 0x01, 0xc7, 0x3f, 0xfc, 0xe0,
  0x38, 0xe3, 0xff, 0x73, 0x81, 0xc3, 0x8e, 0x3b, 0x73, 0x80, 0x0e, 0x1c, 0x71, 0xc0, 0x71, 0xc7,
  0x01, 0xc7, 0x3f, 0xfc, 0xff, 0x38, 0xe3, 0xff, 0x73, 0x81, 0xc3, 0x8e, 0x3b, 0x73, 0xf0, 0x0e,
  0x1f, 0xf1, 0xfc, 0x7f, 0x87, 0xf9, 0xff, 0x3f, 0xfc, 0x7f, 0xb8, 0xe3, 0xb7, 0x73, 0x81, 0xc3,
  0x8e, 0x3f, 0xf3, 0xf0, 0x0e, 0x1f, 0xf1, 0xfc, 0x7f, 0x03, 0xfd, 0xff, 0x3f, 0xfc, 0x01, 0xb8,
  0xe3, 0xb7, 0x73, 0x81, 0xc3, 0x8e, 0x3c, 0xf3, 0x80, 0x0e, 0x1c, 0x71, 0xc0, 0x73, 0xc0, 0x0d,
  0xc7, 0x3f, 0xfc, 0xff, 0xbf, 0xe3, 0x87, 0x7f, 0x81, 0xc3, 0xfe, 0x38, 0x73, 0xfc, 0x0e, 0x1c,
  0x71, 0xc0, 0x71, 0xc7, 0xfd, 0xc7, 0x3f, 0xfe, 0x7f, 0x1f, 0xc1, 0x87, 0x3f, 0x01, 0xc1, 0xfc,
  0x18, 0x73, 0xf8, 0x0e, 0x1c, 0x60, 0xc0, 0x71, 0x83, 0xf9, 0xc6, 0x7f, 0xff, 0x00, 0x00, 0x1c,
  0x00, 0x00, 0x70, 0x00, 0x01, 0xc0, 0x00, 0x03, 0x80, 0x00, 0x0e, 0x00, 0x00, 0x38, 0x00, 0x00,
  0xff, 0xff, 0xc0, 0x00, 0x7f, 0x00, 0x01, 0xfc, 0x00, 0x07, 0xf0, 0x00, 0x0f, 0xe0, 0x00, 0x3f,
  0x80, 0x00, 0xfe, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};