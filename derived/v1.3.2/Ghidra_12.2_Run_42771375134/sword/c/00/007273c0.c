/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007273c0; name: FUN_007273c0
 */


void FUN_007273c0(long param_1,uint param_2,ulong *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong local_38;
  ulong uStack_28;
  
  uVar1 = (ulong)((uint)*(ulong *)(param_1 + 0x4c8) & ((uint)*param_3 ^ 0xffffffff)) & 0xfffffffe;
  if ((param_2 & 1) != 0) {
    uVar1 = *param_3 | *(ulong *)(param_1 + 0x4c8) | 1;
  }
  *(ulong *)(param_1 + 0x4c8) = uVar1;
  uStack_28 = *param_3 | 1;
  local_38 = *param_3 | 2;
  lVar3 = *(long *)(param_1 + 0x370);
  for (lVar2 = *(long *)(param_1 + 0x368); lVar2 != lVar3; lVar2 = lVar2 + 0x48) {
    uVar1 = FUN_0072f7b0(lVar2,0,&uStack_28);
    if ((uVar1 & 1) != 0) {
      FUN_0072ed30(lVar2,param_2 & 1,0);
    }
    uVar1 = FUN_0072f7b0(lVar2,0,&local_38);
    if ((uVar1 & 1) != 0) {
      FUN_0072ed30(lVar2,param_2 & 1,0);
    }
  }
  return;
}


