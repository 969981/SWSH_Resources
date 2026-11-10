/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014af470; name: FUN_014af470
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_014af470(undefined8 param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long local_48;
  undefined8 local_38;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1c0);
  if (lVar3 == 0) {
    local_38 = _DAT_00000068;
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar5 = *(undefined8 *)(lVar3 + 0x68);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    local_38 = uVar5;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  local_48 = *param_2;
  if (local_48 == 0) {
    uVar1 = FUN_014aeff0(param_1,&local_38,&local_48);
  }
  else {
    plVar4 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar1 = FUN_014aeff0(param_1,&local_38,&local_48);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  return uVar1 & 1;
}


