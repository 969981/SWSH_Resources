/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01157d10; name: FUN_01157d10
 */


void FUN_01157d10(long param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  
  FUN_01158bd0(*(undefined8 *)(param_1 + 0x88));
  FUN_0115cd00(*(undefined8 *)(param_1 + 0x90));
  uVar2 = *(uint *)(param_1 + 0x78);
  if (uVar2 != 4) {
    bVar1 = *(byte *)(*(long *)(param_1 + 0xd8) + 0x58);
    if ((bVar1 & 1) == 0) {
      *(byte *)(*(long *)(param_1 + 0xd8) + 0x58) = bVar1 | 1;
      FUN_01036f70(*(undefined8 *)(param_1 + 0xd0));
      uVar2 = *(uint *)(param_1 + 0x78);
    }
    uVar3 = (ulong)uVar2;
    if ((uVar2 < 0x2b) && ((1L << (uVar3 & 0x3f) & 0x79ff800bfe1U) != 0)) {
      FUN_0115a510(*(undefined8 *)(param_1 + 0xa8));
      uVar3 = (ulong)*(uint *)(param_1 + 0x78);
    }
    if (((uint)uVar3 < 0x1b) && ((1 << (ulong)((uint)uVar3 & 0x1f) & 0x7780000U) != 0)) {
      FUN_0115f050(*(undefined8 *)(param_1 + 0xa0));
      uVar3 = (ulong)*(uint *)(param_1 + 0x78);
    }
    uVar2 = (uint)uVar3;
    if ((uVar2 < 0x2d) && ((1L << (uVar3 & 0x3f) & 0x184000070000U) != 0)) goto joined_r0x01157df8;
  }
  FUN_0115c2c0(*(undefined8 *)(param_1 + 0x98));
  uVar2 = *(uint *)(param_1 + 0x78);
  uVar3 = (ulong)uVar2;
joined_r0x01157df8:
  if ((uVar2 < 0x2b) && ((1L << (uVar3 & 0x3f) & 0x79fff780000U) != 0)) {
    FUN_0115c2e0(*(undefined8 *)(param_1 + 0x98));
    return;
  }
  return;
}


