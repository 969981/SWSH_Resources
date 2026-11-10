/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01406310; name: FUN_01406310
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01406310(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long local_28;
  
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 == 0) {
    FUN_014063f0(&local_28,0);
  }
  else {
    plVar3 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_014063f0(&local_28,lVar1);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (local_28 == 0) {
    _DAT_00000090 = param_2;
    return;
  }
  puVar2 = *(undefined8 **)(local_28 + 0x60);
  plVar3 = (long *)(**(code **)*puVar2)(puVar2);
  lVar1 = FUN_01406b10();
  for (; plVar3 != (long *)lVar1; plVar3 = (long *)*plVar3) {
  }
  puVar2[8] = param_2;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


