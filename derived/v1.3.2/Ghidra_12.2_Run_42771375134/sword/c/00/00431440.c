/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00431440; name: FUN_00431440
 */


undefined8
FUN_00431440(char *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,int param_6,undefined8 param_7,undefined4 param_8)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  uint uVar4;
  size_t sVar5;
  size_t sVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar10;
  byte *pbVar9;
  ulong uVar11;
  long *plVar12;
  int **ppiVar13;
  int *local_178;
  undefined8 local_170;
  undefined4 local_168;
  byte local_164 [260];
  
  if (param_6 == 0) {
    ppiVar13 = (int **)0x0;
  }
  else {
    local_170 = 0;
    local_168 = 0;
    local_178 = (int *)FUN_00430f20(param_6,param_7);
    if (local_178 == (int *)0x0) {
      return 0;
    }
    ppiVar13 = &local_178;
  }
  if (param_1 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    sVar5 = strlen(param_1);
    sVar6 = 0x103;
    if (sVar5 + 1 < 0x103) {
      sVar6 = sVar5 + 1;
    }
    strncpy((char *)local_164,param_1,sVar6);
    local_164[sVar6] = 0;
    sVar6 = strlen(param_1);
    if (sVar6 != 0) {
      pbVar10 = local_164;
      sVar5 = sVar6;
      do {
        if (*pbVar10 - 0x41 < 0x1a) {
          *pbVar10 = *pbVar10 + 0x20;
        }
        sVar5 = sVar5 - 1;
        pbVar10 = pbVar10 + 1;
      } while (sVar5 != 0);
    }
    uVar4 = 0x811c9dc5;
    if ((int)sVar6 != 0) {
      pbVar10 = local_164;
      do {
        pbVar9 = pbVar10 + 1;
        uVar4 = uVar4 * 0x1000193 ^ (uint)*pbVar10;
        pbVar10 = pbVar9;
      } while (pbVar9 < local_164 + (sVar6 & 0xffffffff));
    }
  }
  uVar7 = FUN_00431060(uVar4,param_2,param_3,param_4,param_5,ppiVar13,param_8);
  piVar3 = local_178;
  if ((param_6 != 0) && ((int)uVar7 == 0)) {
    iVar1 = *local_178;
    *local_178 = iVar1 + -1;
    puVar2 = PTR_DAT_02712a90;
    if (iVar1 + -1 == 0) {
      uVar8 = (ulong)(uint)local_178[1];
      if (local_178[1] != 0) {
        uVar11 = 0;
        plVar12 = (long *)(local_178 + 4);
        do {
          if (*plVar12 != 0) {
            FUN_00404870(*(undefined4 *)puVar2);
            uVar8 = (ulong)(uint)piVar3[1];
          }
          uVar11 = uVar11 + 1;
          plVar12 = plVar12 + 4;
        } while (uVar11 < uVar8);
      }
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,piVar3);
    }
    uVar7 = 0;
  }
  return uVar7;
}


