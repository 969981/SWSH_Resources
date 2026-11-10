/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ec860; name: FUN_004ec860
 */


undefined8 FUN_004ec860(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  float fVar11;
  
  uVar6 = *(uint *)(param_1 + 1);
  if (uVar6 != 0) {
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = (uint)param_2 / uVar6;
    }
    for (plVar10 = *(long **)(*param_1 + (ulong)((uint)param_2 - uVar3 * uVar6) * 8);
        plVar10 != (long *)0x0; plVar10 = (long *)plVar10[8]) {
      if (plVar10[7] == param_2) goto LAB_004ec92c;
    }
  }
  plVar2 = param_1 + 0xe;
  plVar10 = (long *)FUN_004eca10(plVar2);
  if (plVar10 == (long *)0x0) {
LAB_004ec9ec:
    uVar5 = 0x34;
  }
  else {
    uVar6 = *(uint *)(param_1 + 1);
    if ((uVar6 == 0) ||
       (fVar11 = (float)NEON_ucvtf((int)param_1[2]), DAT_01d4bee0 < fVar11 / (float)uVar6)) {
      FUN_004ee8f0(param_1);
      uVar6 = *(uint *)(param_1 + 1);
      if (uVar6 == 0) {
        FUN_004e83f0(plVar10);
        if ((long *)*plVar2 == (long *)0x0) {
          plVar9 = (long *)0x0;
        }
        else {
          plVar9 = (long *)0x0;
          plVar4 = (long *)*plVar2;
          do {
            plVar7 = plVar4;
            if ((plVar7 <= plVar10) && (plVar10 < plVar7 + 0x340)) goto LAB_004ec990;
            plVar9 = plVar7;
            plVar4 = (long *)plVar7[0x340];
          } while ((long *)plVar7[0x340] != (long *)0x0);
        }
        plVar7 = (long *)0x0;
LAB_004ec990:
        if (plVar7[0x342] == 0) {
          plVar7[0x342] = (long)plVar10;
          *plVar10 = 0;
        }
        else {
          *plVar10 = plVar7[0x342];
          plVar7[0x342] = (long)plVar10;
        }
        iVar1 = (int)plVar7[0x341] + 1;
        *(int *)(plVar7 + 0x341) = iVar1;
        if (iVar1 == 0x40) {
          if ((long *)*plVar2 != plVar7) {
            plVar2 = plVar9 + 0x340;
          }
          *plVar2 = plVar7[0x340];
          FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
        }
        goto LAB_004ec9ec;
      }
    }
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = *(uint *)(plVar10 + 7) / uVar6;
    }
    lVar8 = (ulong)(*(uint *)(plVar10 + 7) - uVar3 * uVar6) * 8;
    plVar10[8] = *(long *)(*param_1 + lVar8);
    *(long **)(*param_1 + lVar8) = plVar10;
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
LAB_004ec92c:
    FUN_004e87e0(plVar10,param_3,param_4);
    uVar5 = 1;
  }
  return uVar5;
}


