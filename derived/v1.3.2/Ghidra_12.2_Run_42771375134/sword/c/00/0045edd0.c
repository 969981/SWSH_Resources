/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045edd0; name: FUN_0045edd0
 */


/* WARNING: Removing unreachable block (ram,0x0045ef18) */

undefined4 FUN_0045edd0(uint param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  undefined *puVar5;
  undefined *puVar6;
  int *piVar7;
  undefined4 uVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  ulong uVar12;
  uint uVar13;
  
  puVar6 = PTR_DAT_02712fd0;
  puVar5 = PTR_DAT_02712a90;
  piVar11 = *(int **)PTR_DAT_02712fd0;
  uVar2 = *(uint *)(PTR_DAT_02712fd0 + 8);
  uVar12 = (ulong)uVar2;
  iVar1 = (param_1 & 0xf | param_2 << 4) + param_3 * 0x10000;
  piVar7 = piVar11;
  if (uVar2 == 0) {
LAB_0045ee48:
    if (piVar7 != piVar11 + uVar12 * 6) {
      return 1;
    }
  }
  else {
    lVar9 = uVar12 * 0x18;
    do {
      if (*piVar7 == iVar1) goto LAB_0045ee48;
      lVar9 = lVar9 + -0x18;
      piVar7 = piVar7 + 6;
    } while (lVar9 != 0);
  }
  piVar7 = piVar11;
  if (uVar2 == 0) {
LAB_0045ee90:
    if (piVar7 == piVar11 + uVar12 * 6) goto LAB_0045ee98;
LAB_0045efd8:
    piVar10 = piVar7 + 2;
    *(undefined8 *)piVar10 = param_4;
    *(undefined8 *)(piVar7 + 4) = param_5;
  }
  else {
    lVar9 = uVar12 * 0x18;
    do {
      if (*piVar7 == iVar1) goto LAB_0045ee90;
      lVar9 = lVar9 + -0x18;
      piVar7 = piVar7 + 6;
    } while (lVar9 != 0);
LAB_0045ee98:
    uVar13 = *(uint *)(PTR_DAT_02712fd0 + 0xc);
    if (uVar2 < uVar13) {
LAB_0045efac:
      if (uVar2 < uVar13) {
        uVar2 = *(uint *)(puVar6 + 8);
        *(uint *)(puVar6 + 8) = uVar2 + 1;
        piVar10 = (int *)0x0;
        if (piVar11 + (ulong)uVar2 * 6 == (int *)0x0) goto LAB_0045efe8;
        piVar11[(ulong)uVar2 * 6] = iVar1;
        piVar7 = piVar11 + (ulong)uVar2 * 6;
        goto LAB_0045efd8;
      }
    }
    else {
      uVar13 = uVar13 + 1;
      piVar11 = (int *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar13 * 0x18);
      if (piVar11 != (int *)0x0) {
        piVar7 = *(int **)puVar6;
        if ((piVar7 != (int *)0x0) && (piVar7 != piVar11)) {
          uVar3 = *(uint *)(puVar6 + 8);
          if (uVar3 != 0) {
            *(undefined8 *)(piVar11 + 4) = *(undefined8 *)(piVar7 + 4);
            *(undefined8 *)(piVar11 + 2) = *(undefined8 *)(piVar7 + 2);
            *(undefined8 *)piVar11 = *(undefined8 *)piVar7;
            if (uVar3 != 1) {
              if (uVar3 == 2) {
                lVar9 = 1;
              }
              else {
                lVar9 = 1;
                piVar10 = piVar7;
                piVar4 = piVar11;
                do {
                  *(undefined8 *)(piVar4 + 10) = *(undefined8 *)(piVar10 + 10);
                  *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(piVar10 + 8);
                  *(undefined8 *)(piVar4 + 6) = *(undefined8 *)(piVar10 + 6);
                  *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(piVar10 + 0xc);
                  *(undefined8 *)(piVar4 + 0xe) = *(undefined8 *)(piVar10 + 0xe);
                  lVar9 = lVar9 + 2;
                  *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(piVar10 + 0x10);
                  piVar10 = piVar10 + 0xc;
                  piVar4 = piVar4 + 0xc;
                } while ((ulong)uVar3 - (ulong)(~uVar3 & 1) != lVar9);
                if ((~uVar3 & 1) == 0) goto LAB_0045ef9c;
              }
              piVar10 = piVar11 + lVar9 * 6;
              piVar7 = piVar7 + lVar9 * 6;
              *(undefined8 *)(piVar10 + 4) = *(undefined8 *)(piVar7 + 4);
              *(undefined8 *)(piVar10 + 2) = *(undefined8 *)(piVar7 + 2);
              *(undefined8 *)piVar10 = *(undefined8 *)piVar7;
            }
          }
LAB_0045ef9c:
          FUN_00404870(*(undefined4 *)puVar5);
        }
        *(int **)puVar6 = piVar11;
        *(uint *)(puVar6 + 0xc) = uVar13;
        goto LAB_0045efac;
      }
    }
    piVar10 = (int *)0x0;
  }
LAB_0045efe8:
  uVar8 = 1;
  if (piVar10 == (int *)0x0) {
    uVar8 = 2;
  }
  return uVar8;
}


