/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a5710; name: FUN_004a5710
 */


undefined8 FUN_004a5710(undefined4 param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (param_2[5] == 0) {
    if ((int)param_2[1] == 0) {
      if ((*param_2 != 0) && (lVar1 = FUN_0048fe70(*param_2 + 8,param_1), lVar1 == 0)) {
        return 2;
      }
    }
    else {
      uVar2 = FUN_0048fb00(*(undefined8 *)PTR_DAT_02712ad0,(int)param_2[1],param_1);
      if ((uVar2 & 1) == 0) {
        return 2;
      }
    }
  }
  else {
    lVar1 = FUN_0048fe70(param_2[5] + 0x170,param_1);
    if (lVar1 == 0) {
      return 2;
    }
  }
  return 1;
}


