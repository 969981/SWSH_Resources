/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0081deb0; name: FUN_0081deb0
 */


void FUN_0081deb0(long *param_1)

{
  uint *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  int local_70;
  long *local_68;
  long lStack_60;
  ulong local_58;
  long local_50;
  long *local_48;
  
  *param_1 = (long)(PTR_DAT_02717120 + 0x10);
  if (*(char *)((long)param_1 + 0x44) == '\0') {
    lStack_60 = param_1[9];
    local_58 = *(ulong *)(lStack_60 + 0x18);
    if (local_58 < *(ulong *)(lStack_60 + 8)) {
      do {
        local_68 = *(long **)(*(long *)(lStack_60 + 0x20) + local_58 * 8);
        if (local_68 != (long *)0x0) {
          if (local_68 == *(long **)(*(long *)(lStack_60 + 0x20) + (local_58 ^ 1) * 8)) {
            local_50 = *local_68;
            local_68 = *(long **)(local_50 + 0x20);
          }
          else {
            local_50 = 0;
          }
          goto LAB_0081df44;
        }
        local_58 = local_58 + 1;
      } while (local_58 < *(ulong *)(lStack_60 + 8));
    }
    local_50 = 0;
    local_68 = (long *)0x0;
LAB_0081df44:
    iVar2 = 2;
    local_70 = 2;
    local_48 = (long *)0x0;
  }
  else {
    local_48 = *(long **)(param_1[9] + 0x18);
    iVar2 = 1;
    local_70 = 1;
    local_68 = (long *)0x0;
    local_50 = 0;
  }
  iVar5 = 1;
  if (*(char *)((long)param_1 + 0x44) == '\0') {
    iVar5 = 2;
  }
  if (iVar2 != iVar5) goto LAB_0081dfc0;
LAB_0081dfa0:
  do {
    plVar3 = local_48;
    if (((iVar2 != 1) && (plVar3 = local_68, iVar2 == 0)) || (plVar3 == (long *)0x0)) break;
LAB_0081dfc0:
    do {
      while( true ) {
        plVar3 = local_48 + 4;
        if (iVar2 != 1) {
          plVar3 = local_68 + 2;
        }
        FUN_0081e0e0(*plVar3 + 0x10);
        if (local_70 == 1) break;
        FUN_008229b0(&local_68);
        iVar5 = 1;
        if (*(char *)((long)param_1 + 0x44) == '\0') {
          iVar5 = 2;
        }
        iVar2 = local_70;
        if (local_70 == iVar5) goto LAB_0081dfa0;
      }
      local_48 = (long *)*local_48;
      iVar2 = 1;
      iVar5 = 1;
      if (*(char *)((long)param_1 + 0x44) == '\0') {
        iVar5 = 2;
      }
    } while (iVar5 != 1);
  } while( true );
  FUN_0081e180(param_1 + 7);
  FUN_0081e2c0(param_1 + 7);
  plVar3 = (long *)param_1[2];
  *param_1 = (long)(PTR_DAT_02717118 + 0x10);
  if ((plVar3 == (long *)0x0) || (param_1[1] != 0)) goto LAB_0081e098;
  puVar1 = (uint *)plVar3[2];
  if ((puVar1 != (uint *)0x0) && (*plVar3 == 0)) {
    uVar4 = (ulong)*puVar1;
    if (0 < (int)*puVar1) {
      do {
        puVar1 = puVar1 + 2;
        if (*(long **)puVar1 != (long *)0x0) {
          (**(code **)(**(long **)puVar1 + 8))();
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      puVar1 = (uint *)plVar3[2];
      if (puVar1 == (uint *)0x0) goto LAB_0081e090;
    }
    operator_delete__(puVar1);
  }
LAB_0081e090:
  operator_delete(plVar3);
LAB_0081e098:
  FUN_008013e0(param_1 + 5);
  return;
}


