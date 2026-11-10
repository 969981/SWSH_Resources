/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009f9dc0; name: FUN_009f9dc0
 */


undefined8 FUN_009f9dc0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  uint extraout_var;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  char *pcVar13;
  byte bVar14;
  undefined8 *puVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  
  FUN_016b8190(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x5d8));
  puVar15 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar7 = (long *)(**(code **)*puVar15)(puVar15);
  lVar8 = FUN_009f0030();
  for (; plVar7 != (long *)lVar8; plVar7 = (long *)*plVar7) {
  }
  lVar8 = puVar15[2];
  uVar10 = extraout_var & 0xff;
  pcVar16 = (char *)(lVar8 + 0x84);
  if (uVar10 == (int)*pcVar16) {
    lVar12 = 0;
    pcVar18 = pcVar16;
LAB_009f9eb0:
    lVar1 = lVar8 + 0x84;
    *pcVar18 = -1;
    lVar2 = lVar12 + 1;
    uVar5 = *(undefined1 *)(lVar1 + lVar12);
    *(undefined1 *)(lVar1 + lVar12) = *(undefined1 *)(lVar1 + lVar2);
    *(undefined1 *)(lVar1 + lVar2) = uVar5;
    if (lVar2 != 5) {
      lVar3 = lVar12 + 2;
      *(undefined1 *)(lVar1 + lVar2) = *(undefined1 *)(lVar1 + lVar3);
      *(undefined1 *)(lVar1 + lVar3) = uVar5;
      if (lVar3 != 5) {
        lVar1 = lVar8 + 0x84;
        lVar2 = lVar12 + 3;
        *(undefined1 *)(lVar1 + lVar3) = *(undefined1 *)(lVar1 + lVar2);
        *(undefined1 *)(lVar1 + lVar2) = uVar5;
        if (lVar2 != 5) {
          lVar3 = lVar12 + 4;
          *(undefined1 *)(lVar1 + lVar2) = *(undefined1 *)(lVar1 + lVar3);
          *(undefined1 *)(lVar1 + lVar3) = uVar5;
          if (lVar3 != 5) {
            lVar12 = lVar8 + 0x84 + lVar12;
            *(undefined1 *)(lVar8 + 0x84 + lVar3) = *(undefined1 *)(lVar12 + 5);
            *(undefined1 *)(lVar12 + 5) = uVar5;
            cVar4 = *pcVar16;
            uVar9 = *(undefined8 *)(param_1 + 0x80);
            goto joined_r0x009fa0ac;
          }
        }
      }
    }
  }
  else {
    pcVar17 = (char *)(lVar8 + 0x85);
    if (uVar10 == (int)*pcVar17) {
      lVar12 = 1;
      pcVar18 = pcVar17;
      goto LAB_009f9eb0;
    }
    pcVar21 = (char *)(lVar8 + 0x86);
    if (uVar10 == (int)*pcVar21) {
      lVar12 = 2;
      pcVar18 = pcVar21;
      goto LAB_009f9eb0;
    }
    pcVar19 = (char *)(lVar8 + 0x87);
    if (uVar10 == (int)*pcVar19) {
      lVar12 = 3;
      pcVar18 = pcVar19;
      goto LAB_009f9eb0;
    }
    pcVar18 = (char *)(lVar8 + 0x88);
    if (uVar10 == (int)*pcVar18) {
      lVar12 = 4;
      goto LAB_009f9eb0;
    }
    pcVar20 = (char *)(lVar8 + 0x89);
    if (uVar10 == (int)*pcVar20) {
      *pcVar20 = -1;
      cVar4 = *pcVar16;
      uVar9 = *(undefined8 *)(param_1 + 0x80);
      goto joined_r0x009fa0ac;
    }
    bVar6 = FUN_009ee140(puVar15 + -10);
    if (*pcVar16 == -1) {
      if (bVar6 == 0) {
        return 0;
      }
    }
    else if (*pcVar17 == -1) {
      if (bVar6 < 2) {
        return 0;
      }
    }
    else if (*pcVar21 == -1) {
      if (bVar6 < 3) {
        return 0;
      }
    }
    else if (*pcVar19 == -1) {
      if (bVar6 < 4) {
        return 0;
      }
    }
    else if (*pcVar18 == -1) {
      if (bVar6 < 5) {
        return 0;
      }
    }
    else {
      bVar14 = 5;
      if (*pcVar20 != -1) {
        bVar14 = 6;
      }
      if (bVar6 <= bVar14) {
        return 0;
      }
    }
    pcVar13 = pcVar16;
    if ((((*pcVar16 == -1) || (pcVar13 = pcVar17, *pcVar17 == -1)) ||
        (pcVar13 = pcVar21, *pcVar21 == -1)) ||
       (((pcVar13 = pcVar19, *pcVar19 == -1 || (pcVar13 = pcVar18, *pcVar18 == -1)) ||
        (pcVar13 = pcVar20, *pcVar20 == -1)))) {
      *pcVar13 = (char)extraout_var;
    }
  }
  cVar4 = *pcVar16;
  uVar9 = *(undefined8 *)(param_1 + 0x80);
joined_r0x009fa0ac:
  if (cVar4 == -1) {
    uVar11 = 0;
  }
  else if (*(char *)(lVar8 + 0x85) == -1) {
    uVar11 = 1;
  }
  else if (*(char *)(lVar8 + 0x86) == -1) {
    uVar11 = 2;
  }
  else if (*(char *)(lVar8 + 0x87) == -1) {
    uVar11 = 3;
  }
  else if (*(char *)(lVar8 + 0x88) == -1) {
    uVar11 = 4;
  }
  else {
    uVar11 = 5;
    if (*(char *)(lVar8 + 0x89) != -1) {
      uVar11 = 6;
    }
  }
  FUN_009f1ab0(uVar9,uVar11);
  return 1;
}


