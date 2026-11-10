/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ea410; name: FUN_003ea410
 */


void FUN_003ea410(long param_1,undefined4 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_2c [4];
  uint local_28;
  uint local_24;
  
  uVar1 = FUN_001317d0(*(undefined8 *)(param_1 + 0x728),&local_28,auStack_2c,param_2);
  if ((uVar1 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x1128);
    local_24 = local_28;
    FUN_00190b50(lVar3 + 0x20,local_28 + 1);
    lVar2 = (ulong)(local_28 >> 5) * 4;
    *(uint *)(*(long *)(lVar3 + 0x20) + lVar2) =
         *(uint *)(*(long *)(lVar3 + 0x20) + lVar2) | 1 << ((ulong)local_28 & 0x1f);
    if ((*(uint *)(lVar3 + 0x3c) & 0x7fffffff) <= *(uint *)(lVar3 + 0x38)) {
      FUN_001b4230(lVar3 + 0x30,&local_24);
      return;
    }
    *(uint *)(*(long *)(lVar3 + 0x30) + (ulong)*(uint *)(lVar3 + 0x38) * 4) = local_24;
    *(int *)(lVar3 + 0x38) = *(int *)(lVar3 + 0x38) + 1;
  }
  return;
}


