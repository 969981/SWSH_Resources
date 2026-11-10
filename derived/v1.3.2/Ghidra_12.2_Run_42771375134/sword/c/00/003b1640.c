/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b1640; name: FUN_003b1640
 */


undefined4 FUN_003b1640(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_38 [4];
  undefined4 uStack_34;
  
  FUN_001414c0(local_38,0xffff);
  uVar2 = FUN_003b35c0(*(undefined8 *)(param_1 + 0x28));
  if (uVar2 != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      if (*(int *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + uVar4 * 4) == param_2) {
        return (int)((ulong)*(undefined8 *)(*(long *)(param_1 + 0x38) + lVar3) >> 0x20);
      }
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar1;
      lVar3 = lVar3 + 0x14;
    } while (uVar1 < uVar2);
  }
  return uStack_34;
}


