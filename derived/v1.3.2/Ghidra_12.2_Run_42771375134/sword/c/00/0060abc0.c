/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0060abc0; name: FUN_0060abc0
 */


undefined8 FUN_0060abc0(long param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  size_t sVar2;
  void *__s;
  char *pcVar3;
  
  sVar1 = strlen(param_2);
  sVar2 = strlen(param_3);
  sVar1 = sVar1 + sVar2 + 1;
  if ((long)sVar1 < 1) {
    if (sVar1 == 0) {
      pcVar3 = strrchr(param_2,0x2f);
      if (pcVar3 == (char *)0x0) {
        uRam0000000000000000 = 0;
      }
      else {
        strncpy((char *)0x0,param_2,(size_t)(pcVar3 + (1 - (long)param_2)));
        pcVar3[1 - (long)param_2] = '\0';
        param_2 = pcVar3 + 1;
      }
      strcat((char *)0x0,param_3);
      strcat((char *)0x0,param_2);
    }
  }
  else {
    __s = (void *)(**(code **)(param_1 + 8))(param_1,sVar1);
    if (__s != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      memset(__s,0,sVar1);
    }
  }
  return 0;
}


