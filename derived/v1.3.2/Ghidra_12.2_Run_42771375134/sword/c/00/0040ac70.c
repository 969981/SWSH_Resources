/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040ac70; name: FUN_0040ac70
 */


void FUN_0040ac70(long param_1,byte *param_2,undefined4 *param_3,byte *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  byte local_4 [4];
  
  *param_2 = *(byte *)(param_1 + 0xdc) >> 1 & 1;
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
      if (pbVar1[uVar3 + 1] == 0x38) goto LAB_0040acc4;
      uVar3 = uVar3 + 1;
      pbVar2 = pbVar2 + 4;
    } while (uVar3 < *pbVar1);
    pbVar2 = (byte *)0x0;
  }
LAB_0040acc4:
  pbVar1 = local_4;
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = pbVar2;
  }
  *param_3 = *(undefined4 *)pbVar1;
  *param_4 = *(byte *)(param_1 + 0xdc) >> 3 & 1;
  return;
}


