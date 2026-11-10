/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe1ee0; name: FUN_00fe1ee0
 */


void FUN_00fe1ee0(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  bool bVar12;
  char cVar13;
  byte bVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int *piVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  char cVar23;
  long lVar24;
  long lVar25;
  
  switch(*(undefined4 *)(param_1 + 0x148)) {
  case 0:
    if (*(int *)(param_1 + 0x18) == 0) {
      *(undefined4 *)(param_1 + 0x18) = 0x96;
      lVar24 = *(long *)PTR_DAT_027108d8;
      if (*(char *)(lVar24 + 0x11b20) == '\0') goto LAB_00fe1f28;
      *(char *)(lVar24 + 0x11b20) = '\0';
      uVar17 = *(undefined8 *)(lVar24 + 0xbc);
      uVar18 = *(undefined8 *)(lVar24 + 0xc4);
      uVar20 = *(undefined8 *)(lVar24 + 0xcc);
      uVar21 = *(undefined8 *)(lVar24 + 0xd4);
      uVar22 = *(undefined8 *)(lVar24 + 0xdc);
      uVar3 = *(undefined4 *)(lVar24 + 0xe4);
      uVar10 = *(undefined2 *)(lVar24 + 0xe8);
      uVar4 = *(undefined4 *)(lVar24 + 0xec);
      uVar7 = *(undefined1 *)(lVar24 + 0xf0);
      uVar8 = *(undefined1 *)(lVar24 + 0xf1);
      uVar1 = *(undefined4 *)(lVar24 + 0xf4);
      uVar2 = *(undefined4 *)(lVar24 + 0xf8);
      uVar5 = *(undefined4 *)(lVar24 + 0xfc);
      uVar11 = *(undefined2 *)(lVar24 + 0x100);
      uVar9 = *(undefined1 *)(lVar24 + 0x102);
      if (*(int *)(param_1 + 0x104) == -1) {
        if (*(int *)(param_1 + 0x2c) == -1) {
          lVar24 = 0;
        }
        else {
          if (*(int *)(param_1 + 0x74) == -1) {
            bVar12 = true;
            lVar24 = 1;
            goto LAB_00fe2350;
          }
          lVar24 = 2;
          if (*(int *)(param_1 + 0xbc) != -1) {
            lVar24 = 3;
          }
        }
        bVar12 = true;
      }
      else {
        bVar12 = false;
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x78);
        *(undefined1 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x90);
        *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x98);
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x80);
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x88);
        *(undefined8 *)(param_1 + 0x67) = *(undefined8 *)(param_1 + 0xaf);
        *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0xa0);
        *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0xa8);
        *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0xb8);
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0xc0);
        *(undefined1 *)(param_1 + 0x70) = 0;
        *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0xd8);
        *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0xe0);
        *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 200);
        *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0xd0);
        *(undefined8 *)(param_1 + 0xaf) = *(undefined8 *)(param_1 + 0xf7);
        *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0xe8);
        *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0xf0);
        *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x100);
        *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x108);
        *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x120);
        *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0x128);
        *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x110);
        *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x118);
        *(undefined8 *)(param_1 + 0xf7) = *(undefined8 *)(param_1 + 0x13f);
        *(undefined1 *)(param_1 + 0xb8) = 0;
        *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0x130);
        *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x138);
        lVar24 = 3;
      }
