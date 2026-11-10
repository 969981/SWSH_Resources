/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e4e00; name: FUN_007e4e00
 */


void FUN_007e4e00(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  string sVar2;
  int iVar3;
  undefined *puVar4;
  string *psVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  void *pvVar10;
  string *psVar11;
  long lVar12;
  long lVar13;
  
  puVar4 = PTR_DAT_02716d10;
  psVar5 = (string *)*param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  if (*(string **)(param_2 + 0x18) == *(string **)puVar4) {
    FUN_009b58d0();
    psVar5 = (string *)param_1[1];
    sVar2 = *psVar5;
    if (((byte)sVar2 & 1) != 0) goto LAB_007e4e78;
LAB_007e4e5c:
    if ((byte)sVar2 >> 1 != 0) {
LAB_007e4e80:
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
      if (*(string **)(param_2 + 0x20) == *(string **)puVar4) {
        FUN_009b58d0();
        iVar7 = *(int *)((long)param_1 + 0x7c);
        goto joined_r0x007e5330;
      }
      std::string::operator=(*(string **)(param_2 + 0x20),psVar5);
    }
  }
  else {
    std::string::operator=(*(string **)(param_2 + 0x18),psVar5);
    psVar5 = (string *)param_1[1];
    sVar2 = *psVar5;
    if (((byte)sVar2 & 1) == 0) goto LAB_007e4e5c;
LAB_007e4e78:
    if (*(long *)(psVar5 + 8) != 0) goto LAB_007e4e80;
  }
  iVar7 = *(int *)((long)param_1 + 0x7c);
joined_r0x007e5330:
  if (iVar7 == 3) {
    FUN_007e5340(param_2,"proto3");
  }
  if (0 < *(int *)(param_1 + 3)) {
    lVar12 = 0;
    do {
      psVar11 = (string *)**(undefined8 **)(param_1[4] + lVar12 * 8);
      psVar5 = (string *)FUN_007f7930(param_2 + 0x28);
      std::string::operator=(psVar5,psVar11);
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(param_1 + 3));
  }
  if (0 < *(int *)(param_1 + 5)) {
    lVar12 = 0;
    do {
      uVar1 = *(undefined4 *)(param_1[6] + lVar12 * 4);
      iVar7 = *(int *)(param_2 + 0x40);
      if (iVar7 == *(int *)(param_2 + 0x44)) {
        FUN_007f7a40((int *)(param_2 + 0x40),iVar7 + 1);
        iVar7 = *(int *)(param_2 + 0x40);
      }
      *(int *)(param_2 + 0x40) = iVar7 + 1;
      *(undefined4 *)(*(long *)(param_2 + 0x48) + (long)iVar7 * 4 + 8) = uVar1;
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(param_1 + 5));
  }
  if (0 < *(int *)(param_1 + 7)) {
    lVar12 = 0;
    do {
      uVar1 = *(undefined4 *)(param_1[8] + lVar12 * 4);
      iVar7 = *(int *)(param_2 + 0x50);
      if (iVar7 == *(int *)(param_2 + 0x54)) {
        FUN_007f7a40((int *)(param_2 + 0x50),iVar7 + 1);
        iVar7 = *(int *)(param_2 + 0x50);
      }
      *(int *)(param_2 + 0x50) = iVar7 + 1;
      *(undefined4 *)(*(long *)(param_2 + 0x58) + (long)iVar7 * 4 + 8) = uVar1;
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(param_1 + 7));
  }
  if (0 < *(int *)(param_1 + 9)) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      lVar8 = param_1[10];
      piVar9 = *(int **)(param_2 + 0x70);
      if (piVar9 == (int *)0x0) {
        iVar7 = *(int *)(param_2 + 0x6c);
LAB_007e501c:
        FUN_00824290(param_2 + 0x60,iVar7 + 1);
        piVar9 = *(int **)(param_2 + 0x70);
        iVar7 = *piVar9;
LAB_007e5030:
        *piVar9 = iVar7 + 1;
        uVar6 = FUN_007f7b70(0,*(undefined8 *)(param_2 + 0x60));
        iVar7 = *(int *)(param_2 + 0x68);
        *(int *)(param_2 + 0x68) = iVar7 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x70) + (long)iVar7 * 8 + 8) = uVar6;
      }
      else {
        iVar3 = *(int *)(param_2 + 0x68);
        iVar7 = *piVar9;
        if (iVar7 <= iVar3) {
          if (iVar7 == *(int *)(param_2 + 0x6c)) goto LAB_007e501c;
          goto LAB_007e5030;
        }
        *(int *)(param_2 + 0x68) = iVar3 + 1;
        uVar6 = *(undefined8 *)(piVar9 + (long)iVar3 * 2 + 2);
      }
      FUN_007e5450(lVar8 + lVar13,uVar6);
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + 0xa8;
    } while (lVar12 < *(int *)(param_1 + 9));
  }
  if (0 < *(int *)(param_1 + 0xb)) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      lVar8 = param_1[0xc];
      piVar9 = *(int **)(param_2 + 0x88);
      if (piVar9 == (int *)0x0) {
        iVar7 = *(int *)(param_2 + 0x84);
LAB_007e50dc:
        FUN_00824290(param_2 + 0x78,iVar7 + 1);
        piVar9 = *(int **)(param_2 + 0x88);
        iVar7 = *piVar9;
LAB_007e50f0:
        *piVar9 = iVar7 + 1;
        uVar6 = FUN_007f7bf0(0,*(undefined8 *)(param_2 + 0x78));
        iVar7 = *(int *)(param_2 + 0x80);
        *(int *)(param_2 + 0x80) = iVar7 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x88) + (long)iVar7 * 8 + 8) = uVar6;
      }
      else {
        iVar3 = *(int *)(param_2 + 0x80);
        iVar7 = *piVar9;
        if (iVar7 <= iVar3) {
          if (iVar7 == *(int *)(param_2 + 0x84)) goto LAB_007e50dc;
          goto LAB_007e50f0;
        }
        *(int *)(param_2 + 0x80) = iVar3 + 1;
        uVar6 = *(undefined8 *)(piVar9 + (long)iVar3 * 2 + 2);
      }
      FUN_007e5ad0(lVar8 + lVar13,uVar6);
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + 0x38;
    } while (lVar12 < *(int *)(param_1 + 0xb));
  }
  if (0 < *(int *)(param_1 + 0xd)) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      lVar8 = param_1[0xe];
      piVar9 = *(int **)(param_2 + 0xa0);
      if (piVar9 == (int *)0x0) {
        iVar7 = *(int *)(param_2 + 0x9c);
LAB_007e519c:
        FUN_00824290(param_2 + 0x90,iVar7 + 1);
        piVar9 = *(int **)(param_2 + 0xa0);
        iVar7 = *piVar9;
LAB_007e51b0:
        *piVar9 = iVar7 + 1;
        uVar6 = FUN_007f7c70(0,*(undefined8 *)(param_2 + 0x90));
        iVar7 = *(int *)(param_2 + 0x98);
        *(int *)(param_2 + 0x98) = iVar7 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0xa0) + (long)iVar7 * 8 + 8) = uVar6;
      }
      else {
        iVar3 = *(int *)(param_2 + 0x98);
        iVar7 = *piVar9;
        if (iVar7 <= iVar3) {
          if (iVar7 == *(int *)(param_2 + 0x9c)) goto LAB_007e519c;
          goto LAB_007e51b0;
        }
        *(int *)(param_2 + 0x98) = iVar3 + 1;
        uVar6 = *(undefined8 *)(piVar9 + (long)iVar3 * 2 + 2);
      }
      FUN_007e5c60(lVar8 + lVar13,uVar6);
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + 0x30;
    } while (lVar12 < *(int *)(param_1 + 0xd));
  }
  if (0 < *(int *)(param_1 + 0xf)) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      lVar8 = param_1[0x11];
      piVar9 = *(int **)(param_2 + 0xb8);
      if (piVar9 == (int *)0x0) {
        iVar7 = *(int *)(param_2 + 0xb4);
LAB_007e525c:
        FUN_00824290(param_2 + 0xa8,iVar7 + 1);
        piVar9 = *(int **)(param_2 + 0xb8);
        iVar7 = *piVar9;
LAB_007e5270:
        *piVar9 = iVar7 + 1;
        uVar6 = FUN_007f7cf0(0,*(undefined8 *)(param_2 + 0xa8));
        iVar7 = *(int *)(param_2 + 0xb0);
        *(int *)(param_2 + 0xb0) = iVar7 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0xb8) + (long)iVar7 * 8 + 8) = uVar6;
      }
      else {
        iVar3 = *(int *)(param_2 + 0xb0);
        iVar7 = *piVar9;
        if (iVar7 <= iVar3) {
          if (iVar7 == *(int *)(param_2 + 0xb4)) goto LAB_007e525c;
          goto LAB_007e5270;
        }
        *(int *)(param_2 + 0xb0) = iVar3 + 1;
        uVar6 = *(undefined8 *)(piVar9 + (long)iVar3 * 2 + 2);
      }
      FUN_007e5df0(lVar8 + lVar13,uVar6);
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + 0x90;
    } while (lVar12 < *(int *)(param_1 + 0xf));
  }
  lVar13 = param_1[0x12];
  lVar12 = FUN_008469a0();
  if (lVar13 == lVar12) {
    return;
  }
  pvVar10 = *(void **)(param_2 + 0xc0);
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x200;
  if (pvVar10 == (void *)0x0) {
    pvVar10 = operator_new(0x88);
    FUN_008543d0();
    *(void **)(param_2 + 0xc0) = pvVar10;
  }
  FUN_00855cd0(pvVar10,param_1[0x12]);
  return;
}


