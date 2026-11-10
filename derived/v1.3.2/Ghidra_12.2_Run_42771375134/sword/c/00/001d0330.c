/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d0330; name: FUN_001d0330
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_001d0330(long *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  undefined1 local_38 [8];
  
  uVar4 = *(uint *)((long)param_1 + 0x11c);
  uVar3 = *(uint *)(param_1 + 1);
  if ((uVar4 >> 0x14 & 1) == 0) {
    param_1[0x1c] = param_1[6];
    param_1[0x1d] = param_1[7];
    param_1[0x1e] = param_1[8];
    *(int *)(param_1 + 0x1f) = (int)param_1[9];
  }
  else if ((uVar4 >> 0x15 & 1) == 0) {
    FUN_003bda40(param_1 + 4,param_1 + 0x1c);
  }
  else {
    lVar6 = param_1[2];
    if (lVar6 == 0) {
      lVar6 = FUN_001d1a00(*param_1,uVar3 >> 0x18 & 0xf);
      param_1[2] = lVar6;
    }
    fVar12 = *(float *)(lVar6 + 0xe4) - *(float *)((long)param_1 + 100);
    fVar20 = *(float *)(lVar6 + 0xd0);
    fVar16 = *(float *)(lVar6 + 0xd4);
    fVar13 = *(float *)(lVar6 + 0xe8) - *(float *)(param_1 + 0xd);
    fVar14 = *(float *)(lVar6 + 0xe0) - *(float *)(param_1 + 0xc);
    fVar12 = fVar12 + fVar12;
    fVar10 = *(float *)(param_1 + 10);
    fVar11 = *(float *)((long)param_1 + 0x54);
    fVar9 = *(float *)(param_1 + 0xb);
    fVar22 = *(float *)((long)param_1 + 0x5c);
    fVar24 = *(float *)(lVar6 + 0xd8);
    fVar15 = *(float *)(lVar6 + 0xdc);
    fVar14 = fVar14 + fVar14;
    fVar13 = fVar13 + fVar13;
    fVar21 = ((fVar22 * fVar24 - fVar15 * fVar9) - fVar16 * fVar10) + fVar20 * fVar11;
    fVar25 = fVar22 * fVar22 + -0.5;
    fVar1 = *(float *)(param_1 + 6);
    fVar17 = ((fVar22 * fVar20 - fVar15 * fVar10) - fVar24 * fVar11) + fVar16 * fVar9;
    fVar2 = *(float *)((long)param_1 + 0x34);
    fVar18 = fVar22 * fVar15 + fVar20 * fVar10 + fVar16 * fVar11 + fVar24 * fVar9;
    fVar24 = ((fVar22 * fVar16 - fVar15 * fVar11) - fVar20 * fVar9) + fVar24 * fVar10;
    fVar26 = (fVar14 * -fVar10 - fVar12 * fVar11) - fVar13 * fVar9;
    fVar15 = *(float *)(param_1 + 7);
    fVar20 = (fVar25 * fVar14 + fVar22 * (fVar12 * fVar9 - fVar13 * fVar11)) - fVar26 * fVar10;
    fVar16 = (fVar25 * fVar13 + fVar22 * (fVar14 * fVar11 - fVar12 * fVar10)) - fVar26 * fVar9;
    fVar23 = *(float *)((long)param_1 + 0x3c);
    fVar19 = fVar23 * fVar23 + -0.5;
    fVar9 = (fVar25 * fVar12 + fVar22 * (fVar13 * fVar10 - fVar14 * fVar9)) - fVar26 * fVar11;
    fVar9 = fVar9 + fVar9;
    fVar20 = fVar20 + fVar20;
    fVar16 = fVar16 + fVar16;
    fStack_5c = (fVar17 * fVar15 + fVar24 * fVar23 + fVar18 * fVar2) - fVar21 * fVar1;
    local_60 = (fVar17 * fVar23 + fVar18 * fVar1 + fVar21 * fVar2) - fVar24 * fVar15;
    fStack_54 = ((fVar18 * fVar23 - fVar17 * fVar1) - fVar24 * fVar2) - fVar21 * fVar15;
    local_58 = (fVar24 * fVar1 + fVar21 * fVar23 + fVar18 * fVar15) - fVar17 * fVar2;
    fVar10 = fVar20 * fVar1 + fVar9 * fVar2 + fVar16 * fVar15;
    local_50 = fVar10 * fVar1 + fVar20 * fVar19 + (fVar16 * fVar2 - fVar9 * fVar15) * fVar23 +
               *(float *)(param_1 + 8);
    fStack_4c = fVar10 * fVar2 + fVar9 * fVar19 + (fVar20 * fVar15 - fVar16 * fVar1) * fVar23 +
                *(float *)((long)param_1 + 0x44);
    local_48 = fVar16 * fVar19 + (fVar9 * fVar1 - fVar20 * fVar2) * fVar23 + fVar10 * fVar15 +
               *(float *)(param_1 + 9);
    *(float *)(param_1 + 0x1c) = local_60;
    *(float *)((long)param_1 + 0xe4) = fStack_5c;
    *(float *)(param_1 + 0x1d) = local_58;
    *(float *)((long)param_1 + 0xec) = fStack_54;
    *(float *)(param_1 + 0x1e) = local_50;
    *(float *)((long)param_1 + 0xf4) = fStack_4c;
    *(float *)(param_1 + 0x1f) = local_48;
    FUN_003bda40(param_1 + 4,&local_60);
  }
  if ((uVar3 & 1) != 0) {
    pbVar5 = (byte *)param_1[2];
    if (pbVar5 == (byte *)0x0) {
      pbVar5 = (byte *)FUN_001d1a00(*param_1,*(byte *)((long)param_1 + 0xb) & 0xf);
      param_1[2] = (long)pbVar5;
    }
    if (((*pbVar5 >> 3 & 1) == 0) && ((*(byte *)((long)param_1 + 0x2c) >> 3 & 1) != 0)) {
      if (*(uint *)(param_1 + 1) >> 0x1e == 2) {
        lVar7 = *param_1;
        lVar6 = FUN_00206d30();
        uVar3 = FUN_001f0560(param_1,&local_60);
        FUN_003e8080(lVar7 + 0x10,
                     *(long *)(PTR_DAT_02711068 +
                              (ulong)(*(byte *)((long)param_1 + 0xb) & 0xf) * 8 + 0x30) +
                     (long)param_1,CONCAT44(fStack_5c,local_60),uVar3,lVar6,0);
        if (uVar3 != 0) {
          uVar8 = 0;
          do {
            FUN_00206d40(*(long *)(CONCAT44(fStack_5c,local_60) + uVar8 * 8) + lVar6 + -0x20);
            uVar8 = uVar8 + 1;
          } while (uVar3 != uVar8);
        }
      }
    }
    else if (((*(byte *)((long)param_1 + 0x2c) >> 3 & 1) == 0) && ((*pbVar5 >> 3 & 1) != 0)) {
      FUN_001cc930(*param_1,param_1,1);
    }
  }
  if ((uVar4 & 0xf82fffff) != 0) {
    lVar6 = param_1[2];
    if (lVar6 == 0) {
      lVar6 = FUN_001d1a00(*param_1,*(byte *)((long)param_1 + 0xb) & 0xf);
      param_1[2] = lVar6;
      uVar3 = *(uint *)((long)param_1 + 0x11c);
    }
    else {
      uVar3 = *(uint *)((long)param_1 + 0x11c);
    }
    if ((uVar3 & 1) != 0) {
      FUN_003be110(*(undefined4 *)(lVar6 + 0xa4),param_1 + 4);
      uVar3 = *(uint *)((long)param_1 + 0x11c);
    }
    if ((uVar3 >> 1 & 1) != 0) {
      FUN_003be190(param_1 + 4,lVar6 + 0xa8);
      uVar3 = *(uint *)((long)param_1 + 0x11c);
    }
    if ((uVar3 >> 2 & 1) != 0) {
      FUN_003be240(*(undefined4 *)(lVar6 + 0xb4),param_1 + 4);
      uVar3 = *(uint *)((long)param_1 + 0x11c);
    }
    if ((uVar3 >> 3 & 1) != 0) {
      FUN_003be2c0(*(undefined4 *)(lVar6 + 0xb8),param_1 + 4);
      uVar3 = *(uint *)((long)param_1 + 0x11c);
    }
    if ((uVar3 >> 4 & 1) != 0) {
      FUN_003be340(*(undefined4 *)(lVar6 + 0xbc),param_1 + 4);
      uVar3 = *(uint *)((long)param_1 + 0x11c);
    }
    if ((uVar3 >> 5 & 1) != 0) {
      FUN_003be800(*(undefined4 *)(lVar6 + 0xc0),param_1 + 4);
      uVar3 = *(uint *)((long)param_1 + 0x11c);
    }
    if ((uVar3 >> 8 & 1) != 0) {
      FUN_003beae0(param_1 + 4,*(undefined2 *)(lVar6 + 0xcc));
      uVar3 = *(uint *)((long)param_1 + 0x11c);
    }
    if ((uVar3 >> 7 & 1) != 0) {
      *(undefined4 *)((long)param_1 + 0x8c) = *(undefined4 *)(lVar6 + 200);
    }
    if ((uVar3 >> 9 & 1) != 0) {
      FUN_003bdb70(param_1 + 4,lVar6 + 0xd0);
      uVar3 = *(uint *)((long)param_1 + 0x11c);
    }
    if ((uVar3 >> 0xb & 1) != 0) {
      FUN_003be830(*(undefined4 *)(lVar6 + 0xf0),param_1 + 4);
      uVar3 = *(uint *)((long)param_1 + 0x11c);
    }
    if ((uVar3 >> 10 & 1) != 0) {
      *(undefined4 *)((long)param_1 + 0x7c) = *(undefined4 *)(lVar6 + 0xec);
    }
    if ((uVar3 >> 0xc & 1) != 0) {
      FUN_003be740(*(undefined4 *)(lVar6 + 0xf4),param_1 + 4);
    }
    if ((uVar4 >> 0xe & 1) != 0) {
      local_38[0] = *(undefined1 *)(lVar6 + 0x14c);
      FUN_003be390(param_1 + 4,*(undefined8 *)(*param_1 + 0x1178),local_38);
    }
  }
  FUN_001cf6d0(param_1);
  if ((uVar4 >> 0x19 & 1) == 0) {
    uVar4 = FUN_003be860();
    if (*(uint *)(param_1 + 1) >> 0x1e < 3) {
      *(uint *)(param_1 + 0x23) = uVar4 & 1;
    }
  }
  else {
    FUN_003be660(param_1 + 4);
  }
  FUN_001d6280(param_1);
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x11c) = 0;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xff000000;
  return;
}


