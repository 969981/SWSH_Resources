/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0108ea50; name: FUN_0108ea50
 */


void FUN_0108ea50(long param_1,undefined8 param_2)

{
  long *plVar1;
  long local_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    FUN_006dccd0(&local_28,*(undefined8 *)PTR_DAT_02710788,1,param_2,0,
                 *(undefined8 *)(*(long *)(param_1 + 8) + 0x60),0);
    if (*(long *)(param_1 + 0x18) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    *(long *)(param_1 + 0x18) = local_28;
    if (local_28 != 0) {
      plVar1 = (long *)(local_28 + 0x48);
      (**(code **)(*plVar1 + 0x10))(plVar1);
      if ((*(long *)(param_1 + 0x20) != 0) || (*(long *)(param_1 + 0xa0) != 0)) {
        FUN_006e1e70(local_28,param_1 + 0x10,1);
      }
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  return;
}


