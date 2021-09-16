
// Menetapkan PWM pin LED ditempelkan kemana (Analog Out)
int ledPin = 9;

int ledPinHijau = 6;

// Seberapa terang lampu saat sirkut baru dijalankan
int terangLed = 0;
int terangLedHijau = 255;

// Nilai perubahan terangnya lampu
int nilaiPerubahanTerang = 5;
int nilaiPerubahanTerangHijau = 5;



void setup() {
  // mendeklarasikan pin no 9 menjadi analog keluar (analog Out)
  // Pastikan pin yang didekrlasi memliki 
  // tanda ~ sebelum nomor pin pada papan arduino
  // Pada arduino analog out ada di nomor
  // 3, 5, 6, 9, 10, dan 11 
  pinMode (ledPin, OUTPUT);
}

// function yang jarang secara berulang
void loop() {
  
  // Menetapkan terangnya lampu
  analogWrite (ledPin, terangLed);
  analogWrite (ledPinHijau, terangLedHijau);

  // menambah nilai terang lampu Led
  terangLed = terangLed + nilaiPerubahanTerang; 
  terangLedHijau = terangLedHijau - nilaiPerubahanTerangHijau;

//  Jika lampu terang Lampu LED telah mencapai 255 atau 0
  if (terangLed <= 0 || terangLed >=255){

//  Rubah menjadi minus jika sudah mencapai nilai 255 dan
//  menjadi plus jika sudah mencapai nilai 0
    nilaiPerubahanTerang = -nilaiPerubahanTerang; 
  }

  if (terangLedHijau <= 0 || terangLedHijau >=255){

//  Rubah menjadi minus jika sudah mencapai nilai 255 dan
//  menjadi plus jika sudah mencapai nilai 0
    nilaiPerubahanTerangHijau = -nilaiPerubahanTerangHijau; 
  }

// Mendelay perulangnya 30 milisecond
  delay (30);
}
