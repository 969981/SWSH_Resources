/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00468bd0; name: FUN_00468bd0
 */


undefined8
FUN_00468bd0(int param_1,long param_2,int param_3,int param_4,int param_5,long param_6,int param_7,
            byte param_8)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  int local_78 [2];
  long local_70;
  int local_68;
  
  puVar3 = PTR_DAT_02713118;
  iVar1 = param_3 + param_4 * 0x10 + param_5 * 0x10000;
  piVar6 = *(int **)PTR_DAT_02713118;
  uVar2 = *(uint *)(PTR_DAT_02713118 + 8);
  piVar5 = piVar6;
  if (uVar2 == 0) {
LAB_00468c70:
    if (piVar5 != piVar6 + (ulong)uVar2 * 10) {
      if ((char)piVar5[9] != '\0') {
        FUN_00404870(*(undefined4 *)PTR_DAT_02712e28,*(long *)(piVar5 + 6));
      }
      if (param_6 != 0) {
        *(long *)(piVar5 + 6) = param_6;
        piVar5[8] = param_7;
        *(byte *)(piVar5 + 9) = param_8 & 1;
        return 1;
      }
      piVar5 = *(int **)puVar3;
      uVar2 = *(uint *)(puVar3 + 8);
      piVar6 = piVar5 + (ulong)uVar2 * 10;
      if (uVar2 != 0) {
        lVar7 = (ulong)uVar2 * 0x28;
        do {
          if (((*piVar5 == param_1) && (piVar5[4] == iVar1)) && (*(long *)(piVar5 + 2) == param_2))
          goto LAB_00468d70;
          lVar7 = lVar7 + -0x28;
          piVar5 = piVar5 + 10;
        } while (lVar7 != 0);
        piVar5 = piVar6;
      }
LAB_00468d70:
      if (piVar6 == piVar5) {
        return 1;
      }
      for (; piVar5 < piVar6 + -10; piVar5 = piVar5 + 10) {
        memcpy(piVar5,piVar5 + 10,0x28);
      }
      *(uint *)(puVar3 + 8) = uVar2 - 1;
      return 1;
    }
  }
  else {
    lVar7 = (ulong)uVar2 * 0x28;
    do {
      if (((*piVar5 == param_1) && (piVar5[4] == iVar1)) && (*(long *)(piVar5 + 2) == param_2))
      goto LAB_00468c70;
      lVar7 = lVar7 + -0x28;
      piVar5 = piVar5 + 10;
    } while (lVar7 != 0);
  }
  if (param_6 == 0) {
    return 1;
  }
  local_78[0] = param_1;
  local_70 = param_2;
  local_68 = iVar1;
  plVar4 = (long *)FUN_00468de0(PTR_DAT_02713118,local_78);
  if (plVar4 != (long *)0x0) {
    *plVar4 = param_6;
    *(int *)(plVar4 + 1) = param_7;
    *(byte *)((long)plVar4 + 0xc) = param_8 & 1;
    return 1;
  }
  if ((param_8 & 1) == 0) {
    return 0x34;
  }
  FUN_00404870(*(undefined4 *)PTR_DAT_02712e28,param_6);
  return 0x34;
}


