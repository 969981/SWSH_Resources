/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bae9e0; name: FUN_00bae9e0
 */


void FUN_00bae9e0(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if (5 < param_2) {
    FUN_00bae160(param_1,0,0x78b6ad00ae91a654,param_3);
    return;
  }
  lVar2 = *(long *)(param_1 + 0x2b0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(lVar2 + 0x2e0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar3 == 0) {
    FUN_014c8740(lVar1,0,0,param_2);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_014c8740(lVar1,0,lVar3,param_2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  FUN_00bae160(param_1,0,0x7ca1f4b1f8676fa3,param_3);
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00baeb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


