/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a542c0; name: FUN_00a542c0
 */


void FUN_00a542c0(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = FUN_00a0bde0(*(undefined8 *)(param_1 + 0x610),*(undefined4 *)(param_1 + 0x618));
  FUN_00a569e0(*(undefined8 *)(param_1 + 0x698));
  FUN_00a569e0(*(long *)(param_1 + 0x698) + 0xa0);
  FUN_00a569e0(*(long *)(param_1 + 0x698) + 0x140);
  FUN_00a569e0(*(long *)(param_1 + 0x698) + 0x1e0);
  if (lVar2 == 0) {
    return;
  }
  uVar3 = *(ulong *)(lVar2 + 0x48);
  if (param_2 < uVar3) {
    FUN_00a56700(*(undefined8 *)(param_1 + 0x698),*(long *)(lVar2 + 0x40) + (ulong)param_2 * 0x28);
    if (param_2 + 1 < uVar3) {
      FUN_00a56700(*(long *)(param_1 + 0x698) + 0xa0,
                   *(long *)(lVar2 + 0x40) + (ulong)(param_2 + 1) * 0x28);
      if (param_2 + 2 < uVar3) {
        FUN_00a56700(*(long *)(param_1 + 0x698) + 0x140,
                     *(long *)(lVar2 + 0x40) + (ulong)(param_2 + 2) * 0x28);
        if (param_2 + 3 < uVar3) {
          FUN_00a56700(*(long *)(param_1 + 0x698) + 0x1e0,
                       *(long *)(lVar2 + 0x40) + (ulong)(param_2 + 3) * 0x28);
        }
      }
    }
  }
  uVar1 = (int)uVar3 - 4;
  FUN_016c6b20(param_1 + 0x6e0,uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU),param_2);
  return;
}


