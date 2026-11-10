/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e5450; name: FUN_007e5450
 */


void FUN_007e5450(undefined8 *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  string *psVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  void *pvVar11;
  string *psVar12;
  long lVar13;
  long lVar14;
  
  puVar5 = PTR_DAT_02716d10;
  psVar6 = (string *)*param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  if (*(string **)(param_2 + 0x18) == *(string **)puVar5) {
    FUN_009b58d0();
    iVar10 = *(int *)((long)param_1 + 0x2c);
  }
  else {
    std::string::operator=(*(string **)(param_2 + 0x18),psVar6);
    iVar10 = *(int *)((long)param_1 + 0x2c);
  }
  if (0 < iVar10) {
    lVar13 = 0;
    lVar14 = 0;
    do {
      lVar8 = param_1[6];
      piVar9 = *(int **)(param_2 + 0x30);
      if (piVar9 == (int *)0x0) {
        iVar10 = *(int *)(param_2 + 0x2c);
LAB_007e5514:
        FUN_00824290(param_2 + 0x20,iVar10 + 1);
        piVar9 = *(int **)(param_2 + 0x30);
        iVar10 = *piVar9;
LAB_007e5528:
        *piVar9 = iVar10 + 1;
        uVar7 = FUN_007f7cf0(0,*(undefined8 *)(param_2 + 0x20));
        iVar10 = *(int *)(param_2 + 0x28);
        *(int *)(param_2 + 0x28) = iVar10 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x30) + (long)iVar10 * 8 + 8) = uVar7;
      }
      else {
        iVar4 = *(int *)(param_2 + 0x28);
        iVar10 = *piVar9;
        if (iVar10 <= iVar4) {
          if (iVar10 == *(int *)(param_2 + 0x2c)) goto LAB_007e5514;
          goto LAB_007e5528;
        }
        *(int *)(param_2 + 0x28) = iVar4 + 1;
        uVar7 = *(undefined8 *)(piVar9 + (long)iVar4 * 2 + 2);
      }
      FUN_007e5df0(lVar8 + lVar13,uVar7);
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + 0x90;
    } while (lVar14 < *(int *)((long)param_1 + 0x2c));
  }
  if (0 < *(int *)(param_1 + 7)) {
    lVar13 = 0;
    lVar14 = 0;
    do {
      lVar8 = param_1[8];
      piVar9 = *(int **)(param_2 + 0xa8);
      if (piVar9 == (int *)0x0) {
        iVar10 = *(int *)(param_2 + 0xa4);
LAB_007e55d4:
        FUN_00824290(param_2 + 0x98,iVar10 + 1);
        piVar9 = *(int **)(param_2 + 0xa8);
        iVar10 = *piVar9;
LAB_007e55e8:
        *piVar9 = iVar10 + 1;
        uVar7 = FUN_007f7d70(0,*(undefined8 *)(param_2 + 0x98));
        iVar10 = *(int *)(param_2 + 0xa0);
        *(int *)(param_2 + 0xa0) = iVar10 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0xa8) + (long)iVar10 * 8 + 8) = uVar7;
      }
      else {
        iVar4 = *(int *)(param_2 + 0xa0);
        iVar10 = *piVar9;
        if (iVar10 <= iVar4) {
          if (iVar10 == *(int *)(param_2 + 0xa4)) goto LAB_007e55d4;
          goto LAB_007e55e8;
        }
        *(int *)(param_2 + 0xa0) = iVar4 + 1;
        uVar7 = *(undefined8 *)(piVar9 + (long)iVar4 * 2 + 2);
      }
      FUN_007e6130(lVar8 + lVar13,uVar7);
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + 0x30;
    } while (lVar14 < *(int *)(param_1 + 7));
  }
  if (0 < *(int *)(param_1 + 9)) {
    lVar13 = 0;
    lVar14 = 0;
    do {
      lVar8 = param_1[10];
      piVar9 = *(int **)(param_2 + 0x60);
      if (piVar9 == (int *)0x0) {
        iVar10 = *(int *)(param_2 + 0x5c);
LAB_007e5694:
        FUN_00824290(param_2 + 0x50,iVar10 + 1);
        piVar9 = *(int **)(param_2 + 0x60);
        iVar10 = *piVar9;
LAB_007e56a8:
        *piVar9 = iVar10 + 1;
        uVar7 = FUN_007f7b70(0,*(undefined8 *)(param_2 + 0x50));
        iVar10 = *(int *)(param_2 + 0x58);
        *(int *)(param_2 + 0x58) = iVar10 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x60) + (long)iVar10 * 8 + 8) = uVar7;
      }
      else {
        iVar4 = *(int *)(param_2 + 0x58);
        iVar10 = *piVar9;
        if (iVar10 <= iVar4) {
          if (iVar10 == *(int *)(param_2 + 0x5c)) goto LAB_007e5694;
          goto LAB_007e56a8;
        }
        *(int *)(param_2 + 0x58) = iVar4 + 1;
        uVar7 = *(undefined8 *)(piVar9 + (long)iVar4 * 2 + 2);
      }
      FUN_007e5450(lVar8 + lVar13,uVar7);
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + 0xa8;
    } while (lVar14 < *(int *)(param_1 + 9));
  }
  if (0 < *(int *)(param_1 + 0xb)) {
    lVar13 = 0;
    lVar14 = 0;
    do {
      lVar8 = param_1[0xc];
      piVar9 = *(int **)(param_2 + 0x78);
      if (piVar9 == (int *)0x0) {
        iVar10 = *(int *)(param_2 + 0x74);
LAB_007e5754:
        FUN_00824290(param_2 + 0x68,iVar10 + 1);
        piVar9 = *(int **)(param_2 + 0x78);
        iVar10 = *piVar9;
LAB_007e5768:
        *piVar9 = iVar10 + 1;
        uVar7 = FUN_007f7bf0(0,*(undefined8 *)(param_2 + 0x68));
        iVar10 = *(int *)(param_2 + 0x70);
        *(int *)(param_2 + 0x70) = iVar10 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x78) + (long)iVar10 * 8 + 8) = uVar7;
      }
      else {
        iVar4 = *(int *)(param_2 + 0x70);
        iVar10 = *piVar9;
        if (iVar10 <= iVar4) {
          if (iVar10 == *(int *)(param_2 + 0x74)) goto LAB_007e5754;
          goto LAB_007e5768;
        }
        *(int *)(param_2 + 0x70) = iVar4 + 1;
        uVar7 = *(undefined8 *)(piVar9 + (long)iVar4 * 2 + 2);
      }
      FUN_007e5ad0(lVar8 + lVar13,uVar7);
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + 0x38;
    } while (lVar14 < *(int *)(param_1 + 0xb));
  }
  if (0 < *(int *)(param_1 + 0xd)) {
    lVar14 = 0;
    lVar13 = 0;
    do {
      piVar9 = *(int **)(param_2 + 0x90);
      if (piVar9 == (int *)0x0) {
        iVar10 = *(int *)(param_2 + 0x8c);
LAB_007e580c:
        FUN_00824290(param_2 + 0x80,iVar10 + 1);
        piVar9 = *(int **)(param_2 + 0x90);
        iVar10 = *piVar9;
LAB_007e5820:
        *piVar9 = iVar10 + 1;
        lVar8 = FUN_007f7df0(0,*(undefined8 *)(param_2 + 0x80));
        iVar10 = *(int *)(param_2 + 0x88);
        *(int *)(param_2 + 0x88) = iVar10 + 1;
        *(long *)(*(long *)(param_2 + 0x90) + (long)iVar10 * 8 + 8) = lVar8;
      }
      else {
        iVar4 = *(int *)(param_2 + 0x88);
        iVar10 = *piVar9;
        if (iVar10 <= iVar4) {
          if (iVar10 == *(int *)(param_2 + 0x8c)) goto LAB_007e580c;
          goto LAB_007e5820;
        }
        *(int *)(param_2 + 0x88) = iVar4 + 1;
        lVar8 = *(long *)(piVar9 + (long)iVar4 * 2 + 2);
      }
      uVar2 = *(uint *)(lVar8 + 0x10);
      uVar3 = *(undefined4 *)(param_1[0xe] + lVar14);
      *(uint *)(lVar8 + 0x10) = uVar2 | 1;
      *(undefined4 *)(lVar8 + 0x18) = uVar3;
      lVar1 = param_1[0xe] + lVar14;
      lVar14 = lVar14 + 8;
      uVar3 = *(undefined4 *)(lVar1 + 4);
      *(uint *)(lVar8 + 0x10) = uVar2 | 3;
      *(undefined4 *)(lVar8 + 0x1c) = uVar3;
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0xd));
  }
  if (0 < *(int *)(param_1 + 0xf)) {
    lVar13 = 0;
    lVar14 = 0;
    do {
      lVar8 = param_1[0x10];
      piVar9 = *(int **)(param_2 + 0x48);
      if (piVar9 == (int *)0x0) {
        iVar10 = *(int *)(param_2 + 0x44);
LAB_007e58f0:
        FUN_00824290(param_2 + 0x38,iVar10 + 1);
        piVar9 = *(int **)(param_2 + 0x48);
        iVar10 = *piVar9;
LAB_007e5904:
        *piVar9 = iVar10 + 1;
        uVar7 = FUN_007f7cf0(0,*(undefined8 *)(param_2 + 0x38));
        iVar10 = *(int *)(param_2 + 0x40);
        *(int *)(param_2 + 0x40) = iVar10 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x48) + (long)iVar10 * 8 + 8) = uVar7;
      }
      else {
        iVar4 = *(int *)(param_2 + 0x40);
        iVar10 = *piVar9;
        if (iVar10 <= iVar4) {
          if (iVar10 == *(int *)(param_2 + 0x44)) goto LAB_007e58f0;
          goto LAB_007e5904;
        }
        *(int *)(param_2 + 0x40) = iVar4 + 1;
        uVar7 = *(undefined8 *)(piVar9 + (long)iVar4 * 2 + 2);
      }
      FUN_007e5df0(lVar8 + lVar13,uVar7);
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + 0x90;
    } while (lVar14 < *(int *)(param_1 + 0xf));
  }
  if (0 < *(int *)(param_1 + 0x11)) {
    lVar14 = 0;
    lVar13 = 0;
    do {
      piVar9 = *(int **)(param_2 + 200);
      if (piVar9 == (int *)0x0) {
        iVar10 = *(int *)(param_2 + 0xc4);
LAB_007e59a8:
        FUN_00824290(param_2 + 0xb8,iVar10 + 1);
        piVar9 = *(int **)(param_2 + 200);
        iVar10 = *piVar9;
LAB_007e59bc:
        *piVar9 = iVar10 + 1;
        lVar8 = FUN_007f7e70(0,*(undefined8 *)(param_2 + 0xb8));
        iVar10 = *(int *)(param_2 + 0xc0);
        *(int *)(param_2 + 0xc0) = iVar10 + 1;
        *(long *)(*(long *)(param_2 + 200) + (long)iVar10 * 8 + 8) = lVar8;
      }
      else {
        iVar4 = *(int *)(param_2 + 0xc0);
        iVar10 = *piVar9;
        if (iVar10 <= iVar4) {
          if (iVar10 == *(int *)(param_2 + 0xc4)) goto LAB_007e59a8;
          goto LAB_007e59bc;
        }
        *(int *)(param_2 + 0xc0) = iVar4 + 1;
        lVar8 = *(long *)(piVar9 + (long)iVar4 * 2 + 2);
      }
      uVar2 = *(uint *)(lVar8 + 0x10);
      uVar3 = *(undefined4 *)(param_1[0x12] + lVar14);
      *(uint *)(lVar8 + 0x10) = uVar2 | 1;
      *(undefined4 *)(lVar8 + 0x18) = uVar3;
      lVar1 = param_1[0x12] + lVar14;
      lVar14 = lVar14 + 8;
      uVar3 = *(undefined4 *)(lVar1 + 4);
      *(uint *)(lVar8 + 0x10) = uVar2 | 3;
      *(undefined4 *)(lVar8 + 0x1c) = uVar3;
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0x11));
  }
  if (0 < *(int *)(param_1 + 0x13)) {
    lVar14 = 0;
    do {
      psVar12 = *(string **)(param_1[0x14] + lVar14 * 8);
      psVar6 = (string *)FUN_007f7930(param_2 + 0xd0);
      std::string::operator=(psVar6,psVar12);
      lVar14 = lVar14 + 1;
    } while (lVar14 < *(int *)(param_1 + 0x13));
  }
  lVar13 = param_1[4];
  lVar14 = FUN_0084ad30();
  if (lVar13 == lVar14) {
    return;
  }
  pvVar11 = *(void **)(param_2 + 0xb0);
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x80;
  if (pvVar11 == (void *)0x0) {
    pvVar11 = operator_new(0x58);
    FUN_00855de0();
    *(void **)(param_2 + 0xb0) = pvVar11;
  }
  FUN_00856920(pvVar11,param_1[4]);
  return;
}


