/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00552650; name: FUN_00552650
 */


void FUN_00552650(int *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined2 *puVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 local_70;
  undefined2 *local_68;
  
  local_68 = (undefined2 *)0x0;
  if (*PTR_DAT_02713c18 != '\0') {
                    /* WARNING: Subroutine does not return */
    __assert_fail("__s_null[0] == \'\\0\'",
                  "C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp",0x2b,"Clear");
  }
  local_70 = 0;
  local_68 = (undefined2 *)PTR_DAT_02713c18;
  bVar2 = param_2 < 0;
  if (bVar2) {
    FUN_005513d0(&local_70,1,0);
    local_70 = CONCAT44(local_70._4_4_,1);
    *local_68 = 0x2d;
    param_2 = -param_2;
  }
  uVar6 = (ulong)bVar2;
  bVar2 = false;
  puVar5 = local_68;
  uVar7 = 1000000000;
  do {
    if (param_2 < (int)uVar7) {
      if (bVar2) {
        FUN_005513d0(&local_70,(int)uVar6 + 1,1);
        lVar4 = (long)(int)local_70;
        uVar6 = (ulong)((int)local_70 + 1U);
        local_70 = CONCAT44(local_70._4_4_,(int)local_70 + 1U);
        *(undefined2 *)((long)local_68 + lVar4) = 0x30;
        puVar5 = local_68;
      }
    }
    else {
      iVar3 = 0;
      if (uVar7 != 0) {
        iVar3 = param_2 / (int)uVar7;
      }
      bVar2 = true;
      FUN_005513d0(&local_70,(int)uVar6 + 1,1);
      lVar4 = (long)(int)local_70;
      param_2 = param_2 - iVar3 * uVar7;
      uVar6 = lVar4 + 1;
      local_70 = CONCAT44(local_70._4_4_,(int)uVar6);
      *(char *)((long)local_68 + lVar4) = (char)iVar3 + '0';
      *(undefined1 *)((long)local_68 + uVar6) = 0;
      puVar5 = local_68;
    }
    bVar1 = 0x13 < uVar7;
    uVar7 = uVar7 / 10;
  } while (bVar1);
  FUN_00551100(param_1,puVar5,(int)uVar6 + 1,0xffffffff);
  *(char *)(*(long *)(param_1 + 2) + (long)*param_1 + -1) = (char)param_2 + '0';
  if ((puVar5 != (undefined2 *)PTR_DAT_02713c18) && (puVar5 != (undefined2 *)0x0)) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,puVar5 + -4);
  }
  return;
}


