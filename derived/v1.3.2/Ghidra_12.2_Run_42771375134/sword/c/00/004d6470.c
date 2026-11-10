/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d6470; name: FUN_004d6470
 */


/* WARNING: Removing unreachable block (ram,0x004d65b4) */

void FUN_004d6470(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  float fVar5;
  int iVar6;
  ulong uVar7;
  void *pvVar8;
  size_t __n;
  long lVar9;
  void *__src;
  uint uVar10;
  undefined4 uVar11;
  ushort uVar12;
  float fVar13;
  
  if (*(int *)(param_2 + 6) == 0x11) {
    *(undefined1 *)(param_1 + 0xf0) = 1;
  }
  pvVar8 = (void *)(param_1 + 0x70);
  if (*(short *)(param_1 + 0x82) == 0) {
    if ((*(short *)((long)param_2 + 0x12) == 0) && (*(int *)(param_2 + 6) == 0x2d)) {
      iVar6 = 0x2b;
      goto LAB_004d6814;
    }
    memcpy(pvVar8,param_2,0x35);
    lVar9 = *(long *)(param_1 + 0xa8);
  }
  else {
    lVar9 = *(long *)(param_1 + 0xa8);
  }
  if (lVar9 == 0) {
    iVar6 = FUN_00490530(param_1 + 0xa8,*(undefined4 *)(param_1 + 0x54),
                         *(undefined4 *)(param_1 + 0x78));
    if (iVar6 != 1) {
      iVar6 = 2;
      goto LAB_004d6814;
    }
    if (*(char *)(param_1 + 0xf2) != '\0') {
      fVar13 = *(float *)(*(long *)(param_1 + 0xe8) + 0x214);
      fVar5 = (float)NEON_ucvtf((uint)*(ushort *)PTR_DAT_02712ac0);
      fVar13 = ((float)*(int *)(*(long *)(param_1 + 0xe8) + 0x288) + fVar5 * fVar13) / fVar13;
      uVar12 = 0x3f00;
      if (fVar13 <= 0.0) {
        uVar12 = 0xbf00;
      }
      uVar10 = (uint)((float)((uint)uVar12 << 0x10) + fVar13);
      if (0 < (int)uVar10) {
        uVar7 = FUN_004d7240(param_1 + 0x10);
        if ((uVar7 & 1) != 0) {
          pvVar8 = *(void **)(param_1 + 0xa8);
          __n = (ulong)(*(byte *)(param_1 + 0xb0) * uVar10) << 2;
LAB_004d661c:
                    /* WARNING: Subroutine does not return */
          memset(pvVar8,0,__n);
        }
        if (*(char *)(param_1 + 0xb0) != '\0') {
          __n = (ulong)uVar10 << 2;
          if (*(char *)(param_1 + 0xb0) != '\x01') {
                    /* WARNING: Subroutine does not return */
            memset(*(void **)(param_1 + 0xa8),0,__n);
          }
          pvVar8 = *(void **)(param_1 + 0xa8);
          goto LAB_004d661c;
        }
        *(uint *)(param_1 + 0x3c) = uVar10;
      }
      *(undefined1 *)(param_1 + 0xf2) = 0;
    }
  }
  __src = (void *)(param_1 + 0xa8);
  lVar9 = *(long *)(param_1 + 0xe8);
  puVar1 = (uint *)(lVar9 + 0x26b);
  if (((*puVar1 >> 0x16 & 1) == 0) && (iVar6 = *(int *)(lVar9 + 0x264), iVar6 != 0)) {
    uVar12 = *(ushort *)(param_1 + 0x82);
    if ((int)(uint)uVar12 <= iVar6) {
      *(uint *)(lVar9 + 0x264) = iVar6 - (uint)uVar12;
      *(undefined1 *)(lVar9 + 0x26f) = *(undefined1 *)(lVar9 + 0x26f);
      *puVar1 = *puVar1 & 0xfe3fffff;
      *(undefined2 *)(param_1 + 0x82) = 0;
      *(undefined2 *)((long)param_2 + 0x12) = 0;
      (**(code **)(**(long **)(param_1 + 8) + 0x18))();
      FUN_004904f0(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0x7c) = 0x2b;
      *(undefined8 *)(param_1 + 0x90) = 0x3f800000ffffffff;
      *(undefined8 *)(param_1 + 0x98) = 0x1ffffffff;
      *param_2 = 0;
      *(undefined2 *)((long)param_2 + 0x14) = 0;
      param_2[3] = 0;
      iVar6 = 0x2b;
      if (*(char *)(param_1 + 0xf0) != '\0') {
        iVar6 = 0x11;
      }
      goto LAB_004d6814;
    }
    *(int *)(param_1 + 0x38) = iVar6;
    *(ushort *)(param_1 + 0x82) = uVar12 - (short)iVar6;
    *(undefined4 *)(lVar9 + 0x264) = 0;
    *puVar1 = *puVar1 & 0xfe3fffff;
  }
  iVar2 = *(int *)(param_1 + 0x38);
  sVar4 = *(short *)(param_1 + 0x82);
  lVar9 = param_1 + 0x10;
  iVar6 = FUN_004d7660(lVar9,pvVar8,__src);
  FUN_004d6210(pvVar8,__src,iVar2,sVar4 - *(short *)(param_1 + 0x82));
  iVar3 = *(int *)(param_1 + 0x90);
  if ((iVar3 != -1) && (*(char *)(param_1 + 0xf1) == '\0')) {
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x98);
    *(int *)(param_1 + 200) = iVar3 + iVar2;
    *(undefined1 *)(param_1 + 0xf1) = 1;
  }
  uVar11 = FUN_004d6e60(lVar9);
  *(undefined4 *)(param_1 + 0xcc) = uVar11;
  if (*(short *)(param_1 + 0x82) == 0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x18))();
    FUN_004904f0(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x7c) = 0x2b;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0x3f800000ffffffff;
    *(undefined8 *)(param_1 + 0x98) = 0x1ffffffff;
    *param_2 = 0;
    *(undefined2 *)((long)param_2 + 0x14) = 0;
    param_2[3] = 0;
    if (*(char *)(param_1 + 0xf0) == '\0') goto LAB_004d66f8;
    if (*(long *)(*(long *)(param_1 + 0xe0) + 0x78) != 0) {
      iVar6 = FUN_004d6840(param_1);
      if (iVar6 == 0x2d) goto LAB_004d67ec;
      goto LAB_004d6700;
    }
    iVar6 = 0x11;
  }
  else {
LAB_004d66f8:
    if (iVar6 != 0x2d) {
LAB_004d6700:
      if (iVar6 != 0x11) goto LAB_004d6814;
    }
  }
LAB_004d67ec:
  uVar7 = FUN_004d7240(lVar9);
  if ((uVar7 & 1) != 0) {
    FUN_004d7400(lVar9,__src);
  }
  memcpy(param_2,__src,0x30);
LAB_004d6814:
  *(int *)(param_2 + 6) = iVar6;
  return;
}


