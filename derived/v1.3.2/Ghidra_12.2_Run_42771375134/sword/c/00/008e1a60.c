/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e1a60; name: FUN_008e1a60
 */


uint FUN_008e1a60(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + (ulong)param_2 * 8 + 0x90);
  uVar3 = (uint)uVar5;
  uVar1 = uVar3 & 7;
  uVar4 = 0;
  if (uVar1 == 2) {
    uVar4 = (uint)(uVar5 >> 0xe);
  }
  uVar2 = uVar3 >> 8 & 0x3f;
  if (uVar1 != 3) {
    uVar2 = uVar4;
  }
  uVar4 = uVar3 >> 0xe & 0x3f;
  if (uVar1 != 4) {
    uVar4 = uVar2;
  }
  return uVar4;
}


