/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0115af30; name: FUN_0115af30
 */


void FUN_0115af30(long param_1,int param_2,byte param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  bVar1 = *(byte *)(param_1 + 0x748);
  uVar3 = (uint)bVar1;
  if (bVar1 == 0) {
    bVar2 = true;
  }
  else {
    bVar2 = *(char *)(param_1 + 0x749) != '\x02';
  }
  if ((1 < param_2) && (bVar2)) {
    return;
  }
  if (bVar1 != 0) {
    uVar3 = (uint)(*(char *)(param_1 + 0x749) == '\x02') << 1;
  }
  uVar4 = -(ulong)(uVar3 + param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)(uVar3 + param_2) << 3;
  lVar5 = *(long *)(*(long *)(param_1 + 0x708) + uVar4 + 0x100);
  *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe | ~param_3 & 1;
  lVar5 = *(long *)(*(long *)(param_1 + 0x708) + uVar4 + 0x150);
  *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe | param_3 & 1;
  return;
}


