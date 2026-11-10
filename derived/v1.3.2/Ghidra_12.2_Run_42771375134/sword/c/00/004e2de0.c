/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e2de0; name: FUN_004e2de0
 */


undefined8 FUN_004e2de0(long param_1,undefined1 *param_2,uint param_3)

{
  byte bVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  float fVar8;
  
  bVar1 = *(byte *)(param_1 + 0x6c);
  uVar3 = bVar1 & 0xfc;
  *(char *)(param_1 + 0x6c) = (char)uVar3;
  if (param_2 == (undefined1 *)0x0) {
    return 2;
  }
  if (param_3 == 0) {
    return 2;
  }
  uVar3 = uVar3 | 1;
  *(undefined1 **)(param_1 + 8) = param_2;
  *(uint *)(param_1 + 0x10) = param_3;
  *(char *)(param_1 + 0x6c) = (char)uVar3;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar4 = (uint)CONCAT11(*param_2,param_2[1]);
  *(uint *)(param_1 + 0x1c) = uVar4;
  if (uVar4 != 0) {
    fVar8 = *(float *)(param_2 + 2);
    *(float *)(param_1 + 0x50) = fVar8;
    fVar2 = DAT_01d4c728;
    fVar8 = fVar8 * (float)uVar4;
    *(undefined1 **)(param_1 + 0x30) = param_2 + param_3;
    *(undefined8 *)(param_1 + 0x38) = 0;
    uVar3 = bVar1 | 3;
    *(char *)(param_1 + 0x6c) = (char)uVar3;
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x4a) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(float *)(param_1 + 0x58) = fVar8 * fVar2;
    fVar2 = DAT_01d4c2fc;
    *(undefined1 **)(param_1 + 0x28) = param_2 + 6;
    *(float *)(param_1 + 0x54) = fVar2 / fVar8;
  }
  if ((uVar3 >> 1 & 1) == 0) goto LAB_004e2f5c;
  pbVar7 = *(byte **)(param_1 + 0x28);
  uVar4 = 0xffffffff;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(byte **)(param_1 + 0x38) = pbVar7;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  if (pbVar7 == (byte *)0x0) {
LAB_004e2f3c:
    uVar5 = 2;
  }
  else {
    pbVar6 = pbVar7 + 1;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(byte **)(param_1 + 0x38) = pbVar6;
    bVar1 = *pbVar7;
    uVar4 = bVar1 & 0x7f;
    *(uint *)(param_1 + 0x40) = uVar4;
    if ((char)bVar1 < '\0') {
      pbVar6 = pbVar7 + 2;
      *(uint *)(param_1 + 0x40) = uVar4 << 7;
      *(byte **)(param_1 + 0x38) = pbVar6;
      bVar1 = pbVar7[1];
      uVar4 = uVar4 << 7 | bVar1 & 0x7f;
      *(uint *)(param_1 + 0x40) = uVar4;
      if (-1 < (char)bVar1) goto LAB_004e2f20;
      pbVar6 = pbVar7 + 3;
      *(uint *)(param_1 + 0x40) = uVar4 << 7;
      *(byte **)(param_1 + 0x38) = pbVar6;
      bVar1 = pbVar7[2];
      uVar4 = uVar4 << 7 | bVar1 & 0x7f;
      *(uint *)(param_1 + 0x40) = uVar4;
      if (-1 < (char)bVar1) goto LAB_004e2f20;
      pbVar6 = pbVar7 + 4;
      *(uint *)(param_1 + 0x40) = uVar4 << 7;
      *(byte **)(param_1 + 0x38) = pbVar6;
      uVar4 = uVar4 << 7 | pbVar7[3] & 0x7f;
      uVar5 = uVar4;
      if ((pbVar7[3] & 0x80) != 0) {
        uVar5 = 0xffffffff;
      }
      *(uint *)(param_1 + 0x40) = uVar5;
      if (uVar5 != 0xffffffff) goto LAB_004e2f20;
      uVar5 = 0;
      uVar4 = 0xffffffff;
    }
    else {
LAB_004e2f20:
      if (pbVar6 < *(byte **)(param_1 + 0x30)) {
        *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(pbVar6 + 4);
        *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)pbVar6;
        goto LAB_004e2f3c;
      }
      uVar5 = 0;
    }
  }
  uVar3 = uVar5 | uVar3 & 0xfffffffd;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(uint *)(param_1 + 0x60) = uVar4;
  *(undefined8 *)(param_1 + 100) = 0;
  *(char *)(param_1 + 0x6c) = (char)uVar3;
LAB_004e2f5c:
  if ((uVar3 >> 1 & 1) == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    return 2;
  }
  return 1;
}


