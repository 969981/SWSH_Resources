/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010a50b0; name: FUN_010a50b0
 */


int FUN_010a50b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  int iVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined4 local_c0;
  
  iVar17 = FUN_010a4cf0();
  uVar18 = FUN_010a4540(param_6,param_5,param_4);
  if ((uVar18 & 1) != 0) {
    uVar1 = *param_4;
    uVar6 = param_4[1];
    uVar21 = param_4[2];
    uVar22 = param_4[5];
    uVar2 = param_4[3];
    uVar7 = param_4[4];
    local_c0 = CONCAT22(local_c0._2_2_,*(undefined2 *)(param_4 + 6));
    uVar11 = *(undefined4 *)((long)param_4 + 0x34);
    uVar14 = *(undefined2 *)(param_4 + 7);
    uVar12 = *(undefined4 *)((long)param_4 + 0x3c);
    uVar15 = *(undefined2 *)(param_4 + 8);
    uVar24 = *(undefined8 *)((long)param_4 + 0x44);
    uVar13 = *(undefined4 *)((long)param_4 + 0x4c);
    uVar19 = param_4[10];
    uVar20 = param_4[0xb];
    uVar3 = param_4[0xc];
    uVar8 = param_4[0xd];
    uVar4 = param_4[0xe];
    uVar9 = param_4[0xf];
    uVar23 = param_4[0x12];
    uVar5 = param_4[0x10];
    uVar10 = param_4[0x11];
    uVar16 = *(undefined2 *)(param_4 + 0x13);
    memcpy(param_4,param_5,0x9a);
    param_5[1] = uVar6;
    param_5[2] = uVar21;
    *param_5 = uVar1;
    *(undefined2 *)(param_5 + 7) = uVar14;
    *(undefined4 *)((long)param_5 + 0x3c) = uVar12;
    param_5[4] = uVar7;
    param_5[5] = uVar22;
    param_5[3] = uVar2;
    *(undefined2 *)(param_5 + 8) = uVar15;
    *(undefined8 *)((long)param_5 + 0x44) = uVar24;
    *(undefined4 *)((long)param_5 + 0x4c) = uVar13;
    *(undefined4 *)(param_5 + 6) = local_c0;
    *(undefined4 *)((long)param_5 + 0x34) = uVar11;
    param_5[10] = uVar19;
    param_5[0xb] = uVar20;
    param_5[0xe] = uVar4;
    param_5[0xf] = uVar9;
    param_5[0xc] = uVar3;
    param_5[0xd] = uVar8;
    param_5[0x11] = uVar10;
    param_5[0x12] = uVar23;
    *(undefined2 *)(param_5 + 0x13) = uVar16;
    param_5[0x10] = uVar5;
    uVar18 = FUN_010a4540(param_6,param_4,param_3);
    if ((uVar18 & 1) == 0) {
      iVar17 = iVar17 + 1;
    }
    else {
      uVar1 = *param_3;
      uVar6 = param_3[1];
      uVar21 = param_3[2];
      uVar2 = param_3[3];
      uVar7 = param_3[4];
      uVar22 = param_3[5];
      local_c0 = CONCAT22(local_c0._2_2_,*(undefined2 *)(param_3 + 6));
      uVar11 = *(undefined4 *)((long)param_3 + 0x34);
      uVar14 = *(undefined2 *)(param_3 + 7);
      uVar12 = *(undefined4 *)((long)param_3 + 0x3c);
      uVar15 = *(undefined2 *)(param_3 + 8);
      uVar24 = *(undefined8 *)((long)param_3 + 0x44);
      uVar13 = *(undefined4 *)((long)param_3 + 0x4c);
      uVar19 = param_3[10];
      uVar20 = param_3[0xb];
      uVar3 = param_3[0xc];
      uVar8 = param_3[0xd];
      uVar4 = param_3[0xe];
      uVar9 = param_3[0xf];
      uVar23 = param_3[0x12];
      uVar5 = param_3[0x10];
      uVar10 = param_3[0x11];
      uVar16 = *(undefined2 *)(param_3 + 0x13);
      memcpy(param_3,param_4,0x9a);
      param_4[1] = uVar6;
      param_4[2] = uVar21;
      *param_4 = uVar1;
      *(undefined2 *)(param_4 + 7) = uVar14;
      param_4[4] = uVar7;
      param_4[5] = uVar22;
      param_4[3] = uVar2;
      *(undefined4 *)((long)param_4 + 0x3c) = uVar12;
      *(undefined2 *)(param_4 + 8) = uVar15;
      *(undefined8 *)((long)param_4 + 0x44) = uVar24;
      *(undefined4 *)((long)param_4 + 0x4c) = uVar13;
      *(undefined4 *)(param_4 + 6) = local_c0;
      *(undefined4 *)((long)param_4 + 0x34) = uVar11;
      param_4[10] = uVar19;
      param_4[0xb] = uVar20;
      param_4[0xe] = uVar4;
      param_4[0xf] = uVar9;
      param_4[0xc] = uVar3;
      param_4[0xd] = uVar8;
      *(undefined2 *)(param_4 + 0x13) = uVar16;
      param_4[0x11] = uVar10;
      param_4[0x12] = uVar23;
      param_4[0x10] = uVar5;
      uVar18 = FUN_010a4540(param_6,param_3,param_2);
      if ((uVar18 & 1) == 0) {
        iVar17 = iVar17 + 2;
      }
      else {
        uVar1 = *param_2;
        uVar6 = param_2[1];
        uVar21 = param_2[2];
        uVar2 = param_2[3];
        uVar7 = param_2[4];
        uVar22 = param_2[5];
        local_c0 = CONCAT22(local_c0._2_2_,*(undefined2 *)(param_2 + 6));
        uVar11 = *(undefined4 *)((long)param_2 + 0x34);
        uVar14 = *(undefined2 *)(param_2 + 7);
        uVar12 = *(undefined4 *)((long)param_2 + 0x3c);
        uVar15 = *(undefined2 *)(param_2 + 8);
        uVar24 = *(undefined8 *)((long)param_2 + 0x44);
        uVar13 = *(undefined4 *)((long)param_2 + 0x4c);
        uVar19 = param_2[10];
        uVar20 = param_2[0xb];
        uVar3 = param_2[0xc];
        uVar8 = param_2[0xd];
        uVar4 = param_2[0xe];
        uVar9 = param_2[0xf];
        uVar23 = param_2[0x12];
        uVar5 = param_2[0x10];
        uVar10 = param_2[0x11];
        uVar16 = *(undefined2 *)(param_2 + 0x13);
        memcpy(param_2,param_3,0x9a);
        param_3[1] = uVar6;
        param_3[2] = uVar21;
        *param_3 = uVar1;
        *(undefined2 *)(param_3 + 7) = uVar14;
        *(undefined4 *)((long)param_3 + 0x3c) = uVar12;
        *(undefined2 *)(param_3 + 8) = uVar15;
        *(undefined8 *)((long)param_3 + 0x44) = uVar24;
        *(undefined4 *)((long)param_3 + 0x4c) = uVar13;
        param_3[3] = uVar2;
        *(undefined4 *)(param_3 + 6) = local_c0;
        *(undefined4 *)((long)param_3 + 0x34) = uVar11;
        param_3[4] = uVar7;
        param_3[5] = uVar22;
        param_3[10] = uVar19;
        param_3[0xb] = uVar20;
        param_3[0xe] = uVar4;
        param_3[0xf] = uVar9;
        param_3[0xc] = uVar3;
        param_3[0xd] = uVar8;
        param_3[0x11] = uVar10;
        param_3[0x12] = uVar23;
        *(undefined2 *)(param_3 + 0x13) = uVar16;
        param_3[0x10] = uVar5;
        uVar18 = FUN_010a4540(param_6,param_2,param_1);
        if ((uVar18 & 1) == 0) {
          iVar17 = iVar17 + 3;
        }
        else {
          uVar1 = *param_1;
          uVar7 = param_1[1];
          uVar21 = param_1[2];
          uVar2 = param_1[3];
          uVar8 = param_1[4];
          uVar22 = param_1[5];
          local_c0 = CONCAT22(local_c0._2_2_,*(undefined2 *)(param_1 + 6));
          uVar11 = *(undefined4 *)((long)param_1 + 0x34);
          uVar3 = param_1[10];
          uVar9 = param_1[0xb];
          uVar14 = *(undefined2 *)(param_1 + 7);
          uVar12 = *(undefined4 *)((long)param_1 + 0x3c);
          uVar15 = *(undefined2 *)(param_1 + 8);
          uVar24 = *(undefined8 *)((long)param_1 + 0x44);
          uVar13 = *(undefined4 *)((long)param_1 + 0x4c);
          uVar4 = param_1[0xc];
          uVar10 = param_1[0xd];
          uVar5 = param_1[0xe];
          uVar19 = param_1[0xf];
          uVar23 = param_1[0x12];
          uVar6 = param_1[0x10];
          uVar20 = param_1[0x11];
          uVar16 = *(undefined2 *)(param_1 + 0x13);
          memcpy(param_1,param_2,0x9a);
          param_2[1] = uVar7;
          param_2[2] = uVar21;
          *param_2 = uVar1;
          *(undefined2 *)(param_2 + 7) = uVar14;
          *(undefined4 *)((long)param_2 + 0x3c) = uVar12;
          *(undefined2 *)(param_2 + 8) = uVar15;
          *(undefined8 *)((long)param_2 + 0x44) = uVar24;
          iVar17 = iVar17 + 4;
          *(undefined4 *)((long)param_2 + 0x4c) = uVar13;
          param_2[3] = uVar2;
          *(undefined4 *)(param_2 + 6) = local_c0;
          *(undefined4 *)((long)param_2 + 0x34) = uVar11;
          param_2[4] = uVar8;
          param_2[5] = uVar22;
          param_2[10] = uVar3;
          param_2[0xb] = uVar9;
          param_2[0xe] = uVar5;
          param_2[0xf] = uVar19;
          param_2[0xc] = uVar4;
          param_2[0xd] = uVar10;
          *(undefined2 *)(param_2 + 0x13) = uVar16;
          param_2[0x11] = uVar20;
          param_2[0x12] = uVar23;
          param_2[0x10] = uVar6;
        }
      }
    }
  }
  return iVar17;
}


