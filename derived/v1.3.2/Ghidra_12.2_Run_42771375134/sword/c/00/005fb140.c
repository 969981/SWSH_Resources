/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005fb140; name: FUN_005fb140
 */


undefined8 FUN_005fb140(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong local_88 [11];
  int local_28;
  int local_24;
  
  lVar6 = param_1[0x57];
  local_24 = 0;
  *(int *)(param_1 + 0xf5) = *(int *)((long)param_1 + 0xf4);
  puVar2 = PTR_DAT_02713a38;
  if (0 < *(int *)((long)param_1 + 0xf4)) {
    local_28 = 0;
    (**(code **)PTR_DAT_02713a38)(lVar6,0x1a,&local_28);
    (**(code **)puVar2)(lVar6,0x19,&local_24);
    iVar1 = (int)param_1[0xf5];
    if ((int)param_1[0xf5] <= local_28) {
      iVar1 = local_28;
    }
    *(int *)(param_1 + 0xf5) = iVar1;
    plVar3 = (long *)(**(code **)(*param_1 + 0xf0))(param_1,0,0);
    param_1[0xf4] = (long)plVar3;
    local_88[3] = 0;
    local_88[4] = 0x400000000;
    local_88[1] = 0;
    local_88[5] = 0;
    uVar5 = ((int)param_1[0xf5] + local_24) - 1U & -local_24;
    local_88[7] = 0;
    local_88[8] = 0;
    local_88[2] = 0;
    local_88[0] = (ulong)uVar5;
    local_88[9] = 0xffffffffffffffff;
    local_88[10] = 0xffffffffffffffff;
    local_88[6] = 0xa1;
    uVar4 = (**(code **)(*plVar3 + 0x40))(plVar3,local_88);
    if (((uVar4 & 1) == 0) ||
       (uVar4 = FUN_00653070(param_1[0xf4],(long)(int)uVar5,(long)local_24,param_1 + 0xf6),
       (uVar4 & 1) == 0)) {
      return 0;
    }
    param_1[0xf7] = (param_1[0xf6] + (long)local_24) - 1U & -(long)local_24;
  }
  return 1;
}


