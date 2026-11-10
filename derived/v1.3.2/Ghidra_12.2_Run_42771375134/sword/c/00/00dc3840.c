/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc3840; name: FUN_00dc3840
 */


void FUN_00dc3840(long *param_1,long param_2,undefined8 param_3,uint *param_4)

{
  ushort uVar1;
  undefined *puVar2;
  ulong uVar3;
  ushort *puVar4;
  long lVar5;
  uint *puVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  
  if ((*(ushort *)((long)param_4 - (long)(int)*param_4) < 5) ||
     (uVar3 = (ulong)((ushort *)((long)param_4 - (long)(int)*param_4))[2], uVar3 == 0)) {
    lVar5 = 0;
  }
  else {
    puVar6 = (uint *)((long)param_4 + uVar3);
    lVar5 = (long)puVar6 + (ulong)*puVar6;
  }
  FUN_00db5850(param_1,param_2,param_3,lVar5);
  puVar2 = PTR_DAT_0271e900;
  *param_1 = (long)(PTR_DAT_0271e900 + 0x10);
  param_1[9] = (long)(puVar2 + 0x1a0);
  param_1[10] = (long)(puVar2 + 0x1e0);
  if (*(ushort *)((long)param_4 - (long)(int)*param_4) < 7) {
    piVar7 = (int *)0x0;
  }
  else {
    uVar3 = (ulong)((ushort *)((long)param_4 - (long)(int)*param_4))[3];
    piVar7 = (int *)0x0;
    if (uVar3 != 0) {
      puVar6 = (uint *)((long)param_4 + uVar3);
      piVar7 = (int *)((long)puVar6 + (ulong)*puVar6);
    }
  }
  if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 5) ||
     (uVar3 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar3 == 0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined4 *)((long)piVar7 + uVar3);
  }
  *(undefined4 *)(param_1 + 0x74) = uVar12;
  puVar4 = (ushort *)((long)param_4 - (long)(int)*param_4);
  if (*puVar4 < 7) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)0x0;
    if ((ulong)puVar4[3] != 0) {
      puVar6 = (uint *)((long)param_4 + (ulong)puVar4[3]);
      piVar7 = (int *)((long)puVar6 + (ulong)*puVar6);
    }
  }
  uVar12 = 0;
  uVar13 = 0;
  if (6 < *(ushort *)((long)piVar7 - (long)*piVar7)) {
    uVar3 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3];
    uVar13 = 0;
    if (uVar3 != 0) {
      uVar13 = *(undefined4 *)((long)piVar7 + uVar3);
    }
  }
  piVar7 = (int *)((long)((long)param_4 + (ulong)puVar4[3]) +
                  (ulong)*(uint *)((long)param_4 + (ulong)puVar4[3]));
  puVar4 = (ushort *)((long)piVar7 - (long)*piVar7);
  uVar17 = 0;
  uVar16 = 0;
  if (8 < *puVar4) {
    uVar16 = 0;
    uVar17 = 0;
    if ((ulong)puVar4[4] != 0) {
      uVar17 = *(undefined4 *)((long)piVar7 + (ulong)puVar4[4]);
    }
    if ((10 < *puVar4) && ((ulong)puVar4[5] != 0)) {
      uVar16 = *(uint *)((long)piVar7 + (ulong)puVar4[5]);
    }
  }
  fVar14 = 0.0;
  param_1[0x77] = (ulong)uVar16;
  param_1[0x76] = CONCAT44(uVar17,uVar13);
  puVar6 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (6 - (long)(int)*param_4)));
  piVar7 = (int *)((long)puVar6 + (ulong)*puVar6);
  if (0x10 < *(ushort *)((long)piVar7 - (long)*piVar7)) {
    uVar3 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[8];
    fVar14 = 0.0;
    if (uVar3 != 0) {
      fVar14 = *(float *)((long)piVar7 + uVar3);
    }
  }
  fVar14 = (fVar14 * DAT_01d4bb38) / DAT_01d4c284;
  uVar13 = 0;
  uVar16 = 0;
  param_1[0x79] = 0;
  param_1[0x78] = (ulong)(uint)fVar14 << 0x20;
  puVar6 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (6 - (long)(int)*param_4)));
  piVar7 = (int *)((long)puVar6 + (ulong)*puVar6);
  puVar4 = (ushort *)((long)piVar7 - (long)*piVar7);
  uVar1 = *puVar4;
  uVar17 = 0;
  if (0x14 < uVar1) {
    uVar17 = 0;
    uVar13 = 0;
    if ((ulong)puVar4[10] != 0) {
      uVar13 = *(undefined4 *)((long)piVar7 + (ulong)puVar4[10]);
    }
    if (uVar1 < 0x17) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      uVar17 = 0;
      if ((ulong)puVar4[0xb] != 0) {
        uVar17 = *(undefined4 *)((long)piVar7 + (ulong)puVar4[0xb]);
      }
      if ((0x18 < uVar1) && ((ulong)puVar4[0xc] != 0)) {
        uVar16 = *(uint *)((long)piVar7 + (ulong)puVar4[0xc]);
      }
    }
  }
  uVar15 = 0;
  param_1[0x7b] = (ulong)uVar16;
  param_1[0x7a] = CONCAT44(uVar17,uVar13);
  puVar6 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (6 - (long)(int)*param_4)));
  piVar7 = (int *)((long)puVar6 + (ulong)*puVar6);
  if (0xc < *(ushort *)((long)piVar7 - (long)*piVar7)) {
    uVar3 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[6];
    uVar15 = 0;
    if (uVar3 != 0) {
      uVar15 = *(undefined4 *)((long)piVar7 + uVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar15;
  puVar4 = (ushort *)((long)param_4 - (long)(int)*param_4);
  uVar1 = *puVar4;
  uVar17 = 0;
  uVar13 = 0;
  uVar16 = 0;
  if (10 < uVar1) {
    uVar17 = 0;
    uVar13 = 0;
    if ((ulong)puVar4[5] != 0) {
      uVar13 = *(undefined4 *)((long)param_4 + (ulong)puVar4[5]);
    }
    if (uVar1 < 0xd) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      uVar17 = 0;
      if ((ulong)puVar4[6] != 0) {
        uVar17 = *(undefined4 *)((long)param_4 + (ulong)puVar4[6]);
      }
      if ((0xe < uVar1) && ((ulong)puVar4[7] != 0)) {
        uVar16 = *(uint *)((long)param_4 + (ulong)puVar4[7]);
      }
    }
  }
  uVar15 = 0;
  param_1[0x7f] = (ulong)uVar16;
  param_1[0x7e] = CONCAT44(uVar17,uVar13);
  if (8 < *(ushort *)((long)param_4 - (long)(int)*param_4)) {
    uVar3 = (ulong)((ushort *)((long)param_4 - (long)(int)*param_4))[4];
    uVar15 = 0;
    if (uVar3 != 0) {
      uVar15 = *(undefined4 *)((long)param_4 + uVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x80) = uVar15;
  puVar4 = (ushort *)((long)param_4 - (long)(int)*param_4);
  uVar1 = *puVar4;
  uVar13 = 0;
  uVar3 = 0;
  if (0x16 < uVar1) {
    uVar12 = 0;
    uVar13 = 0;
    if ((ulong)puVar4[0xb] != 0) {
      uVar13 = *(undefined4 *)((long)param_4 + (ulong)puVar4[0xb]);
    }
    if (uVar1 < 0x19) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      uVar12 = 0;
      if ((ulong)puVar4[0xc] != 0) {
        uVar12 = *(undefined4 *)((long)param_4 + (ulong)puVar4[0xc]);
      }
      if ((0x1a < uVar1) && ((ulong)puVar4[0xd] != 0)) {
        uVar3 = (ulong)*(uint *)((long)param_4 + (ulong)puVar4[0xd]);
      }
    }
  }
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x83] = uVar3;
  param_1[0x82] = CONCAT44(uVar12,uVar13);
  param_1[0x84] = 0;
  param_1[0x88] = param_2;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  lVar5 = 0;
  if ((0x1c < *(ushort *)((long)param_4 - (long)(int)*param_4)) &&
     (uVar3 = (ulong)((ushort *)((long)param_4 - (long)(int)*param_4))[0xe], lVar5 = 0, uVar3 != 0))
  {
    lVar5 = *(long *)((long)param_4 + uVar3);
  }
  param_1[0x8b] = lVar5;
  puVar2 = PTR_DAT_02710860;
  uVar3 = (ulong)(int)*param_4;
  if (*(ushort *)((long)param_4 - uVar3) < 0x15) {
    lVar5 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)param_4 - uVar3))[10];
    lVar5 = 0;
    if (uVar8 != 0) {
      puVar6 = (uint *)((long)param_4 + uVar8);
      lVar5 = (long)puVar6 + (ulong)*puVar6;
    }
  }
  lVar5 = lVar5 + 0xc;
  while( true ) {
    puVar4 = (ushort *)((long)param_4 - (long)(int)uVar3);
    if (*puVar4 < 0x15) {
      puVar6 = (uint *)0x0;
    }
    else {
      uVar3 = (ulong)puVar4[10];
      puVar6 = (uint *)0x0;
      if (uVar3 != 0) {
        puVar6 = (uint *)((long)param_4 + uVar3);
        puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
      }
    }
    if ((uint *)(lVar5 + -8) == puVar6 + (ulong)*puVar6 + 1) break;
    uVar3 = (ulong)*(uint *)(lVar5 + -8);
    lVar9 = lVar5 + (uVar3 - (long)*(int *)(lVar5 + uVar3 + -8));
    local_68 = 0;
    if ((4 < *(ushort *)(lVar9 + -8)) &&
       (uVar8 = (ulong)*(ushort *)(lVar9 + -4), local_68 = 0, uVar8 != 0)) {
      local_68 = *(undefined8 *)(lVar5 + uVar3 + uVar8 + -8);
    }
    uVar3 = (ulong)*(uint *)(lVar5 + -8);
    lVar9 = lVar5 + (uVar3 - (long)*(int *)(lVar5 + uVar3 + -8));
    if ((*(ushort *)(lVar9 + -8) < 7) || (uVar8 = (ulong)*(ushort *)(lVar9 + -2), uVar8 == 0)) {
      local_60 = 0;
    }
    else {
      local_60 = *(undefined8 *)(lVar5 + uVar3 + uVar8 + -8);
    }
    uVar3 = (ulong)*(uint *)(lVar5 + -8);
    lVar9 = uVar3 - (long)*(int *)(lVar5 + uVar3 + -8);
    if ((*(ushort *)(lVar5 + lVar9 + -8) < 9) ||
       (uVar8 = (ulong)*(ushort *)(lVar5 + lVar9), uVar8 == 0)) {
      local_58 = 0;
    }
    else {
      local_58 = *(undefined4 *)(lVar5 + uVar3 + uVar8 + -8);
    }
    puVar10 = (undefined8 *)param_1[0x86];
    if (puVar10 == (undefined8 *)param_1[0x87]) {
      FUN_00dc4d10(param_1 + 0x85,&local_68);
    }
    else {
      lVar11 = param_1[0x88];
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar11;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      *puVar10 = local_68;
      puVar10[1] = local_60;
      puVar10[2] = CONCAT44(uStack_54,local_58);
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      param_1[0x86] = param_1[0x86] + 0x18;
    }
    uVar3 = (ulong)*param_4;
    lVar5 = lVar5 + 4;
  }
  return;
}


