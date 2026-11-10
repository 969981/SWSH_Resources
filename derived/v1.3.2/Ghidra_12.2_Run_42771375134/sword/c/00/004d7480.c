/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d7480; name: FUN_004d7480
 */


undefined8 FUN_004d7480(undefined8 *param_1,undefined4 *param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  undefined1 uVar7;
  ulong uVar8;
  uint uVar9;
  float fVar10;
  
  bVar3 = *(byte *)(param_2 + 1);
  if (bVar3 < 9) {
    param_1[3] = 0;
    param_1[4] = param_1;
    *(undefined1 *)(param_1 + 9) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    if ((*(ushort *)(param_2 + 2) & 0x3f) == 0x20) {
      puVar5 = (undefined4 *)FUN_00404750(*(undefined4 *)PTR_DAT_02712e28,(ulong)bVar3 << 2,0x10);
      param_1[4] = puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        return 2;
      }
      if ((*(char *)(param_2 + 1) != '\0') && (*puVar5 = 0, (*(byte *)(param_2 + 1) & 0xfe) != 0)) {
        uVar8 = 1;
        do {
          *(undefined4 *)(param_1[4] + uVar8 * 4) = 0;
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(byte *)(param_2 + 1));
      }
    }
    else {
      puVar6 = (undefined2 *)FUN_00404750(*(undefined4 *)PTR_DAT_02712e28,(ulong)bVar3 << 1,0x10);
      param_1[4] = puVar6;
      if (puVar6 == (undefined2 *)0x0) {
        return 2;
      }
      if ((*(char *)(param_2 + 1) != '\0') && (*puVar6 = 0, (*(byte *)(param_2 + 1) & 0xfe) != 0)) {
        uVar8 = 1;
        do {
          *(undefined2 *)(param_1[4] + uVar8 * 2) = 0;
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(byte *)(param_2 + 1));
      }
    }
    *(undefined1 *)(param_1 + 9) = 1;
  }
  uVar4 = 0;
  if (param_3 != 0) {
    uVar4 = 48000 / param_3;
  }
  *(uint *)(param_1 + 8) = uVar4;
  fVar10 = (float)NEON_ucvtf(*param_2);
  *(float *)((long)param_1 + 0x54) = fVar10 / (float)param_3;
  iVar2 = param_2[1];
  *(char *)((long)param_1 + 0x5d) = (char)iVar2;
  *(char *)((long)param_1 + 0x5e) = (char)(*(ushort *)(param_2 + 2) >> 6);
  uVar1 = *(ushort *)(param_2 + 2) & 0x3f;
  if (uVar1 == 0x20) {
    uVar4 = iVar2 - 1U & 0xff;
    if (3 < uVar4) {
      uVar7 = 7;
      goto LAB_004d7618;
    }
    uVar9 = 0x6060504;
  }
  else {
    if (uVar1 != 0x10) {
      uVar7 = 0xff;
      goto LAB_004d7618;
    }
    uVar4 = iVar2 - 1U & 0xff;
    if (3 < uVar4) {
      uVar7 = 3;
      goto LAB_004d7618;
    }
    uVar9 = 0x2020100;
  }
  uVar7 = (undefined1)(uVar9 >> (ulong)((uVar4 & 3) << 3));
LAB_004d7618:
  *(undefined1 *)((long)param_1 + 0x5c) = uVar7;
  return 1;
}


