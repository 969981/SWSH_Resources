/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a1f70; name: FUN_004a1f70
 */


long FUN_004a1f70(long param_1,int *param_2)

{
  long lVar1;
  
  if ((((*param_2 != 0) || ((char)param_2[2] != -1)) || ((char)param_2[4] != -1)) ||
     (*(long *)(param_2 + 6) != 0)) {
    param_1 = FUN_004a2450(param_1 + 0x10);
    if (param_1 == 0) {
      return 0;
    }
    if ((((char)param_2[2] != -1) || ((char)param_2[4] != -1)) || (*(long *)(param_2 + 6) != 0)) {
      param_1 = FUN_004a2990(param_1 + 0x10);
      if (param_1 == 0) {
        return 0;
      }
      if (((char)param_2[4] != -1) || (*(long *)(param_2 + 6) != 0)) {
        param_1 = FUN_004a2ed0(param_1 + 0x10);
        if (param_1 == 0) {
          return 0;
        }
        if (*(long *)(param_2 + 6) != 0) {
          lVar1 = FUN_004a3370(param_1 + 0x10);
          return lVar1;
        }
      }
    }
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
    return param_1 + 8;
  }
  return param_1 + 8;
}


