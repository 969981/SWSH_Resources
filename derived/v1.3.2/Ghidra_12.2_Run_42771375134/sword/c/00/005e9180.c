/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e9180; name: FUN_005e9180
 */


undefined8 FUN_005e9180(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  if (*(long *)(param_1 + 0x10) < param_2) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (param_2 < 2) {
    lVar4 = 1;
    if (1 < param_2) {
LAB_005e91cc:
      lVar7 = param_3[lVar4];
      param_3[lVar4] = *param_3;
      *param_3 = lVar7;
      if (param_2 < 2) {
        lVar4 = 1;
      }
      else {
        lVar6 = param_2 + -1;
        lVar4 = 1;
        do {
          uVar3 = *(uint *)(param_3[lVar4] + 0x10);
          while ((uVar3 < *(uint *)(lVar7 + 0x10) && (lVar4 = lVar4 + 1, lVar4 < lVar6))) {
            uVar3 = *(uint *)(param_3[lVar4] + 0x10);
          }
          uVar3 = *(uint *)(param_3[lVar6] + 0x10);
          while ((*(uint *)(lVar7 + 0x10) <= uVar3 && (lVar6 = lVar6 + -1, lVar4 < lVar6))) {
            uVar3 = *(uint *)(param_3[lVar6] + 0x10);
          }
          if (lVar4 < lVar6) {
            lVar8 = param_3[lVar4];
            param_3[lVar4] = param_3[lVar6];
            param_3[lVar6] = lVar8;
          }
        } while (lVar4 <= lVar6);
        lVar7 = *param_3;
      }
      uVar5 = lVar4 - 1;
      lVar4 = param_3[uVar5];
      param_3[uVar5] = lVar7;
      *param_3 = lVar4;
      lVar4 = *(long *)(param_1 + 0x18);
      goto LAB_005e92a8;
    }
  }
  else {
    lVar4 = param_2;
    if (param_2 < 0) {
      lVar4 = param_2 + 1;
    }
    lVar4 = lVar4 >> 1;
    if (lVar4 < param_2) goto LAB_005e91cc;
  }
  lVar4 = 0;
  uVar5 = 0;
LAB_005e92a8:
  lVar7 = *(long *)(param_1 + 0x20);
  *(ulong *)(lVar7 + lVar4 * 0x10) = ~uVar5 + param_2;
  if ((long)(~uVar5 + param_2) < 2) {
    lVar4 = *(long *)(param_1 + 0x18);
  }
  else {
    *(long **)(lVar7 + lVar4 * 0x10 + 8) = param_3 + uVar5 + 1;
    lVar4 = *(long *)(param_1 + 0x18) + 1;
    *(long *)(param_1 + 0x18) = lVar4;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  *(ulong *)(lVar7 + lVar4 * 0x10) = uVar5;
  if ((long)uVar5 < 2) {
    lVar4 = *(long *)(param_1 + 0x18);
  }
  else {
    *(long **)(lVar7 + lVar4 * 0x10 + 8) = param_3;
    lVar4 = *(long *)(param_1 + 0x18) + 1;
    *(long *)(param_1 + 0x18) = lVar4;
  }
  do {
    if (lVar4 < 1) {
      return 1;
    }
    while( true ) {
      lVar8 = *(long *)(param_1 + 0x20);
      lVar4 = lVar4 + -1;
      *(long *)(param_1 + 0x18) = lVar4;
      plVar9 = (long *)(lVar8 + lVar4 * 0x10);
      lVar6 = *plVar9;
      plVar2 = (long *)plVar9[1];
      lVar7 = lVar6;
      if (lVar6 < 0) {
        lVar7 = lVar6 + 1;
      }
      lVar10 = lVar6 + -1;
      lVar1 = 1;
      if (lVar10 != 0 && 0 < lVar6) {
        lVar1 = lVar7 >> 1;
      }
      if (lVar1 < lVar6) {
        lVar7 = plVar2[lVar1];
        plVar2[lVar1] = *plVar2;
        lVar4 = 1;
        *plVar2 = lVar7;
        if (1 < lVar6) {
          do {
            uVar3 = *(uint *)(plVar2[lVar4] + 0x10);
            while ((uVar3 < *(uint *)(lVar7 + 0x10) && (lVar4 = lVar4 + 1, lVar4 < lVar10))) {
              uVar3 = *(uint *)(plVar2[lVar4] + 0x10);
            }
            uVar3 = *(uint *)(plVar2[lVar10] + 0x10);
            while ((*(uint *)(lVar7 + 0x10) <= uVar3 && (lVar10 = lVar10 + -1, lVar4 < lVar10))) {
              uVar3 = *(uint *)(plVar2[lVar10] + 0x10);
            }
            if (lVar4 < lVar10) {
              lVar8 = plVar2[lVar4];
              plVar2[lVar4] = plVar2[lVar10];
              plVar2[lVar10] = lVar8;
            }
          } while (lVar4 <= lVar10);
          lVar7 = *plVar2;
        }
        uVar5 = lVar4 - 1;
        lVar4 = plVar2[uVar5];
        plVar2[uVar5] = lVar7;
        *plVar2 = lVar4;
        lVar4 = *(long *)(param_1 + 0x18);
        lVar8 = *(long *)(param_1 + 0x20);
        plVar9 = (long *)(lVar8 + lVar4 * 0x10);
      }
      else {
        uVar5 = 0;
      }
      *plVar9 = lVar6 + ~uVar5;
      if ((long)(lVar6 + ~uVar5) < 2) {
        lVar4 = *(long *)(param_1 + 0x18);
      }
      else {
        *(long **)(lVar8 + lVar4 * 0x10 + 8) = plVar2 + uVar5 + 1;
        lVar4 = *(long *)(param_1 + 0x18) + 1;
        *(long *)(param_1 + 0x18) = lVar4;
      }
      lVar7 = *(long *)(param_1 + 0x20);
      *(ulong *)(lVar7 + lVar4 * 0x10) = uVar5;
      if ((long)uVar5 < 2) break;
      *(long **)(lVar7 + lVar4 * 0x10 + 8) = plVar2;
      lVar4 = *(long *)(param_1 + 0x18) + 1;
      *(long *)(param_1 + 0x18) = lVar4;
      if (lVar4 < 1) {
        return 1;
      }
    }
    lVar4 = *(long *)(param_1 + 0x18);
  } while( true );
}


