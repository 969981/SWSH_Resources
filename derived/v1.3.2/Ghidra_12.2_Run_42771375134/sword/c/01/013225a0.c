/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013225a0; name: FUN_013225a0
 */


void FUN_013225a0(long param_1)

{
  undefined8 local_28;
  undefined8 uStack_20;
  long local_18;
  
  FUN_01320fc0(&local_18,param_1 + 0x88);
  if (local_18 != 0) {
    local_28 = 0x275dbcecced052c0;
    uStack_20 = 0;
    FUN_0130fad0(local_18,&local_28,0);
    if (local_18 != 0) {
      (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
    }
  }
  return;
}


