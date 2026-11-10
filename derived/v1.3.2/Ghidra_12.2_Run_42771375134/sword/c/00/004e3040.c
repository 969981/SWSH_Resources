/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e3040; name: FUN_004e3040
 */


undefined8 FUN_004e3040(float param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  
  if ((*(byte *)(param_2 + 0x6c) >> 1 & 1) == 0) {
    return 2;
  }
  pbVar5 = *(byte **)(param_2 + 0x28);
  uVar4 = 0xffffffff;
  *(undefined1 *)(param_2 + 0x4a) = 0;
  *(byte **)(param_2 + 0x38) = pbVar5;
  *(undefined4 *)(param_2 + 0x40) = 0xffffffff;
  if (pbVar5 == (byte *)0x0) {
    pbVar3 = (byte *)0x0;
  }
  else {
    pbVar3 = pbVar5 + 1;
    *(undefined4 *)(param_2 + 0x40) = 0;
    *(byte **)(param_2 + 0x38) = pbVar3;
    bVar2 = *pbVar5;
    uVar4 = bVar2 & 0x7f;
    *(uint *)(param_2 + 0x40) = uVar4;
    if ((char)bVar2 < '\0') {
      pbVar3 = pbVar5 + 2;
      *(uint *)(param_2 + 0x40) = uVar4 << 7;
      *(byte **)(param_2 + 0x38) = pbVar3;
      bVar2 = pbVar5[1];
      uVar4 = uVar4 << 7 | bVar2 & 0x7f;
      *(uint *)(param_2 + 0x40) = uVar4;
      if ((char)bVar2 < '\0') {
        pbVar3 = pbVar5 + 3;
        *(uint *)(param_2 + 0x40) = uVar4 << 7;
        *(byte **)(param_2 + 0x38) = pbVar3;
        bVar2 = pbVar5[2];
        uVar4 = uVar4 << 7 | bVar2 & 0x7f;
        *(uint *)(param_2 + 0x40) = uVar4;
        if ((char)bVar2 < '\0') {
          pbVar3 = pbVar5 + 4;
          *(uint *)(param_2 + 0x40) = uVar4 << 7;
          *(byte **)(param_2 + 0x38) = pbVar3;
          uVar4 = uVar4 << 7 | pbVar5[3] & 0x7f;
          uVar1 = uVar4;
          if ((pbVar5[3] & 0x80) != 0) {
            uVar1 = 0xffffffff;
          }
          *(uint *)(param_2 + 0x40) = uVar1;
          if (uVar1 == 0xffffffff) {
            uVar4 = 0xffffffff;
            goto LAB_004e312c;
          }
        }
      }
    }
    if (pbVar3 < *(byte **)(param_2 + 0x30)) {
      *(undefined2 *)(param_2 + 0x48) = *(undefined2 *)(pbVar3 + 4);
      *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)pbVar3;
    }
  }
LAB_004e312c:
  param_1 = *(float *)(param_2 + 0x58) * param_1;
  *(undefined4 *)(param_2 + 0x5c) = 0;
  *(uint *)(param_2 + 0x60) = uVar4;
  *(float *)(param_2 + 0x68) = param_1 - (float)(int)param_1;
  *(int *)(param_2 + 100) = (int)param_1;
  while ((pbVar3 != (byte *)0x0 || ((*(byte *)(param_2 + 0x6c) >> 2 & 1) != 0))) {
    if (*(uint *)(param_2 + 100) <= *(uint *)(param_2 + 0x60)) {
      return 1;
    }
    FUN_004e31a0(param_2);
    pbVar3 = *(byte **)(param_2 + 0x38);
  }
  return 2;
}


