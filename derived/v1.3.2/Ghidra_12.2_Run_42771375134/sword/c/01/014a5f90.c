/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a5f90; name: FUN_014a5f90
 */


void FUN_014a5f90(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 local_28;
  
  lVar1 = *(long *)(param_1 + 0x80);
  if ((param_2 & 1) == 0) {
    if (lVar1 != 0) {
      local_28 = 0;
      FUN_007273c0(lVar1,0,&local_28);
    }
    if (*(long *)(param_1 + 0xa8) != 0) {
      FUN_007947b0(*(long *)(param_1 + 0xa8),0);
    }
    if (*(long *)(param_1 + 0xb0) != 0) {
      FUN_007947b0(*(long *)(param_1 + 0xb0),0);
    }
    lVar1 = *(long *)(param_1 + 0xb8);
    if (lVar1 == 0) {
      return;
    }
    uVar2 = 0;
  }
  else {
    if (lVar1 != 0) {
      local_28 = 0;
      FUN_007273c0(lVar1,param_3 & 1,&local_28);
    }
    if (*(long *)(param_1 + 0xa8) != 0) {
      FUN_007947b0(*(long *)(param_1 + 0xa8),param_3 >> 1 & 1);
    }
    if (*(long *)(param_1 + 0xb0) != 0) {
      FUN_007947b0(*(long *)(param_1 + 0xb0),param_3 >> 2 & 1);
    }
    lVar1 = *(long *)(param_1 + 0xb8);
    if (lVar1 == 0) {
      return;
    }
    uVar2 = param_3 >> 3 & 1;
  }
  FUN_007947b0(lVar1,uVar2);
  return;
}


