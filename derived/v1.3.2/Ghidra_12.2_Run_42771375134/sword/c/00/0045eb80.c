/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045eb80; name: FUN_0045eb80
 */


/* WARNING: Removing unreachable block (ram,0x0045ecd8) */

undefined4 FUN_0045eb80(int param_1,int param_2,long param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined *puVar6;
  undefined *puVar7;
  int *piVar8;
  undefined4 uVar9;
  long lVar10;
  long *plVar11;
  int *piVar12;
  ulong uVar13;
  uint uVar14;
  
  puVar7 = PTR_DAT_02712fd8;
  puVar6 = PTR_DAT_02712a90;
  iVar1 = (param_1 << 4 | 1U) + param_2 * 0x10000;
  piVar12 = *(int **)PTR_DAT_02712fd8;
  uVar2 = *(uint *)(PTR_DAT_02712fd8 + 8);
  uVar13 = (ulong)uVar2;
  piVar8 = piVar12;
  if (uVar2 == 0) {
LAB_0045ebfc:
    if (piVar8 != piVar12 + uVar13 * 6) {
      return 2;
    }
  }
  else {
    lVar10 = uVar13 * 0x18;
    do {
      if (*piVar8 == iVar1) goto LAB_0045ebfc;
      lVar10 = lVar10 + -0x18;
      piVar8 = piVar8 + 6;
    } while (lVar10 != 0);
  }
  if (param_3 == 0) {
    return 0x1f;
  }
  if (param_4 == 0) {
    return 0x1f;
  }
  piVar8 = piVar12;
  if (uVar2 == 0) {
LAB_0045ec50:
    if (piVar8 == piVar12 + uVar13 * 6) goto LAB_0045ec58;
LAB_0045ed98:
    plVar11 = (long *)(piVar8 + 2);
    *plVar11 = param_3;
    *(long *)(piVar8 + 4) = param_4;
  }
  else {
    lVar10 = uVar13 * 0x18;
    do {
      if (*piVar8 == iVar1) goto LAB_0045ec50;
      lVar10 = lVar10 + -0x18;
      piVar8 = piVar8 + 6;
    } while (lVar10 != 0);
LAB_0045ec58:
    uVar14 = *(uint *)(PTR_DAT_02712fd8 + 0xc);
    if (uVar2 < uVar14) {
LAB_0045ed6c:
      if (uVar2 < uVar14) {
        uVar2 = *(uint *)(puVar7 + 8);
        *(uint *)(puVar7 + 8) = uVar2 + 1;
        plVar11 = (long *)0x0;
        if (piVar12 + (ulong)uVar2 * 6 == (int *)0x0) goto LAB_0045eda8;
        piVar12[(ulong)uVar2 * 6] = iVar1;
        piVar8 = piVar12 + (ulong)uVar2 * 6;
        goto LAB_0045ed98;
      }
    }
    else {
      uVar14 = uVar14 + 1;
      piVar12 = (int *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar14 * 0x18);
      if (piVar12 != (int *)0x0) {
        piVar8 = *(int **)puVar7;
        if ((piVar8 != (int *)0x0) && (piVar8 != piVar12)) {
          uVar3 = *(uint *)(puVar7 + 8);
          if (uVar3 != 0) {
            *(undefined8 *)(piVar12 + 4) = *(undefined8 *)(piVar8 + 4);
            *(undefined8 *)(piVar12 + 2) = *(undefined8 *)(piVar8 + 2);
            *(undefined8 *)piVar12 = *(undefined8 *)piVar8;
            if (uVar3 != 1) {
              if (uVar3 == 2) {
                lVar10 = 1;
              }
              else {
                lVar10 = 1;
                piVar4 = piVar8;
                piVar5 = piVar12;
                do {
                  *(undefined8 *)(piVar5 + 10) = *(undefined8 *)(piVar4 + 10);
                  *(undefined8 *)(piVar5 + 8) = *(undefined8 *)(piVar4 + 8);
                  *(undefined8 *)(piVar5 + 6) = *(undefined8 *)(piVar4 + 6);
                  *(undefined8 *)(piVar5 + 0xc) = *(undefined8 *)(piVar4 + 0xc);
                  *(undefined8 *)(piVar5 + 0xe) = *(undefined8 *)(piVar4 + 0xe);
                  lVar10 = lVar10 + 2;
                  *(undefined8 *)(piVar5 + 0x10) = *(undefined8 *)(piVar4 + 0x10);
                  piVar4 = piVar4 + 0xc;
                  piVar5 = piVar5 + 0xc;
                } while ((ulong)uVar3 - (ulong)(~uVar3 & 1) != lVar10);
                if ((~uVar3 & 1) == 0) goto LAB_0045ed5c;
              }
              piVar4 = piVar12 + lVar10 * 6;
              piVar8 = piVar8 + lVar10 * 6;
              *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(piVar8 + 4);
              *(undefined8 *)(piVar4 + 2) = *(undefined8 *)(piVar8 + 2);
              *(undefined8 *)piVar4 = *(undefined8 *)piVar8;
            }
          }
LAB_0045ed5c:
          FUN_00404870(*(undefined4 *)puVar6);
        }
        *(int **)puVar7 = piVar12;
        *(uint *)(puVar7 + 0xc) = uVar14;
        goto LAB_0045ed6c;
      }
    }
    plVar11 = (long *)0x0;
  }
LAB_0045eda8:
  uVar9 = 1;
  if (plVar11 == (long *)0x0) {
    uVar9 = 2;
  }
  return uVar9;
}


