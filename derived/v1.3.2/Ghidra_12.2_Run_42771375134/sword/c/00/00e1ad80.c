/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e1ad80; name: FUN_00e1ad80
 */


void FUN_00e1ad80(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  (**(code **)(**(long **)(param_1 + 0xe8) + 0x48))();
  if (*(int *)(param_1 + 0x358) != 0) {
    return;
  }
  lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0xb8);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar1 + 0x1e8);
  if (lVar2 == 0) {
    FUN_015c6160(0);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_015c6160(lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00e1ae38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


