/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0046b140; name: FUN_0046b140
 */


long FUN_0046b140(long param_1,long *param_2)

{
  long lVar1;
  
  if (((((*param_2 != 0) || ((int)param_2[1] != 0)) || ((int)param_2[2] != 0)) ||
      (((char)param_2[3] != -1 || ((char)param_2[4] != -1)))) || (param_2[5] != 0)) {
    param_1 = FUN_0046fb20(param_1 + 0x18);
    if (param_1 == 0) {
      return 0;
    }
    if ((((int)param_2[1] != 0) || ((int)param_2[2] != 0)) ||
       (((char)param_2[3] != -1 || (((char)param_2[4] != -1 || (param_2[5] != 0)))))) {
      lVar1 = FUN_00470070(param_1 + 0x18);
      if (lVar1 == 0) {
        return 0;
      }
      lVar1 = FUN_004701c0(lVar1,param_2 + 2);
      return lVar1;
    }
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return param_1 + 8;
}


