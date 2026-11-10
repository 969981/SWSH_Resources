/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e9bde0; name: FUN_00e9bde0
 */


uint FUN_00e9bde0(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  FUN_00c58c00(&local_28,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  lVar3 = local_28;
  (**(code **)(*param_1 + 0x10))(&local_40,param_1);
  local_38 = local_40;
  local_40 = 0;
  FUN_00c7a6a0(&local_30,lVar3,&local_38);
  if (local_30 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = *(undefined8 **)(local_30 + 0x60);
    if (puVar4 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar4)(puVar4);
      lVar3 = FUN_00c6b230();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar4 = puVar4 + -10;
          goto joined_r0x00e9bf28;
        }
      }
    }
    puVar4 = (undefined8 *)0x0;
joined_r0x00e9bf28:
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    }
  }
  local_30 = 0;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  uVar1 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = FUN_00c92aa0(puVar4);
    uVar1 = uVar1 ^ 1;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return uVar1 & 1;
}


