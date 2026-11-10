/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c27880; name: FUN_00c27880
 */


bool FUN_00c27880(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long local_40;
  char local_38 [4];
  byte local_34;
  int local_30;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar3 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    lVar2 = FUN_00be66c0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        FUN_00c1cec0(&local_40,puVar3 + -10);
        goto joined_r0x00c27928;
      }
    }
  }
  FUN_00c1cec0(&local_40,0);
joined_r0x00c27928:
  if ((local_40 != 0) && (puVar3 = *(undefined8 **)(local_40 + 0x60), puVar3 != (undefined8 *)0x0))
  {
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    lVar2 = FUN_00c1bbc0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        FUN_00bdc2d0(local_38,puVar3 + -10);
        goto joined_r0x00c279b0;
      }
    }
  }
  FUN_00bdc2d0(local_38,0);
joined_r0x00c279b0:
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  if (local_38[0] == '\0') {
    return false;
  }
  return local_30 != 0 && local_34 - 1 < 2;
}


