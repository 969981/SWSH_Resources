/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00431290; name: FUN_00431290
 */


undefined8
FUN_00431290(wchar_t *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,int param_6,undefined8 param_7,undefined4 param_8)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  uint uVar4;
  size_t sVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar9;
  byte *pbVar8;
  size_t sVar10;
  ulong uVar11;
  long *plVar12;
  int **ppiVar13;
  int *local_180;
  undefined8 local_178;
  undefined4 local_170;
  byte local_16c [259];
  undefined1 local_69;
  mbstate_t local_68;
  wchar_t *local_58;
  
  ppiVar13 = &local_180;
  if (param_6 == 0) {
    ppiVar13 = (int **)0x0;
  }
  else {
    local_178 = 0;
    local_170 = 0;
    local_180 = (int *)FUN_00430f20(param_6,param_7);
    if (local_180 == (int *)0x0) {
      return 0;
    }
  }
  if (param_1 == (wchar_t *)0x0) {
    uVar4 = 0;
  }
  else {
    local_68.__count = 0;
    local_68.__value.__wch = 0;
    local_58 = param_1;
    wcsrtombs((char *)local_16c,&local_58,0x103,&local_68);
    local_69 = 0;
    sVar5 = strlen((char *)local_16c);
    if (sVar5 != 0) {
      pbVar9 = local_16c;
      sVar10 = sVar5;
      do {
        if (*pbVar9 - 0x41 < 0x1a) {
          *pbVar9 = *pbVar9 + 0x20;
        }
        sVar10 = sVar10 - 1;
        pbVar9 = pbVar9 + 1;
      } while (sVar10 != 0);
    }
    uVar4 = 0x811c9dc5;
    if ((int)sVar5 != 0) {
      pbVar9 = local_16c;
      do {
        pbVar8 = pbVar9 + 1;
        uVar4 = uVar4 * 0x1000193 ^ (uint)*pbVar9;
        pbVar9 = pbVar8;
      } while (pbVar8 < local_16c + (sVar5 & 0xffffffff));
    }
  }
  uVar6 = FUN_00431060(uVar4,param_2,param_3,param_4,param_5,ppiVar13,param_8);
  piVar3 = local_180;
  if ((param_6 != 0) && ((int)uVar6 == 0)) {
    iVar1 = *local_180;
    *local_180 = iVar1 + -1;
    puVar2 = PTR_DAT_02712a90;
    if (iVar1 + -1 == 0) {
      uVar7 = (ulong)(uint)local_180[1];
      if (local_180[1] != 0) {
        uVar11 = 0;
        plVar12 = (long *)(local_180 + 4);
        do {
          if (*plVar12 != 0) {
            FUN_00404870(*(undefined4 *)puVar2);
            uVar7 = (ulong)(uint)piVar3[1];
          }
          uVar11 = uVar11 + 1;
          plVar12 = plVar12 + 4;
        } while (uVar11 < uVar7);
      }
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,piVar3);
    }
    uVar6 = 0;
  }
  return uVar6;
}


