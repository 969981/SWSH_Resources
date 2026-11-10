/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00727490; name: FUN_00727490
 */


void FUN_00727490(long param_1,uint param_2,ulong *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if ((param_2 & 1) == 0) {
    uVar1 = (ulong)(*(uint *)(param_1 + 0x4d0) & ((uint)*param_3 ^ 0xffffffff));
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x4d0) | *param_3;
  }
  lVar2 = *(long *)(param_1 + 0x368);
  lVar3 = *(long *)(param_1 + 0x370);
  *(ulong *)(param_1 + 0x4d0) = uVar1;
  if (lVar2 != lVar3) {
    do {
      uVar1 = FUN_0072f7b0(lVar2,0,param_3);
      if ((uVar1 & 1) != 0) {
        FUN_0072ed30(lVar2,param_2 & 1,4);
      }
      lVar2 = lVar2 + 0x48;
    } while (lVar3 != lVar2);
  }
  return;
}


