/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01416100; name: FUN_01416100
 */


void FUN_01416100(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 local_28;
  
  local_28 = *param_2;
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x60);
    if (lVar1 == 0) {
      FUN_0077eb10(0,&local_28,*(undefined8 *)(param_1 + 0x38));
      return;
    }
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0077eb10(lVar1,&local_28,*(undefined8 *)(param_1 + 0x38));
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  return;
}


