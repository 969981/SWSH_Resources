/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004573c0; name: FUN_004573c0
 */


undefined4 FUN_004573c0(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  byte local_4 [4];
  
  local_4[0] = 0;
  local_4[1] = 0;
  local_4[2] = 0;
  local_4[3] = 0;
  pbVar1 = *(byte **)(param_1 + 0x90);
  pbVar2 = pbVar1;
  if (pbVar1 != (byte *)0x0) {
    uVar3 = 0;
    pbVar2 = pbVar1 + ((ulong)(*pbVar1 + 4) & 0x1fc);
    do {
      if (pbVar1[uVar3 + 1] == 0x1e) goto LAB_00457408;
      uVar3 = uVar3 + 1;
      pbVar2 = pbVar2 + 4;
    } while (uVar3 < *pbVar1);
    pbVar2 = (byte *)0x0;
  }
LAB_00457408:
  pbVar1 = local_4;
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = pbVar2;
  }
  return *(undefined4 *)pbVar1;
}


