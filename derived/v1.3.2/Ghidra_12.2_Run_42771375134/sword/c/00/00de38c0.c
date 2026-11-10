/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de38c0; name: FUN_00de38c0
 */


void FUN_00de38c0(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  char *pcVar1;
  uint *puVar2;
  byte bVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  size_t sVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ushort *puVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  undefined1 auVar28 [16];
  undefined8 local_70;
  ulong uStack_68;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar10 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar10 == 0)) {
    lVar8 = 0;
  }
  else {
    puVar2 = (uint *)((long)param_4 + uVar10);
    lVar8 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_00db5850(param_1,param_2,param_3,lVar8);
  puVar7 = PTR_DAT_0271ec68;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  *param_1 = (long)(puVar7 + 0x10);
  param_1[9] = (long)(puVar7 + 0x198);
  param_1[10] = (long)(puVar7 + 0x1d8);
  puVar7 = PTR_DAT_02710860;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
     (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) {
    lVar8 = FUN_0075ecb0();
  }
  uVar16 = 0xcbf29ce484222645;
  param_1[0x77] = lVar8;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x7f] = -0x340d631b7bddd9bb;
  param_1[0x80] = (long)&DAT_01d38550;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x83] = -0x340d631b7bddd9bb;
  param_1[0x84] = (long)&DAT_01d38550;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  puVar14 = (ushort *)((long)param_4 - (long)*param_4);
  uVar10 = (ulong)puVar14[3];
  uVar12 = (ulong)*(uint *)((long)param_4 + uVar10);
  if (*(int *)((long)((long)param_4 + uVar10) + uVar12) != 0) {
    uVar17 = 0;
    piVar18 = param_4 + 3;
    do {
      lVar8 = uVar10 + uVar12 + (ulong)*(uint *)((long)piVar18 + uVar10 + uVar12 + -8);
      lVar13 = lVar8 - *(int *)((long)piVar18 + lVar8 + -8);
      uVar4 = *(ushort *)((long)piVar18 + lVar13 + -8);
      uVar22 = 0;
      uVar20 = 0;
      uVar27 = 0;
      if (4 < uVar4) {
        uVar10 = (ulong)*(ushort *)((long)piVar18 + lVar13 + -4);
        uVar20 = 0;
        if (uVar10 != 0) {
          uVar20 = *(undefined4 *)((long)piVar18 + lVar8 + uVar10 + -8);
        }
        if (uVar4 < 7) {
          uVar22 = 0;
        }
        else {
          uVar10 = (ulong)*(ushort *)((long)piVar18 + lVar13 + -2);
          uVar22 = 0;
          if (uVar10 != 0) {
            uVar22 = *(undefined4 *)((long)piVar18 + lVar8 + uVar10 + -8);
          }
          if ((8 < uVar4) && ((ulong)*(ushort *)((long)piVar18 + lVar13) != 0)) {
            uVar27 = *(uint *)((long)piVar18 +
                              lVar8 + (ulong)*(ushort *)((long)piVar18 + lVar13) + -8);
            goto LAB_00de3a84;
          }
        }
        uVar27 = 0;
      }
LAB_00de3a84:
      local_70 = CONCAT44(uVar22,uVar20);
      uStack_68 = (ulong)uVar27;
      puVar19 = (undefined8 *)param_1[0x75];
      if (puVar19 == (undefined8 *)param_1[0x76]) {
        FUN_01593270(param_1 + 0x74,&local_70);
      }
      else {
        lVar13 = param_1[0x77];
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
        if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar13;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        puVar19[1] = uStack_68;
        *puVar19 = local_70;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        param_1[0x75] = param_1[0x75] + 0x10;
      }
      puVar14 = (ushort *)((long)param_4 - (long)*param_4);
      uVar10 = (ulong)puVar14[3];
      uVar12 = (ulong)*(uint *)((long)param_4 + uVar10);
      uVar17 = uVar17 + 1;
      piVar18 = piVar18 + 1;
    } while (uVar17 < *(uint *)((long)((long)param_4 + uVar10) + uVar12));
  }
  fVar21 = 0.0;
  if ((0xc < *puVar14) && ((ulong)puVar14[6] != 0)) {
    fVar21 = *(float *)((long)param_4 + (ulong)puVar14[6]);
  }
  puVar19 = (undefined8 *)param_1[0x74];
  *(float *)(param_1 + 0x7a) = fVar21;
  if (param_1[0x75] - (long)puVar19 == 0x20) {
    uVar6 = *puVar19;
    fVar23 = *(float *)(puVar19 + 2);
    fVar24 = *(float *)((long)puVar19 + 0x14);
    param_1[0x7d] =
         CONCAT44(((float)((ulong)puVar19[1] >> 0x20) + *(float *)((long)puVar19 + 0x1c)) * 0.5,
                  ((float)puVar19[1] + *(float *)(puVar19 + 3)) * 0.5);
    param_1[0x7c] =
         CONCAT44(((float)((ulong)uVar6 >> 0x20) + fVar24) * 0.5,((float)uVar6 + fVar23) * 0.5);
    fVar23 = (float)*puVar19 - *(float *)(puVar19 + 2);
    fVar24 = (float)((ulong)*puVar19 >> 0x20) - *(float *)((long)puVar19 + 0x14);
    fVar25 = (float)puVar19[1] - *(float *)(puVar19 + 3);
    fVar26 = (float)((ulong)puVar19[1] >> 0x20) - *(float *)((long)puVar19 + 0x1c);
    fVar23 = fVar23 * fVar23;
    fVar24 = fVar24 * fVar24;
    fVar25 = fVar25 * fVar25;
    fVar26 = fVar26 * fVar26;
    auVar28._4_4_ = fVar24;
    auVar28._0_4_ = fVar23;
    auVar28._8_4_ = fVar25;
    auVar28._12_4_ = fVar26;
    auVar5._4_4_ = fVar24;
    auVar5._0_4_ = fVar23;
    auVar5._8_4_ = fVar25;
    auVar5._12_4_ = fVar26;
    auVar28 = NEON_ext(auVar28,auVar5,8,1);
    *(float *)(param_1 + 0x7e) =
         fVar21 + SQRT(auVar28._0_4_ + fVar23 + auVar28._4_4_ + fVar24) * 0.5;
  }
  puVar14 = (ushort *)((long)param_4 - (long)*param_4);
  if (8 < *puVar14) {
    uVar10 = (ulong)puVar14[4];
    if (uVar10 != 0) {
      uVar12 = (ulong)*(uint *)((long)param_4 + uVar10);
      lVar8 = (long)((long)param_4 + uVar10) + uVar12;
      if (lVar8 != 0) {
        pcVar1 = (char *)(lVar8 + 4);
        sVar9 = strlen(pcVar1);
        if (1 < sVar9) {
          sVar9 = strlen(pcVar1);
          bVar3 = *(byte *)(lVar8 + 4);
          uVar17 = 0xcbf29ce484222645;
          if (bVar3 != 0) {
            uVar17 = 0xcbf29ce484222645;
            pbVar15 = (byte *)((long)param_4 + uVar12 + uVar10 + 5);
            do {
              uVar17 = (uVar17 ^ bVar3) * 0x100000001b3;
              bVar3 = *pbVar15;
              pbVar15 = pbVar15 + 1;
            } while (bVar3 != 0);
          }
          param_1[0x7f] = uVar17;
          param_1[0x80] = (long)pcVar1;
          param_1[0x81] = sVar9;
          if (param_1[0x82] != 0) {
            plVar11 = (long *)(param_1[0x82] + 0x48);
            (**(code **)(*plVar11 + 0x18))(plVar11);
            param_1[0x82] = 0;
          }
          param_1[0x82] = 0;
          puVar14 = (ushort *)((long)param_4 - (long)*param_4);
        }
      }
    }
    if (10 < *puVar14) {
      uVar10 = (ulong)puVar14[5];
      if (uVar10 != 0) {
        uVar12 = (ulong)*(uint *)((long)param_4 + uVar10);
        lVar8 = (long)((long)param_4 + uVar10) + uVar12;
        if (lVar8 != 0) {
          pcVar1 = (char *)(lVar8 + 4);
          sVar9 = strlen(pcVar1);
          if (1 < sVar9) {
            sVar9 = strlen(pcVar1);
            bVar3 = *(byte *)(lVar8 + 4);
            if (bVar3 != 0) {
              pbVar15 = (byte *)((long)param_4 + uVar12 + uVar10 + 5);
              do {
                uVar16 = (uVar16 ^ bVar3) * 0x100000001b3;
                bVar3 = *pbVar15;
                pbVar15 = pbVar15 + 1;
              } while (bVar3 != 0);
            }
            param_1[0x83] = uVar16;
            param_1[0x84] = (long)pcVar1;
            param_1[0x85] = sVar9;
            if (param_1[0x86] != 0) {
              plVar11 = (long *)(param_1[0x86] + 0x48);
              (**(code **)(*plVar11 + 0x18))(plVar11);
              param_1[0x86] = 0;
            }
            param_1[0x86] = 0;
            puVar14 = (ushort *)((long)param_4 - (long)*param_4);
          }
        }
      }
      if ((0xe < *puVar14) && ((ulong)puVar14[7] != 0)) {
        uVar20 = *(undefined4 *)((long)param_4 + (ulong)puVar14[7]);
        goto LAB_00de3d20;
      }
    }
  }
  uVar20 = 0;
LAB_00de3d20:
  *(undefined4 *)(param_1 + 0x87) = uVar20;
  *(undefined4 *)((long)param_1 + 0x43c) = 0;
  uVar20 = 0;
  if ((0x10 < *(ushort *)((long)param_4 - (long)*param_4)) &&
     (uVar10 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[8], uVar20 = 0, uVar10 != 0)) {
    uVar20 = *(undefined4 *)((long)param_4 + uVar10);
  }
  *(undefined4 *)(param_1 + 0x88) = uVar20;
  return;
}


