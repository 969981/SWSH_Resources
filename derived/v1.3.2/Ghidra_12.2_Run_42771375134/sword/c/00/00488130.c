/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00488130; name: FUN_00488130
 */


byte FUN_00488130(long param_1,undefined4 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  undefined4 local_4;
  
  while (*(long *)(param_1 + 0x78) != 0 && (*(uint *)(param_1 + 0x9c) & 0x4000000) == 0) {
    param_1 = *(long *)(param_1 + 0x78);
  }
  local_4 = *(undefined4 *)(PTR_DAT_02712b40 + 0xb4);
  pbVar1 = *(byte **)(param_1 + 0x90);
  pbVar2 = pbVar1;
  if (pbVar1 != (byte *)0x0) {
    uVar3 = 0;
    pbVar2 = pbVar1 + ((ulong)(*pbVar1 + 4) & 0x1fc);
    do {
      if (pbVar1[uVar3 + 1] == 0x2d) goto LAB_0048819c;
      uVar3 = uVar3 + 1;
      pbVar2 = pbVar2 + 4;
    } while (uVar3 < *pbVar1);
    pbVar2 = (byte *)0x0;
  }
LAB_0048819c:
  pbVar1 = (byte *)&local_4;
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = pbVar2;
  }
  *param_2 = *(undefined4 *)pbVar1;
  return *(byte *)(param_1 + 0x9f) >> 3 & 1;
}


