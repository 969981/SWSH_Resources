/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01322370; name: FUN_01322370
 */


undefined1  [16] FUN_01322370(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long local_20;
  long local_18;
  
  lVar2 = *(long *)(param_1 + 0x98);
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x90);
  }
  else {
    plVar1 = (long *)(param_1 + 0x90);
    if (*(int *)(lVar2 + 0x54) != 0) {
      plVar1 = (long *)(param_1 + 0x98);
    }
  }
  local_18 = *plVar1;
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
  }
  FUN_01320fc0(&local_20,&local_18);
  if (local_20 == 0) {
    auVar3 = ZEXT816(0);
  }
  else {
    auVar3 = FUN_013242c0();
    if (local_20 != 0) {
      (**(code **)(*(long *)(local_20 + 0x48) + 0x18))();
    }
  }
  local_20 = 0;
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return auVar3;
}


