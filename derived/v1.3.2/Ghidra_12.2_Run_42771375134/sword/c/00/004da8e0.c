/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004da8e0; name: FUN_004da8e0
 */


void FUN_004da8e0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if ((*(byte *)(*(long *)(param_1 + 0x70) + 0x20) >> 1 & 1) != 0) {
    return;
  }
  *(byte *)(param_1 + 0x8c) = *(byte *)(param_1 + 0x8c) | 1;
  lVar1 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = *(long *)(param_1 + 0x20) + -0x18;
  }
  uVar4 = *(undefined8 *)PTR_DAT_02712ad0;
  uVar2 = *(undefined4 *)(lVar1 + 0x1d8);
  uVar3 = FUN_0044fc40(lVar1 + 0x18);
  FUN_0048f8a0(uVar4,uVar2,uVar3);
  return;
}


