/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01322430; name: FUN_01322430
 */


void FUN_01322430(long param_1)

{
  long *plVar1;
  long lVar2;
  long local_18;
  
  plVar1 = (long *)(param_1 + 0x88);
  FUN_01320fc0(&local_18,plVar1);
  if (local_18 != 0) {
    FUN_01323ae0(local_18,0);
    if (local_18 != 0) {
      (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
      local_18 = 0;
    }
  }
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  return;
}


