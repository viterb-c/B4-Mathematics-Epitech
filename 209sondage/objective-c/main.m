#import <Foundation/Foundation.h>

void usage() {
  printf("Usage : ./209sondage population echantillon sondage\n");
  exit(0);
}

void check_arg(float P, float E, float S) {
  if (P < E) {
    printf("Error : population inferior to echantillon !\n");
    usage();
  } else if (P <= 1 || E <= 1) {
    printf("Error : population and echantillon must be > 1 !\n");
    usage();
  } else if (S < 0) {
    printf("Error : sondage must be > 0 !\n");
    usage();
  }
}

float calc_var(float P, float E, float S) {
  float p = S / 100.0;
  float var = p * (1 - p);
  return (var / E * (P - E) / (P - 1.0));
}

void print_result(float P, float E, float S, float variance, float amp_95, float amp_99) {
  printf("taille de la population :\t %.0f\n", P);
  printf("taille de l'echantillon :\t %.0f\n", E);
  printf("resultat du sondage :\t \t %.2f\n", S);
  printf("variance estimee :\t \t %.6f\n", variance);
  printf("intervalle de confiance a 95%% : [%.2f%% ; %.2f%%]\n", S - amp_95, S + amp_95);
  printf("intervalle de confiance a 99%% : [%.2f%% ; %.2f%%]\n", S - amp_99, S + amp_99);

}

void run_calc(float P, float E, float S) {
  float variance = calc_var(P, E, S);
  float amp_95 = 1.96f * sqrt(variance) * 100;
  float amp_99 = 2.58f * sqrt(variance) * 100;
  print_result(P, E, S, variance, amp_95, amp_99);
}

int main(int argc, const char **argv) {
  if (argc != 4) {
    usage();
  }
  float P, E, S;
  P = strtof(argv[1], NULL);
  E = strtof(argv[2], NULL);
  S = strtof(argv[3], NULL);
  check_arg(P, E, S);
  run_calc(P, E, S);
  return (0);
}
