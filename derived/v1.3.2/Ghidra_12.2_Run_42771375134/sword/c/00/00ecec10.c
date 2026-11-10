/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ecec10; name: FUN_00ecec10
 */


undefined4 FUN_00ecec10(void)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long local_28;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar2 == 0) {
    FUN_01009f40(&local_28,0);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_01009f40(&local_28,lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (local_28 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00fb4080();
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return uVar1;
}


