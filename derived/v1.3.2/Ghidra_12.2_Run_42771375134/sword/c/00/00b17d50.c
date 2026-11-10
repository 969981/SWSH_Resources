/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b17d50; name: FUN_00b17d50
 */


void FUN_00b17d50(long param_1,undefined8 param_2)

{
  long *plVar1;
  long local_28;
  
  FUN_006dccd0(&local_28,*(undefined8 *)PTR_DAT_02710788,1,param_2,0,
               *(undefined8 *)(*(long *)(param_1 + 8) + 0xd8),0);
  if (*(long *)(param_1 + 0x88) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(long *)(param_1 + 0x88) = local_28;
  if (local_28 != 0) {
    plVar1 = (long *)(local_28 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if ((*(long *)(param_1 + 0x90) != 0) || (*(long *)(param_1 + 0x110) != 0)) {
      FUN_006e1e70(local_28,param_1 + 0x80,1);
    }
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  return;
}


