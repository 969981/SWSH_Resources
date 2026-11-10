/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eba990; name: FUN_00eba990
 */


void FUN_00eba990(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_38;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0xb8);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar2 + 0x1e0);
  if (lVar3 == 0) {
    FUN_015ab8d0(&local_38,0,*(undefined8 *)(param_2 + 0x670));
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_015ab8d0(&local_38,lVar3,*(undefined8 *)(param_2 + 0x670));
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  if ((local_38 == 0) || (uVar1 = FUN_014bc9b0(), (uVar1 & 1) == 0)) {
    *param_1 = 0;
  }
  else {
    lVar2 = *(long *)(local_38 + 0x60);
    *param_1 = lVar2;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


