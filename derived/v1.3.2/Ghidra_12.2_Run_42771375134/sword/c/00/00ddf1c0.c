/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ddf1c0; name: FUN_00ddf1c0
 */


void FUN_00ddf1c0(long *param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  int *piVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ushort *puVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  uint uVar17;
  
  if ((*(ushort *)((long)param_4 - (long)(int)*param_4) < 5) ||
     (uVar6 = (ulong)((ushort *)((long)param_4 - (long)(int)*param_4))[2], uVar6 == 0)) {
    lVar7 = 0;
  }
  else {
    puVar11 = (uint *)((long)param_4 + uVar6);
    lVar7 = (long)puVar11 + (ulong)*puVar11;
  }
  FUN_00dbc9a0(param_1,param_2,param_3,lVar7);
  puVar5 = PTR_DAT_0271ec20;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[9] = (long)(puVar5 + 0x250);
  param_1[10] = (long)(puVar5 + 0x290);
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  if (*(ushort *)((long)param_4 - (long)(int)*param_4) < 0xd) {
    uVar13 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_4 - (long)(int)*param_4))[6];
    uVar13 = 0;
    if (uVar6 != 0) {
      uVar13 = *(undefined4 *)((long)param_4 + uVar6);
    }
  }
  *(undefined4 *)(param_1 + 0xa8) = uVar13;
  if (*(ushort *)((long)param_4 - (long)(int)*param_4) < 0xb) {
    uVar13 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_4 - (long)(int)*param_4))[5];
    uVar13 = 0;
    if (uVar6 != 0) {
      uVar13 = *(undefined4 *)((long)param_4 + uVar6);
    }
  }
  *(undefined4 *)((long)param_1 + 0x544) = uVar13;
  uVar13 = 0;
  if ((0xe < *(ushort *)((long)param_4 - (long)(int)*param_4)) &&
     (uVar6 = (ulong)((ushort *)((long)param_4 - (long)(int)*param_4))[7], uVar6 != 0)) {
    uVar13 = *(undefined4 *)((long)param_4 + uVar6);
  }
  *(undefined4 *)(param_1 + 0xa9) = uVar13;
  puVar11 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (6 - (long)(int)*param_4)));
  piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
     (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar6 == 0)) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined4 *)((long)piVar1 + uVar6);
  }
  *(undefined4 *)(param_1 + 0xab) = uVar13;
  puVar11 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (6 - (long)(int)*param_4)));
  piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
  puVar8 = (ushort *)((long)piVar1 - (long)*piVar1);
  uVar14 = 0;
  uVar13 = 0;
  uVar15 = 0;
  uVar17 = 0;
  uVar3 = *puVar8;
  if (6 < uVar3) {
    uVar13 = 0;
    uVar15 = 0;
    if ((ulong)puVar8[3] != 0) {
      uVar15 = *(undefined4 *)((long)piVar1 + (ulong)puVar8[3]);
    }
    if (uVar3 < 9) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      uVar13 = 0;
      if ((ulong)puVar8[4] != 0) {
        uVar13 = *(undefined4 *)((long)piVar1 + (ulong)puVar8[4]);
      }
      if ((10 < uVar3) && ((ulong)puVar8[5] != 0)) {
        uVar17 = *(uint *)((long)piVar1 + (ulong)puVar8[5]);
      }
    }
  }
  fVar16 = 0.0;
  param_1[0xad] = (ulong)uVar17;
  param_1[0xac] = CONCAT44(uVar13,uVar15);
  puVar11 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (6 - (long)(int)*param_4)));
  piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
  if (0x10 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
    uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8];
    fVar16 = 0.0;
    if (uVar6 != 0) {
      fVar16 = *(float *)((long)piVar1 + uVar6) * DAT_01d4bb38;
    }
  }
  fVar16 = fVar16 / DAT_01d4c284;
  uVar13 = 0;
  uVar6 = 0;
  param_1[0xaf] = 0;
  param_1[0xae] = (ulong)(uint)fVar16 << 0x20;
  puVar11 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (6 - (long)(int)*param_4)));
  piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
  puVar8 = (ushort *)((long)piVar1 - (long)*piVar1);
  uVar3 = *puVar8;
  uVar15 = 0;
  if (0x14 < uVar3) {
    uVar15 = 0;
    uVar13 = 0;
    if ((ulong)puVar8[10] != 0) {
      uVar13 = *(undefined4 *)((long)piVar1 + (ulong)puVar8[10]);
    }
    if (uVar3 < 0x17) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      uVar15 = 0;
      if ((ulong)puVar8[0xb] != 0) {
        uVar15 = *(undefined4 *)((long)piVar1 + (ulong)puVar8[0xb]);
      }
      if ((0x18 < uVar3) && ((ulong)puVar8[0xc] != 0)) {
        uVar6 = (ulong)*(uint *)((long)piVar1 + (ulong)puVar8[0xc]);
      }
    }
  }
  param_1[0xb1] = uVar6;
  param_1[0xb0] = CONCAT44(uVar15,uVar13);
  puVar11 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (6 - (long)(int)*param_4)));
  piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
  if ((0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar6 != 0)) {
    uVar14 = *(undefined4 *)((long)piVar1 + uVar6);
  }
  *(undefined4 *)(param_1 + 0xb2) = uVar14;
  param_1[0xa0] = 0;
  param_1[0x98] = -0x340d631b7bddd9bb;
  param_1[0xa4] = 0;
  param_1[0x99] = -0x340d631b7bddd9bb;
  param_1[0x9a] = -0x340d631b7bddd9bb;
  param_1[0xa1] = 0;
  param_1[0xa5] = 0;
  param_1[0x9b] = -0x340d631b7bddd9bb;
  param_1[0x9c] = -0x340d631b7bddd9bb;
  param_1[0xa2] = 0;
  param_1[0xa6] = 0;
  param_1[0x9d] = -0x340d631b7bddd9bb;
  param_1[0x9e] = -0x340d631b7bddd9bb;
  param_1[0xa3] = 0;
  param_1[0xa7] = 0;
  param_1[0x9f] = -0x340d631b7bddd9bb;
  uVar6 = (ulong)(int)*param_4;
  if (((8 < *(ushort *)((long)param_4 - uVar6)) &&
      (uVar9 = (ulong)((ushort *)((long)param_4 - uVar6))[4], uVar9 != 0)) &&
     (uVar10 = (ulong)*(uint *)((long)param_4 + uVar9), (long)((long)param_4 + uVar9) + uVar10 != 0)
     ) {
    lVar2 = uVar9 + uVar10;
    lVar7 = 0;
    uVar9 = 0;
    while( true ) {
      puVar8 = (ushort *)((long)param_4 - (long)(int)uVar6);
      lVar4 = lVar7 + lVar2;
      if (*puVar8 < 9) {
        puVar11 = (uint *)0x0;
      }
      else {
        uVar6 = (ulong)puVar8[4];
        puVar11 = (uint *)0x0;
        if (uVar6 != 0) {
          puVar11 = (uint *)((long)param_4 + uVar6);
          puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
        }
      }
      if ((uint *)((long)param_4 + lVar4 + 4) == puVar11 + (ulong)*puVar11 + 1) break;
      uVar6 = (ulong)*(uint *)((long)param_4 + lVar4 + 4);
      lVar12 = lVar7 + (uVar6 - (long)*(int *)((long)param_4 + lVar7 + uVar6 + lVar2 + 4)) + lVar2;
      if ((*(ushort *)((long)param_4 + lVar12 + 4) < 5) ||
         (uVar10 = (ulong)*(ushort *)((long)param_4 + lVar12 + 8), uVar10 == 0)) {
        lVar12 = 0;
      }
      else {
        lVar12 = *(long *)((long)param_4 + lVar7 + uVar6 + uVar10 + lVar2 + 4);
      }
      param_1[uVar9 + 0x98] = lVar12;
      uVar6 = (ulong)*(uint *)((long)param_4 + lVar4 + 4);
      lVar12 = lVar7 + (uVar6 - (long)*(int *)((long)param_4 + lVar7 + uVar6 + lVar2 + 4)) + lVar2;
      if (*(ushort *)((long)param_4 + lVar12 + 4) < 7) {
        uVar13 = 0;
      }
      else {
        uVar10 = (ulong)*(ushort *)((long)param_4 + lVar12 + 10);
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = *(undefined4 *)((long)param_4 + lVar7 + uVar6 + uVar10 + lVar2 + 4);
        }
      }
      *(undefined4 *)((long)param_1 + lVar7 + 0x500) = uVar13;
      uVar6 = (ulong)*(uint *)((long)param_4 + lVar4 + 4);
      lVar4 = lVar7 + (uVar6 - (long)*(int *)((long)param_4 + lVar7 + uVar6 + lVar2 + 4)) + lVar2;
      if ((*(ushort *)((long)param_4 + lVar4 + 4) < 9) ||
         (uVar10 = (ulong)*(ushort *)((long)param_4 + lVar4 + 0xc), uVar10 == 0)) {
        *(undefined4 *)((long)param_1 + lVar7 + 0x520) = 0;
      }
      else {
        *(undefined4 *)((long)param_1 + lVar7 + 0x520) =
             *(undefined4 *)((long)param_4 + lVar7 + uVar6 + uVar10 + lVar2 + 4);
      }
      if (6 < uVar9) break;
      uVar6 = (ulong)*param_4;
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 4;
    }
  }
  param_1[0xaa] = 0;
  return;
}


