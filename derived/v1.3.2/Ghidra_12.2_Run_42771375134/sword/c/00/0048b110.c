/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048b110; name: FUN_0048b110
 */


void FUN_0048b110(long *param_1,long param_2,undefined8 param_3,long param_4,long *param_5,
                 int param_6)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined1 auStack_70 [8];
  undefined4 local_68;
  
  puVar5 = PTR_DAT_027132a8;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[2] = (long)(PTR_DAT_027132b0 + 0x10);
  FUN_0044e680(param_1 + 3,*(undefined8 *)(param_2 + 0x10),param_3,
               *(byte *)(param_2 + 0x188) >> 2 & 1);
  FUN_004a57a0(param_1 + 0x2e);
  puVar5 = PTR_DAT_027132b8;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[2] = (long)(puVar5 + 0xe8);
  param_1[3] = (long)(puVar5 + 0x100);
  *(undefined4 *)(param_1 + 0x3b) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)((long)param_1 + 0x1cc) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)((long)param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x30);
  piVar9 = *(int **)(param_2 + 0x20);
  if (piVar9 != (int *)0x0) {
    *piVar9 = *piVar9 + 1;
  }
  *(int **)((long)param_1 + 0x1c4) = piVar9;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  lVar13 = *(long *)(param_2 + 8);
  param_1[0x3e] = lVar13;
  param_1[0x3f] = param_4;
  param_1[0x40] = 0;
  *(undefined4 *)((long)param_1 + 0x20c) = 0;
  *(undefined8 *)((long)param_1 + 0x214) = 0x3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0x21c) = 0x3f800000;
  bVar3 = *(byte *)((long)param_1 + 0x26f);
  *(undefined2 *)(param_1 + 0x4d) = 1;
  *(int *)((long)param_1 + 0x264) = param_6;
  *(byte *)((long)param_1 + 0x26a) = *(byte *)((long)param_1 + 0x26a) & 0x80;
  puVar1 = (uint *)((long)param_1 + 0x26b);
  uVar2 = (uint)(param_6 != 0) << 0x16;
  *puVar1 = *puVar1 & 0xe0000000 | uVar2 | 0x220000;
  uVar10 = (*(byte *)(param_2 + 0x188) >> 3 & 1) << 0x1d;
  *(byte *)((long)param_1 + 0x26f) = bVar3 & 0xfe;
  *puVar1 = uVar2 | 0x220000 | uVar10;
  uVar10 = uVar2 | 0x220000 | uVar10;
  bVar3 = bVar3 & 0xfc | (byte)(((ulong)(*(byte *)(param_2 + 0x188) >> 1 & 1) << 0x21) >> 0x20);
  *puVar1 = uVar10;
  *(byte *)((long)param_1 + 0x26f) = bVar3;
  *(int *)(param_1 + 0x50) = (int)param_5[2];
  param_1[0x4f] = param_5[1];
  param_1[0x4e] = *param_5;
  *(undefined4 *)((long)param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x51) = *(undefined4 *)(param_2 + 0x84);
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  uVar2 = *(uint *)(param_2 + 0x98);
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0xffffffff;
  *(uint *)((long)param_1 + 0x29c) = uVar2;
  iVar11 = *(int *)(param_2 + 0x90);
  if (iVar11 == 0) {
    iVar11 = *(int *)PTR_DAT_02713070;
    *(int *)PTR_DAT_02713070 = iVar11 + 1;
  }
  else {
    *(byte *)((long)param_1 + 0x26f) = bVar3;
    *puVar1 = uVar10 | 0x4000000;
  }
  puVar5 = PTR_DAT_027132c0;
  *(int *)(param_1 + 0x4f) = iVar11;
  iVar11 = *(int *)puVar5;
  *(int *)puVar5 = iVar11 + 1;
  *(int *)((long)param_1 + 0x274) = iVar11;
  *(undefined4 *)((long)param_1 + 0x20c) = 0x4101;
  memcpy(param_1 + 0x44,(void *)(param_2 + 0x38),0x44);
  uVar10 = (uVar2 & 0xff) - 0x80;
  uVar4 = (undefined1)(uVar2 >> 8);
  if ((uVar10 < 0x21) && ((1L << ((ulong)uVar10 & 0x3f) & 0x100010001U) != 0)) {
    *(undefined1 *)(param_1 + 8) = uVar4;
    *(char *)(param_1 + 9) = (char)(uVar2 >> 0x10);
  }
  else {
    *(undefined1 *)(param_1 + 8) = uVar4;
    *(undefined1 *)(param_1 + 9) = 0xff;
    if ((uVar2 & 0xff) == 0) {
      *(int *)(param_1 + 6) = (int)param_1[0x3b];
      param_1[10] = (long)param_1;
      lVar13 = *(long *)(param_2 + 0xa0);
      param_1[0x54] = lVar13;
      goto joined_r0x0048b434;
    }
  }
  if (lVar13 != 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(lVar13 + 0x10);
  }
  param_1[10] = (long)param_1;
  *(int *)(param_1 + 6) = (int)param_1[0x3b];
  if (((uVar2 & 0xff) == 0x90) && (uVar2 >> 0x18 != 0)) {
    memcpy(auStack_70,param_1 + 5,0x30);
    local_68 = 0;
    FUN_0049ec70((float)(uVar2 >> 0x18),*(undefined8 *)PTR_DAT_02712b50,0x81,auStack_70);
  }
  lVar13 = *(long *)(param_2 + 0xa0);
  param_1[0x54] = lVar13;
joined_r0x0048b434:
  if (lVar13 == 0) {
    return;
  }
  FUN_004c4840();
  uVar6 = FUN_0047f3a0(param_1[0x2c]);
  lVar13 = param_1[0x54];
  puVar12 = (undefined8 *)(lVar13 + 0x50);
  puVar7 = (undefined8 *)*puVar12;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x18);
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    *puVar7 = *puVar12;
    *puVar12 = puVar7;
    puVar8 = *(undefined8 **)(lVar13 + 0x48);
  }
  else {
    puVar8 = *(undefined8 **)(lVar13 + 0x48);
  }
  if (puVar8 == (undefined8 *)0x0) {
    *(undefined8 **)(lVar13 + 0x40) = puVar7;
  }
  else {
    *puVar8 = puVar7;
    puVar7 = (undefined8 *)*puVar12;
  }
  *(undefined8 **)(lVar13 + 0x48) = puVar7;
  *(undefined8 *)(lVar13 + 0x50) = *puVar7;
  *puVar7 = 0;
  *(int *)(lVar13 + 100) = *(int *)(lVar13 + 100) + 1;
  lVar13 = *(long *)(lVar13 + 0x48);
  *(undefined4 *)(lVar13 + 8) = uVar6;
  *(long **)(lVar13 + 0x10) = param_1;
  return;
}


