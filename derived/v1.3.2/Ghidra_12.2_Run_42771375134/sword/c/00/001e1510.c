/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e1510; name: FUN_001e1510
 */


uint FUN_001e1510(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(lVar3 + 0x50);
  if (uVar1 == 0) {
    return 0;
  }
  pbVar4 = *(byte **)(lVar3 + 0x48);
  uVar2 = (uint)(*pbVar4 == param_2);
  if (uVar1 != 1) {
    uVar5 = 1;
    do {
      pbVar4 = pbVar4 + 0x10;
      uVar5 = uVar5 + 1;
      if (*pbVar4 == param_2) {
        uVar2 = uVar2 + 1;
      }
    } while (uVar5 < uVar1);
  }
  return uVar2;
}


