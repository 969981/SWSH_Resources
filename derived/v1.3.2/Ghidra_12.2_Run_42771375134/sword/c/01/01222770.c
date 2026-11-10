/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01222770; name: FUN_01222770
 */


void FUN_01222770(uint *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  undefined8 local_28;
  
  local_28 = 0;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    uVar3 = 0;
LAB_0122287c:
    uVar4 = 0;
LAB_01222880:
    bVar7 = 0;
    uVar6 = 0;
    bVar8 = 0;
LAB_01222884:
    uVar9 = 0;
    uVar10 = 0;
  }
  else {
    if ((ulong)(param_2[1] * 8) < 10) {
      uVar3 = 0;
      lVar5 = param_2[1];
    }
    else {
      uVar2 = FUN_01222d60(lVar1,&local_28);
      lVar1 = *param_2;
      uVar3 = 0;
      if ((uVar2 & 0xff) != 0) {
        uVar3 = (uint)(uVar2 >> 0x10) & 0xffff;
      }
      if (lVar1 == 0) goto LAB_0122287c;
      lVar5 = param_2[1];
    }
    uVar2 = lVar5 * 8;
    if (uVar2 < 0x10) goto LAB_0122287c;
    uVar4 = (ushort)(*(byte *)(lVar1 + 1) >> 2);
    if (0x1c < uVar4) {
      uVar4 = 0;
    }
    if (uVar2 < 0x12) goto LAB_01222880;
    uVar10 = *(byte *)(lVar1 + 2) & 3;
    uVar6 = 0;
    if (uVar10 != 3) {
      uVar6 = uVar10;
    }
    bVar8 = *(byte *)(lVar1 + 2) >> 2 & 1;
    if (uVar2 < 0x14) {
      bVar7 = 0;
      goto LAB_01222884;
    }
    bVar7 = *(byte *)(lVar1 + 2) >> 3 & 1;
    if (uVar2 < 0x16) goto LAB_01222884;
    uVar9 = *(byte *)(lVar1 + 2) >> 4 & 3;
    uVar10 = 0;
    if (uVar9 != 3) {
      uVar10 = uVar9;
    }
    if (uVar2 < 0x38) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(uint *)(lVar1 + 3);
      if (0x3f < uVar2) {
        bVar11 = *(byte *)(lVar1 + 7);
        if (6 < bVar11) {
          bVar11 = 0;
        }
        goto LAB_0122288c;
      }
    }
  }
  bVar11 = 0;
LAB_0122288c:
  *param_1 = uVar3;
  *(ushort *)(param_1 + 1) = uVar4;
  param_1[2] = uVar6;
  *(byte *)(param_1 + 3) = bVar8;
  *(byte *)((long)param_1 + 0xd) = bVar7;
  param_1[4] = uVar10;
  param_1[5] = uVar9;
  *(byte *)(param_1 + 6) = bVar11;
  return;
}


