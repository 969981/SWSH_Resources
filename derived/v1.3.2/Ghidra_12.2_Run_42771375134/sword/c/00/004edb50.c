/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004edb50; name: FUN_004edb50
 */


void FUN_004edb50(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  
  puVar2 = PTR_DAT_02713640;
  if (*(uint *)(param_1 + 1) != 0) {
    plVar10 = *(long **)*param_1;
    if (plVar10 == (long *)0x0) {
      uVar6 = 0;
      do {
        uVar6 = uVar6 + 1;
        if (*(uint *)(param_1 + 1) <= uVar6) goto LAB_004edca4;
        plVar10 = (long *)((undefined8 *)*param_1)[uVar6];
      } while (plVar10 == (long *)0x0);
    }
    else {
      uVar6 = 0;
    }
    do {
      plVar7 = (long *)plVar10[8];
      plVar11 = plVar7;
      uVar9 = uVar6;
      if (plVar7 == (long *)0x0) {
        do {
          uVar9 = uVar9 + 1;
          if (*(uint *)(param_1 + 1) <= uVar9) {
            plVar11 = (long *)0x0;
            break;
          }
          plVar11 = *(long **)(*param_1 + (ulong)uVar9 * 8);
        } while (plVar11 == (long *)0x0);
      }
      *(long **)(*param_1 + (ulong)uVar6 * 8) = plVar7;
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
      FUN_004e83f0(plVar10);
      if ((long *)param_1[0xe] == (long *)0x0) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = (long *)0x0;
        plVar3 = (long *)param_1[0xe];
        do {
          plVar4 = plVar3;
          if ((plVar4 <= plVar10) && (plVar10 < plVar4 + 0x340)) goto LAB_004edc48;
          plVar7 = plVar4;
          plVar3 = (long *)plVar4[0x340];
        } while ((long *)plVar4[0x340] != (long *)0x0);
      }
      plVar4 = (long *)0x0;
LAB_004edc48:
      if (plVar4[0x342] == 0) {
        plVar4[0x342] = (long)plVar10;
        *plVar10 = 0;
      }
      else {
        *plVar10 = plVar4[0x342];
        plVar4[0x342] = (long)plVar10;
      }
      iVar1 = (int)plVar4[0x341] + 1;
      *(int *)(plVar4 + 0x341) = iVar1;
      if (iVar1 == 0x40) {
        plVar10 = param_1 + 0xe;
        if ((long *)param_1[0xe] != plVar4) {
          plVar10 = plVar7 + 0x340;
        }
        *plVar10 = plVar4[0x340];
        FUN_00404870(*(undefined4 *)puVar2);
      }
      plVar10 = plVar11;
      uVar6 = uVar9;
    } while (plVar11 != (long *)0x0);
  }
LAB_004edca4:
  if (*(uint *)(param_1 + 4) != 0) {
    lVar5 = *(long *)param_1[3];
    if (lVar5 == 0) {
      uVar6 = 0;
      do {
        uVar6 = uVar6 + 1;
        if (*(uint *)(param_1 + 4) <= uVar6) {
          return;
        }
        lVar5 = ((long *)param_1[3])[uVar6];
      } while (lVar5 == 0);
    }
    else {
      uVar6 = 0;
    }
    do {
      lVar8 = *(long *)(lVar5 + 0x40);
      lVar5 = lVar8;
      uVar9 = uVar6;
      if (lVar8 == 0) {
        do {
          uVar9 = uVar9 + 1;
          if (*(uint *)(param_1 + 4) <= uVar9) {
            lVar5 = 0;
            break;
          }
          lVar5 = *(long *)(param_1[3] + (ulong)uVar9 * 8);
        } while (lVar5 == 0);
      }
      *(long *)(param_1[3] + (ulong)uVar6 * 8) = lVar8;
      *(int *)(param_1 + 5) = (int)param_1[5] + -1;
      FUN_004ed690(param_1 + 0xf);
      uVar6 = uVar9;
    } while (lVar5 != 0);
  }
  return;
}


