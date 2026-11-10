/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080e510; name: FUN_0080e510
 */


byte * FUN_0080e510(byte *param_1,byte *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  uVar3 = (uint)(*param_1 >> 1);
  if ((*param_1 & 1) != 0) {
    uVar3 = *(uint *)(param_1 + 8);
  }
  if (0x7f < uVar3) {
    pbVar5 = param_2;
    uVar4 = uVar3;
    do {
      uVar3 = uVar4 >> 7;
      uVar1 = uVar4 >> 0xe;
      param_2 = pbVar5 + 1;
      *pbVar5 = (byte)uVar4 | 0x80;
      pbVar5 = param_2;
      uVar4 = uVar3;
    } while (uVar1 != 0);
  }
  *param_2 = (byte)uVar3;
  pbVar5 = *(byte **)(param_1 + 0x10);
  bVar2 = (*param_1 & 1) != 0;
  uVar3 = (uint)(*param_1 >> 1);
  if (bVar2) {
    uVar3 = (uint)*(undefined8 *)(param_1 + 8);
  }
  if (!bVar2) {
    pbVar5 = param_1 + 1;
  }
  memcpy(param_2 + 1,pbVar5,(long)(int)uVar3);
  return param_2 + 1 + (int)uVar3;
}