LAB_00fe2350:
      lVar24 = param_1 + lVar24 * 0x48;
      *(undefined8 *)(lVar24 + 0x28) = uVar17;
      *(undefined4 *)(lVar24 + 0x50) = uVar3;
      *(undefined2 *)(lVar24 + 0x54) = uVar10;
      *(undefined4 *)(lVar24 + 0x58) = uVar4;
      *(undefined1 *)(lVar24 + 0x5c) = uVar7;
      *(undefined1 *)(lVar24 + 0x5d) = uVar8;
      *(undefined4 *)(lVar24 + 0x60) = uVar1;
      *(undefined4 *)(lVar24 + 100) = uVar2;
      *(undefined4 *)(lVar24 + 0x68) = uVar5;
      *(undefined8 *)(lVar24 + 0x40) = uVar21;
      *(undefined8 *)(lVar24 + 0x48) = uVar22;
      *(undefined8 *)(lVar24 + 0x30) = uVar18;
      *(undefined8 *)(lVar24 + 0x38) = uVar20;
      *(undefined2 *)(lVar24 + 0x6c) = uVar11;
      *(undefined1 *)(lVar24 + 0x6e) = uVar9;
      *(undefined4 *)(lVar24 + 0x30) = 0x708;
      *(undefined1 *)(lVar24 + 0x28) = 1;
      if (bVar12) {
        *(undefined4 *)(param_1 + 0x148) = 3;
        iVar6 = *(int *)(param_1 + 0x2c);
      }
      else {
        *(undefined4 *)(param_1 + 0x148) = 1;
        FUN_00fe3530(*(undefined8 *)(param_1 + 0x20),1);
        iVar6 = *(int *)(param_1 + 0x2c);
      }
    }
    else {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
LAB_00fe1f28:
      iVar6 = *(int *)(param_1 + 0x2c);
    }
    if (iVar6 != -1) {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    }
    piVar19 = (int *)(param_1 + 0x2c);
    piVar16 = (int *)(param_1 + 0x74);
    if (*piVar16 != -1) {
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
    }
    iVar6 = *(int *)(param_1 + 0xbc);
    if (iVar6 != -1) {
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + -1;
    }
    if (*(int *)(param_1 + 0x104) != -1) {
      *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + -1;
    }
    if (*(int *)(param_1 + 0x30) != 0) break;
    if (*piVar16 != -1) {
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x90);
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0x67) = *(undefined8 *)(param_1 + 0xaf);
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0xa0);
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0xa8);
    }
    if (iVar6 != -1) {
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0xb8);
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0xc0);
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0xd8);
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0xe0);
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 200);
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0xd0);
      *(undefined8 *)(param_1 + 0xaf) = *(undefined8 *)(param_1 + 0xf7);
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0xe8);
      *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0xf0);
    }
    if (*(int *)(param_1 + 0x104) == -1) {
      if (iVar6 != -1) {
        lVar24 = 2;
        piVar19 = (int *)(param_1 + 0xbc);
        goto LAB_00fe2404;
      }
      if (*piVar16 != -1) {
        lVar24 = 1;
        piVar19 = piVar16;
        goto LAB_00fe2404;
      }
      if (*piVar19 != -1) {
        lVar24 = 0;
        goto LAB_00fe2404;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x100);
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x108);
      *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x120);
      *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0x128);
      *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x110);
      *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x118);
      lVar24 = 3;
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0x130);
      *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x138);
      *(undefined8 *)(param_1 + 0xf7) = *(undefined8 *)(param_1 + 0x13f);
      piVar19 = (int *)(param_1 + 0x104);
LAB_00fe2404:
      lVar24 = param_1 + lVar24 * 0x48;
      *(undefined1 *)(lVar24 + 0x28) = 0;
      *piVar19 = -1;
      *(undefined4 *)(lVar24 + 0x30) = 0xffffffff;
      *(undefined1 *)(lVar24 + 0x6c) = 0;
    }
    if (*(int *)(param_1 + 0x148) == 0) {
      *(undefined4 *)(param_1 + 0x148) = 1;
    }
    break;
  case 1:
    cVar13 = *(int *)(param_1 + 0x2c) != -1;
    cVar23 = '\x02';
    if (!(bool)cVar13) {
      cVar23 = '\x01';
    }
    if (*(int *)(param_1 + 0x74) != -1) {
      cVar13 = cVar23;
    }
    if (*(int *)(param_1 + 0xbc) != -1) {
      cVar13 = cVar13 + '\x01';
    }
    if (*(int *)(param_1 + 0x104) != -1) {
      cVar13 = cVar13 + '\x01';
    }
    if ((cVar13 == '\x03') && (*(char *)(*(long *)(param_1 + 0x20) + 0x5f0) != '\0')) {
      FUN_00fe3530(*(long *)(param_1 + 0x20),0);
    }
    FUN_00fe0dd0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x5d0));
    *(undefined4 *)(param_1 + 0x148) = 2;
    break;
  case 2:
    uVar15 = FUN_00fe0de0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x5d0));
    if ((uVar15 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x148) = 3;
    }
    break;
  case 3:
    FUN_00fe0c50(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x5d0),(undefined1 *)(param_1 + 0x28));
    if (*(int *)(param_1 + 0x2c) != -1) {
      *(undefined1 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(param_1 + 0x74) != -1) {
      *(undefined1 *)(param_1 + 0x70) = 0;
    }
    if (*(int *)(param_1 + 0xbc) != -1) {
      *(undefined1 *)(param_1 + 0xb8) = 0;
    }
    if (*(int *)(param_1 + 0x104) != -1) {
      *(undefined1 *)(param_1 + 0x100) = 0;
    }
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  lVar24 = *(long *)(*(long *)(param_1 + 0x20) + 0x5d0);
  lVar25 = *(long *)(lVar24 + 0x18);
  FUN_0168b630(lVar25 + 0x40);
  FUN_0168b630(lVar25 + 0x410);
  lVar25 = *(long *)(lVar24 + 0x38);
  FUN_0168b630(lVar25 + 0x40);
  FUN_0168b630(lVar25 + 0x410);
  lVar25 = *(long *)(lVar24 + 0x58);
  FUN_0168b630(lVar25 + 0x40);
  FUN_0168b630(lVar25 + 0x410);
  lVar24 = *(long *)(lVar24 + 0x78);
  FUN_0168b630(lVar24 + 0x40);
  FUN_0168b630(lVar24 + 0x410);
  FUN_00fe2440(param_1);
  bVar14 = FUN_012092f0(*(undefined8 *)PTR_DAT_02710880);
  if (*PTR_DAT_02723158 == (bVar14 & 1)) {
    return;
  }
  *PTR_DAT_02723158 = bVar14 & 1;
  FUN_00fe3210(*(undefined8 *)(param_1 + 0x20));
  return;
}


