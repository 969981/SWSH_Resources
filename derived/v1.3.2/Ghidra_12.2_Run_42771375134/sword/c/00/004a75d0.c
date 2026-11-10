/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a75d0; name: FUN_004a75d0
 */


void FUN_004a75d0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,uint param_5)

{
  long lVar1;
  
  if ((*(long *)(param_2 + 0x70) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_2 + 0x70) + 0x10), lVar1 != 0)) {
    if (param_3 == 0) {
      do {
        FUN_0048cb20(param_1,lVar1 + -0x18,param_4,param_5 & 1);
        lVar1 = *(long *)(lVar1 + 0x48);
      } while (lVar1 != 0);
    }
    else {
      do {
        while (*(long *)(lVar1 + 0x10) == param_3) {
          FUN_0048cb20(param_1,lVar1 + -0x18,param_4,param_5 & 1);
          lVar1 = *(long *)(lVar1 + 0x48);
          if (lVar1 == 0) {
            return;
          }
        }
        lVar1 = *(long *)(lVar1 + 0x48);
      } while (lVar1 != 0);
    }
  }
  return;
}


