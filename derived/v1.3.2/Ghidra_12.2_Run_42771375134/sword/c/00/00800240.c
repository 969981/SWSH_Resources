/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00800240; name: FUN_00800240
 */


char * FUN_00800240(float param_1,char *param_2)

{
  int *piVar1;
  float fVar2;
  char *local_38;
  
  if (param_1 == DAT_01d4bbe0) {
    builtin_strncpy(param_2,"inf",4);
  }
  else if (param_1 == DAT_01d4bbdc) {
    builtin_strncpy(param_2,"-inf",5);
  }
  else if ((uint)ABS(param_1) < 0x7f800001) {
    snprintf(param_2,0x18,"%.*g",(double)param_1,6);
    piVar1 = __errno_location();
    *piVar1 = 0;
    fVar2 = strtof(param_2,&local_38);
    if ((((*param_2 == '\0') || (*local_38 != '\0')) ||
        (piVar1 = __errno_location(), fVar2 != param_1)) || (*piVar1 != 0)) {
      snprintf(param_2,0x18,"%.*g",(double)param_1,8);
    }
    FUN_00800370(param_2);
  }
  else {
    builtin_strncpy(param_2,"nan",4);
  }
  return param_2;
}


