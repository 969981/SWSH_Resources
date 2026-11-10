/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ecb60; name: FUN_004ecb60
 */


undefined8 FUN_004ecb60(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  char *local_58;
  char local_50;
  undefined4 local_48;
  undefined1 local_44;
  
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar5 != 0) {
    uVar3 = 0;
    if (uVar5 != 0) {
      uVar3 = (uint)param_3 / uVar5;
    }
    for (plVar9 = *(long **)(*param_1 + (ulong)((uint)param_3 - uVar3 * uVar5) * 8);
        plVar9 != (long *)0x0; plVar9 = (long *)plVar9[8]) {
      if (plVar9[7] == param_3) goto LAB_004ecca8;
    }
  }
  plVar2 = param_1 + 0xe;
  plVar9 = (long *)FUN_004eca10(plVar2,param_3);
  if (plVar9 == (long *)0x0) {
LAB_004ecd68:
    uVar10 = 0x34;
  }
  else {
    uVar5 = *(uint *)(param_1 + 1);
    if ((uVar5 == 0) ||
       (fVar11 = (float)NEON_ucvtf((int)param_1[2]), DAT_01d4bee0 < fVar11 / (float)uVar5)) {
      FUN_004ee8f0(param_1);
      uVar5 = *(uint *)(param_1 + 1);
      if (uVar5 == 0) {
        FUN_004e83f0(plVar9);
        if ((long *)*plVar2 == (long *)0x0) {
          plVar8 = (long *)0x0;
        }
        else {
          plVar8 = (long *)0x0;
          plVar4 = (long *)*plVar2;
          do {
            plVar6 = plVar4;
            if ((plVar6 <= plVar9) && (plVar9 < plVar6 + 0x340)) goto LAB_004ecd0c;
            plVar8 = plVar6;
            plVar4 = (long *)plVar6[0x340];
          } while ((long *)plVar6[0x340] != (long *)0x0);
        }
        plVar6 = (long *)0x0;
LAB_004ecd0c:
        if (plVar6[0x342] == 0) {
          plVar6[0x342] = (long)plVar9;
          *plVar9 = 0;
        }
        else {
          *plVar9 = plVar6[0x342];
          plVar6[0x342] = (long)plVar9;
        }
        iVar1 = (int)plVar6[0x341] + 1;
        *(int *)(plVar6 + 0x341) = iVar1;
        if (iVar1 == 0x40) {
          if ((long *)*plVar2 != plVar6) {
            plVar2 = plVar8 + 0x340;
          }
          *plVar2 = plVar6[0x340];
          FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
        }
        goto LAB_004ecd68;
      }
    }
    uVar3 = 0;
    if (uVar5 != 0) {
      uVar3 = *(uint *)(plVar9 + 7) / uVar5;
    }
    lVar7 = (ulong)(*(uint *)(plVar9 + 7) - uVar3 * uVar5) * 8;
    plVar9[8] = *(long *)(*param_1 + lVar7);
    *(long **)(*param_1 + lVar7) = plVar9;
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    local_64 = 0x3f8000003f800000;
    local_68 = 0;
    local_58 = (char *)0x0;
    local_50 = '\0';
    local_48 = 0;
    local_44 = 0;
    local_70 = 0x3f80000000000000;
    local_80 = 0x3f80000000000000;
    uStack_78 = 0;
    if (param_3 == -1) {
      local_64 = 0x3f800000;
      local_58 = "Outdoors";
    }
    FUN_004e87e0(plVar9,&local_80,0xffffffffffffffff);
    if ((local_58 != (char *)0x0) && (local_50 != '\0')) {
      FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
      local_50 = '\0';
    }
LAB_004ecca8:
    uVar10 = 1;
    FUN_004ecd90(param_2,plVar9,1);
  }
  return uVar10;
}


