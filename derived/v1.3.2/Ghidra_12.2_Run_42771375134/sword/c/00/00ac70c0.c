/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ac70c0; name: FUN_00ac70c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00ac70c0(long *param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int local_80;
  ushort local_7c;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_48;
  
  (**(code **)(*param_1 + 0x220))(&local_80);
  if (local_80 < 0x34d) {
    if (local_80 == 0x2a9) {
      if ((local_7c == 1) && (*param_2 == 0x75797448eae3ec55)) {
        lVar4 = (**(code **)(*param_1 + 0x208))(param_1,param_2);
        local_60 = 0x55c0d7a581349f0f;
        local_58 = "Origin";
        local_50 = 6;
        local_48 = 0;
        lVar3 = (**(code **)(*param_1 + 0x208))(param_1,&local_60);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
        if ((lVar4 != 0) && (lVar3 != 0)) {
          lVar4 = *(long *)(lVar3 + 0x120);
          iVar1 = *(int *)(*(long *)(lVar3 + 0x128) + 0x40);
          FUN_00723030(lVar4,iVar1);
          lVar4 = *(long *)(lVar4 + 0x1b8) + (long)iVar1 * 0x130;
          fVar6 = (float)*(undefined8 *)(lVar4 + 0xa0);
          fVar20 = fVar6 * 0.0;
          fVar7 = (float)((ulong)*(undefined8 *)(lVar4 + 0xa0) >> 0x20);
          fVar21 = fVar7 * 0.0;
          fVar8 = (float)*(undefined8 *)(lVar4 + 0xa8);
          fVar22 = fVar8 * 0.0;
          fVar9 = (float)((ulong)*(undefined8 *)(lVar4 + 0xa8) >> 0x20);
          fVar23 = fVar9 * 0.0;
          uVar19 = *(undefined8 *)(lVar4 + 0xd8);
          uVar5 = *(undefined8 *)(lVar4 + 0xd0);
          fVar10 = (float)*(undefined8 *)(lVar4 + 0xb0);
          fVar11 = (float)((ulong)*(undefined8 *)(lVar4 + 0xb0) >> 0x20);
          fVar12 = (float)*(undefined8 *)(lVar4 + 0xb8);
          fVar13 = (float)((ulong)*(undefined8 *)(lVar4 + 0xb8) >> 0x20);
          fVar14 = (float)*(undefined8 *)(lVar4 + 0xc0);
          fVar15 = (float)((ulong)*(undefined8 *)(lVar4 + 0xc0) >> 0x20);
          fVar16 = (float)*(undefined8 *)(lVar4 + 200);
          fVar17 = (float)((ulong)*(undefined8 *)(lVar4 + 200) >> 0x20);
          param_3[1] = CONCAT44(fVar9 + fVar13 * 0.0 + fVar17 * 0.0,
                                fVar8 + fVar12 * 0.0 + fVar16 * 0.0);
          *param_3 = CONCAT44(fVar7 + fVar11 * 0.0 + fVar15 * 0.0,
                              fVar6 + fVar10 * 0.0 + fVar14 * 0.0);
          param_3[3] = CONCAT44(fVar13 + fVar23 + fVar17 * 0.0,fVar12 + fVar22 + fVar16 * 0.0);
          param_3[2] = CONCAT44(fVar11 + fVar21 + fVar15 * 0.0,fVar10 + fVar20 + fVar14 * 0.0);
          param_3[5] = CONCAT44(fVar17 + fVar23 + fVar13 * 0.0,fVar16 + fVar22 + fVar12 * 0.0);
          param_3[4] = CONCAT44(fVar15 + fVar21 + fVar11 * 0.0,fVar14 + fVar20 + fVar10 * 0.0);
          param_3[7] = CONCAT44((float)((ulong)uVar19 >> 0x20) +
                                fVar23 + fVar13 * 270.0 + fVar17 * 0.0,
                                (float)uVar19 + fVar22 + fVar12 * 270.0 + fVar16 * 0.0);
          param_3[6] = CONCAT44((float)((ulong)uVar5 >> 0x20) +
                                fVar21 + fVar11 * 270.0 + fVar15 * 0.0,
                                (float)uVar5 + fVar20 + fVar10 * 270.0 + fVar14 * 0.0);
          return 1;
        }
      }
      goto LAB_00ac7448;
    }
    if ((local_80 != 0x30a) || (local_7c != 1)) goto LAB_00ac7448;
    uVar2 = FUN_00aca6f0(param_1,param_2,param_3);
  }
  else {
    if (local_80 == 0x34d) {
      if (local_7c - 1 < 2) {
        if (*param_2 == -0x3eb2348fd3e7ca4e) {
          lVar4 = (**(code **)(*param_1 + 0x208))(param_1,param_2);
          local_60 = 0x55c0d7a581349f0f;
          local_58 = "Origin";
          local_50 = 6;
          local_48 = 0;
          lVar3 = (**(code **)(*param_1 + 0x208))(param_1,&local_60);
          uVar5 = _DAT_01d4b120;
          uVar19 = _UNK_01d4b128;
          if (local_48 != 0) {
            (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
            uVar5 = _DAT_01d4b120;
            uVar19 = _UNK_01d4b128;
          }
        }
        else {
          if (*param_2 != 0x7e9bc1acdbf0328f) goto LAB_00ac7448;
          lVar4 = (**(code **)(*param_1 + 0x208))(param_1,param_2);
          local_60 = 0x8117dd7502127103;
          local_58 = "RToeC1";
          local_50 = 6;
          local_48 = 0;
          lVar3 = (**(code **)(*param_1 + 0x208))(param_1,&local_60);
          uVar5 = _DAT_01d4a3e0;
          uVar19 = _UNK_01d4a3e8;
          if (local_48 != 0) {
            (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
            uVar5 = _DAT_01d4a3e0;
            uVar19 = _UNK_01d4a3e8;
          }
        }
        local_48 = 0;
        if ((lVar3 != 0) && (lVar4 != 0)) {
          lVar4 = *(long *)(lVar3 + 0x120);
          iVar1 = *(int *)(*(long *)(lVar3 + 0x128) + 0x40);
          FUN_00723030(lVar4,iVar1);
          lVar4 = *(long *)(lVar4 + 0x1b8) + (long)iVar1 * 0x130;
          fVar20 = (float)uVar5;
          fVar6 = (float)*(undefined8 *)(lVar4 + 0xa0);
          fVar7 = (float)((ulong)*(undefined8 *)(lVar4 + 0xa0) >> 0x20);
          fVar8 = (float)*(undefined8 *)(lVar4 + 0xa8);
          fVar9 = (float)((ulong)*(undefined8 *)(lVar4 + 0xa8) >> 0x20);
          fVar21 = (float)((ulong)uVar5 >> 0x20);
          fVar10 = (float)*(undefined8 *)(lVar4 + 0xb0);
          fVar11 = (float)((ulong)*(undefined8 *)(lVar4 + 0xb0) >> 0x20);
          fVar12 = (float)*(undefined8 *)(lVar4 + 0xb8);
          fVar13 = (float)((ulong)*(undefined8 *)(lVar4 + 0xb8) >> 0x20);
          uVar18 = *(undefined8 *)(lVar4 + 0xd8);
          uVar5 = *(undefined8 *)(lVar4 + 0xd0);
          fVar22 = (float)uVar19;
          fVar14 = (float)*(undefined8 *)(lVar4 + 0xc0);
          fVar15 = (float)((ulong)*(undefined8 *)(lVar4 + 0xc0) >> 0x20);
          fVar16 = (float)*(undefined8 *)(lVar4 + 200);
          fVar17 = (float)((ulong)*(undefined8 *)(lVar4 + 200) >> 0x20);
          param_3[1] = CONCAT44(fVar9 + fVar13 * 0.0 + fVar17 * 0.0,
                                fVar8 + fVar12 * 0.0 + fVar16 * 0.0);
          *param_3 = CONCAT44(fVar7 + fVar11 * 0.0 + fVar15 * 0.0,
                              fVar6 + fVar10 * 0.0 + fVar14 * 0.0);
          param_3[3] = CONCAT44(fVar13 + fVar9 * 0.0 + fVar17 * 0.0,
                                fVar12 + fVar8 * 0.0 + fVar16 * 0.0);
          param_3[2] = CONCAT44(fVar11 + fVar7 * 0.0 + fVar15 * 0.0,
                                fVar10 + fVar6 * 0.0 + fVar14 * 0.0);
          param_3[5] = CONCAT44(fVar17 + fVar9 * 0.0 + fVar13 * 0.0,
                                fVar16 + fVar8 * 0.0 + fVar12 * 0.0);
          param_3[4] = CONCAT44(fVar15 + fVar7 * 0.0 + fVar11 * 0.0,
                                fVar14 + fVar6 * 0.0 + fVar10 * 0.0);
          param_3[7] = CONCAT44((float)((ulong)uVar18 >> 0x20) +
                                fVar9 * fVar20 + fVar13 * fVar21 + fVar17 * fVar22,
                                (float)uVar18 + fVar8 * fVar20 + fVar12 * fVar21 + fVar16 * fVar22);
          param_3[6] = CONCAT44((float)((ulong)uVar5 >> 0x20) +
                                fVar7 * fVar20 + fVar11 * fVar21 + fVar15 * fVar22,
                                (float)uVar5 + fVar6 * fVar20 + fVar10 * fVar21 + fVar14 * fVar22);
          return 1;
        }
      }
      goto LAB_00ac7448;
    }
    if (local_80 == 0x36b) {
      uVar2 = FUN_00acabf0(param_1,param_2,param_3);
    }
    else {
      if ((local_80 != 0x36d) || (local_7c != 1)) goto LAB_00ac7448;
      uVar2 = FUN_00aca970(param_1,param_2,param_3);
    }
  }
  if ((uVar2 & 1) != 0) {
    return 1;
  }
LAB_00ac7448:
  lVar4 = (**(code **)(*param_1 + 0x208))(param_1,param_2);
  if (lVar4 == 0) {
    return 0;
  }
  lVar3 = *(long *)(lVar4 + 0x120);
  iVar1 = *(int *)(*(long *)(lVar4 + 0x128) + 0x40);
  FUN_00723030(lVar3,iVar1);
  lVar4 = *(long *)(lVar3 + 0x1b8) + (long)iVar1 * 0x130;
  uVar5 = *(undefined8 *)(lVar4 + 0xa0);
  uVar19 = *(undefined8 *)(lVar4 + 0xa8);
  uVar18 = *(undefined8 *)(lVar4 + 0xb8);
  param_3[2] = *(undefined8 *)(lVar4 + 0xb0);
  param_3[3] = uVar18;
  *param_3 = uVar5;
  param_3[1] = uVar19;
  uVar5 = *(undefined8 *)(lVar4 + 200);
  param_3[7] = *(undefined8 *)(lVar4 + 0xd8);
  param_3[5] = uVar5;
  uVar5 = *(undefined8 *)(lVar4 + 0xc0);
  param_3[6] = *(undefined8 *)(lVar4 + 0xd0);
  param_3[4] = uVar5;
  return 1;
}


