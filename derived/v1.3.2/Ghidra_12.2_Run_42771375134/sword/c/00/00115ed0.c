/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00115ed0; name: FUN_00115ed0
 */


void FUN_00115ed0(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  byte *pbVar5;
  
  uVar1 = *(uint *)(**(long **)(param_1 + 0x240) + (ulong)(uint)(param_2 << 1) * 4);
  uVar3 = uVar1 >> 6;
  uVar2 = *(uint *)(**(long **)(param_1 + 0x240) + (ulong)(param_2 << 1 | 1) * 4);
  if (uVar3 != 0x3ffffff) {
    lVar4 = *(long *)(param_1 + 0x18);
    if ((*(uint *)(*(long *)(param_1 + 0xe0) + (ulong)uVar3 * 4) ^ uVar2) < 0x40) {
      *(undefined4 *)(*(long *)(param_1 + 0xe0) + (ulong)uVar3 * 4) = 0xffffffc0;
    }
    pbVar5 = (byte *)(lVar4 + (ulong)uVar3 * 0x20 + 4);
    if ((*pbVar5 >> 4 & 1) == 0) {
      FUN_00190b50(param_1 + 0x178,uVar3 + 1);
      lVar4 = (ulong)(uVar1 >> 0xb) * 4;
      *(uint *)(*(long *)(param_1 + 0x178) + lVar4) =
           *(uint *)(*(long *)(param_1 + 0x178) + lVar4) | 1 << (ulong)(uVar1 >> 6 & 0x1f);
      *pbVar5 = *pbVar5 | 0x10;
    }
  }
  uVar1 = uVar2 >> 6;
  if (uVar1 != 0x3ffffff) {
    lVar4 = *(long *)(param_1 + 0x18);
    if (uVar3 == *(uint *)(*(long *)(param_1 + 0xe0) + (ulong)uVar1 * 4) >> 6) {
      *(undefined4 *)(*(long *)(param_1 + 0xe0) + (ulong)uVar1 * 4) = 0xffffffc0;
    }
    pbVar5 = (byte *)(lVar4 + (ulong)uVar1 * 0x20 + 4);
    if ((*pbVar5 >> 4 & 1) == 0) {
      FUN_00190b50(param_1 + 0x178,uVar1 + 1);
      lVar4 = (ulong)(uVar2 >> 0xb) * 4;
      *(uint *)(*(long *)(param_1 + 0x178) + lVar4) =
           *(uint *)(*(long *)(param_1 + 0x178) + lVar4) | 1 << (ulong)(uVar2 >> 6 & 0x1f);
      *pbVar5 = *pbVar5 | 0x10;
    }
  }
  return;
}


