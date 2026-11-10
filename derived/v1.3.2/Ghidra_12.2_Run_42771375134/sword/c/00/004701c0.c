/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004701c0; name: FUN_004701c0
 */


long FUN_004701c0(long param_1,int *param_2)

{
  long lVar1;
  
  if ((((*param_2 == 0) && ((char)param_2[2] == -1)) && ((char)param_2[4] == -1)) &&
     (*(long *)(param_2 + 6) == 0)) {
LAB_0047026c:
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined1 *)(param_1 + 0x10) = 1;
      return param_1 + 8;
    }
    return param_1 + 8;
  }
  param_1 = FUN_004706a0(param_1 + 0x18);
  lVar1 = 0;
  if (param_1 != 0) {
    if ((((char)param_2[2] == -1) && ((char)param_2[4] == -1)) && (*(long *)(param_2 + 6) == 0))
    goto LAB_0047026c;
    param_1 = FUN_00470bf0(param_1 + 0x18);
    lVar1 = 0;
    if (param_1 != 0) {
      if (((char)param_2[4] == -1) && (*(long *)(param_2 + 6) == 0)) goto LAB_0047026c;
      param_1 = FUN_00471140(param_1 + 0x18);
      lVar1 = 0;
      if (param_1 != 0) {
        if (*(long *)(param_2 + 6) == 0) goto LAB_0047026c;
        lVar1 = FUN_004715e0(param_1 + 0x18);
      }
    }
  }
  return lVar1;
}


