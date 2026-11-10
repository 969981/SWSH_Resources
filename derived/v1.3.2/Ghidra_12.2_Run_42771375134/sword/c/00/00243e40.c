/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00243e40; name: FUN_00243e40
 */


/* WARNING: Removing unreachable block (ram,0x00243ebc) */

void FUN_00243e40(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  bool bVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  byte bVar15;
  float fVar13;
  int iVar14;
  float fVar16;
  int iVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint local_264;
  uint auStack_260 [128];
  
  uVar19 = *param_2;
  fVar22 = *(float *)(param_2 + 1);
  uVar23 = *param_3;
  uVar10 = *(uint *)(param_1 + 0x44);
  fVar18 = *(float *)(param_3 + 1);
  lVar9 = *(long *)(param_1 + 0x58);
  uVar6 = uVar10 - 1;
  if ((int)uVar6 < 0) {
    lVar7 = 0;
    goto LAB_00243f18;
  }
  if (uVar10 == 1) {
    lVar7 = 0;
    iVar14 = 0;
LAB_00243f08:
    auStack_260[lVar7 + 1] = iVar14 * 0x70;
  }
  else {
    lVar7 = 0;
    puVar8 = auStack_260;
    uVar3 = uVar10 * 0x70;
    do {
      puVar8 = puVar8 + 2;
      lVar7 = lVar7 + 2;
      puVar8[-1] = uVar3 - 0x70;
      *puVar8 = uVar3 - 0xe0;
      uVar3 = uVar3 - 0xe0;
    } while ((ulong)uVar10 - ((ulong)uVar10 & 1) != lVar7);
    iVar14 = uVar6 - (int)lVar7;
    if ((uVar10 & 1) != 0) goto LAB_00243f08;
  }
  lVar7 = (ulong)uVar6 + 1;
LAB_00243f18:
  fVar20 = (float)uVar19;
  fVar21 = (float)((ulong)uVar19 >> 0x20);
  fVar13 = (float)uVar23;
  fVar16 = (float)((ulong)uVar23 >> 0x20);
  uVar10 = 0;
  bVar2 = true;
  do {
    lVar11 = lVar7 + -1;
    uVar6 = uVar10;
    if (!bVar2) {
      uVar6 = auStack_260[lVar7];
    }
    puVar1 = (undefined8 *)(lVar9 + (ulong)uVar6);
    local_264 = *(uint *)(puVar1 + 0xc) & 0xfffffffe;
    uVar19 = puVar1[1];
    uVar23 = puVar1[3];
    uVar24 = puVar1[5];
    uVar25 = puVar1[7];
    uVar26 = puVar1[9];
    uVar27 = puVar1[0xb];
    bVar15 = -(fVar16 < (float)((ulong)puVar1[2] >> 0x20)) |
             -(fVar13 < (float)((ulong)*puVar1 >> 0x20)) |
             -(fVar18 < (float)((ulong)puVar1[4] >> 0x20)) |
             -((float)((ulong)puVar1[6] >> 0x20) < fVar20) |
             -((float)((ulong)puVar1[8] >> 0x20) < fVar21) |
             -((float)((ulong)puVar1[10] >> 0x20) < fVar22);
    iVar14 = (uint)CONCAT12(bVar15,(ushort)(byte)(-(fVar16 < (float)puVar1[2]) |
                                                  -(fVar13 < (float)*puVar1) |
                                                  -(fVar18 < (float)puVar1[4]) |
                                                  -((float)puVar1[6] < fVar20) |
                                                  -((float)puVar1[8] < fVar21) |
                                                 -((float)puVar1[10] < fVar22))) << 0x1f;
    iVar17 = (uint)bVar15 << 0x1f;
    if (iVar14 < 0) {
      bVar2 = false;
      lVar7 = lVar11;
LAB_00244050:
      local_264 = *(uint *)((long)puVar1 + 100) & 0xfffffffe;
      if (-1 < iVar17) {
        if ((*(uint *)((long)puVar1 + 100) & 1) == 0) {
          auStack_260[lVar7 + 1] = local_264;
          lVar7 = lVar7 + 1;
          bVar2 = true;
          uVar10 = local_264;
LAB_002440c4:
          iVar12 = 0;
        }
        else {
          iVar12 = 1;
          uVar5 = (**(code **)*param_6)(param_6,1,&local_264);
          if ((uVar5 & 1) != 0) goto LAB_002440c4;
        }
        if ((iVar12 != 9) && (iVar12 != 0)) goto LAB_002441e4;
      }
      local_264 = *(uint *)(puVar1 + 0xd) & 0xfffffffe;
      if (-1 < (int)((uint)(byte)(-(fVar16 < (float)uVar23) | -(fVar13 < (float)uVar19) |
                                  -(fVar18 < (float)uVar24) | -((float)uVar25 < fVar20) |
                                  -((float)uVar26 < fVar21) | -((float)uVar27 < fVar22)) << 0x1f)) {
        if ((*(uint *)(puVar1 + 0xd) & 1) == 0) {
          auStack_260[lVar7 + 1] = local_264;
          lVar7 = lVar7 + 1;
          bVar2 = true;
          uVar10 = local_264;
LAB_0024414c:
          iVar12 = 0;
        }
        else {
          iVar12 = 1;
          uVar5 = (**(code **)*param_6)(param_6,1,&local_264);
          if ((uVar5 & 1) != 0) goto LAB_0024414c;
        }
        if ((iVar12 != 9) && (iVar12 != 0)) goto LAB_002441e4;
      }
      local_264 = *(uint *)((long)puVar1 + 0x6c) & 0xfffffffe;
      if (-1 < (int)((uint)(byte)-(((((fVar13 < (float)((ulong)uVar19 >> 0x20) ||
                                      fVar16 < (float)((ulong)uVar23 >> 0x20)) ||
                                     fVar18 < (float)((ulong)uVar24 >> 0x20)) ||
                                    (float)((ulong)uVar25 >> 0x20) < fVar20) ||
                                   (float)((ulong)uVar26 >> 0x20) < fVar21) ||
                                  (float)((ulong)uVar27 >> 0x20) < fVar22) << 0x1f)) {
        if ((*(uint *)((long)puVar1 + 0x6c) & 1) == 0) {
          auStack_260[lVar7 + 1] = local_264;
          lVar7 = lVar7 + 1;
          bVar2 = true;
          uVar10 = local_264;
LAB_002441cc:
          iVar12 = 0;
        }
        else {
          iVar12 = 1;
          uVar5 = (**(code **)*param_6)
                            (CONCAT44(iVar17 >> 0x1f,iVar14 >> 0x1f),param_6,1,&local_264);
          if ((uVar5 & 1) != 0) goto LAB_002441cc;
        }
        if ((iVar12 != 9) && (iVar12 != 0)) goto LAB_002441e4;
      }
      iVar12 = 0;
    }
    else {
      if ((*(uint *)(puVar1 + 0xc) & 1) == 0) {
        auStack_260[lVar7] = local_264;
        lVar11 = lVar7;
        bVar4 = true;
        uVar10 = local_264;
LAB_00244038:
        bVar2 = bVar4;
        iVar12 = 0;
        lVar7 = lVar11;
      }
      else {
        iVar12 = 1;
        uVar5 = (**(code **)*param_6)(param_6,1,&local_264);
        bVar2 = false;
        lVar7 = lVar11;
        bVar4 = false;
        if ((uVar5 & 1) != 0) goto LAB_00244038;
      }
      if ((iVar12 == 9) || (iVar12 == 0)) goto LAB_00244050;
    }
LAB_002441e4:
    if ((lVar7 < 1) || (iVar12 != 0)) {
      return;
    }
  } while( true );
}


