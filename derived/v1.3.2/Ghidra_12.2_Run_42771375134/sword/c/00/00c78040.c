/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c78040; name: FUN_00c78040
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00c78040(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long local_40;
  long local_38;
  undefined8 local_28;
  
  if (*(char *)(param_1 + 0x148) != '\0') {
    uVar2 = 1;
    goto LAB_00c78060;
  }
  iVar1 = FUN_0069c2b0(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    uVar2 = 0;
    goto LAB_00c78060;
  }
  local_28 = FUN_0069d2b0(*(undefined8 *)(param_1 + 0x10));
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
  if (lVar4 == 0) {
    FUN_00c58c20(&local_38,0);
    if (local_38 == 0) goto LAB_00c78124;
LAB_00c780e0:
    FUN_00c62ba0(&local_40);
    uVar5 = *(undefined8 *)(&DAT_00001588 + local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
  }
  else {
    plVar6 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_00c58c20(&local_38,lVar4);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    if (local_38 != 0) goto LAB_00c780e0;
LAB_00c78124:
    local_40 = 0;
    uVar5 = _DAT_00001588;
  }
  uVar5 = FUN_00cbf650(uVar5);
  if (*(int *)(param_1 + 0xc0) == 1) {
    uVar3 = FUN_006b92e0(&local_28);
    uVar2 = FUN_00c784f0(uVar5,uVar3);
  }
  else if (*(int *)(param_1 + 0xc0) == 0) {
    uVar3 = FUN_006b92e0(&local_28);
    uVar2 = FUN_00c78410(uVar5,uVar3);
  }
  else {
    uVar2 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
LAB_00c78060:
  return uVar2 & 1;
}


