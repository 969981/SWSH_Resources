/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00608970; name: FUN_00608970
 */


undefined8 FUN_00608970(long *param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 6;
  if ((param_1 != (long *)0x0) && (param_2 != (code *)0x0)) {
    lVar2 = *param_1;
    if (lVar2 == 0) {
      return 0;
    }
    do {
      lVar3 = *(long *)(lVar2 + 8);
      uVar1 = (*param_2)(lVar2,param_3);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      lVar2 = lVar3;
    } while (lVar3 != 0);
  }
  return uVar1;
}


