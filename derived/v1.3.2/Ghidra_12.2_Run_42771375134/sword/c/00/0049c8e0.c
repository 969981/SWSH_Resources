/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049c8e0; name: FUN_0049c8e0
 */


long FUN_0049c8e0(long param_1,long *param_2)

{
  long lVar1;
  
  if (((((*param_2 != 0) || ((int)param_2[1] != 0)) || ((int)param_2[2] != 0)) ||
      (((char)param_2[3] != -1 || ((char)param_2[4] != -1)))) || (param_2[5] != 0)) {
    param_1 = FUN_004a18e0(param_1 + 0x10);
    if (param_1 == 0) {
      return 0;
    }
    if ((((int)param_2[1] != 0) || ((int)param_2[2] != 0)) ||
       (((char)param_2[3] != -1 || (((char)param_2[4] != -1 || (param_2[5] != 0)))))) {
      lVar1 = FUN_004a1e20(param_1 + 0x10);
      if (lVar1 == 0) {
        return 0;
      }
      lVar1 = FUN_004a1f70(lVar1,param_2 + 2);
      return lVar1;
    }
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
    return param_1 + 8;
  }
  return param_1 + 8;
}


