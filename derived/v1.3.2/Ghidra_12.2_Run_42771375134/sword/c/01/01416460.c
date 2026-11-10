/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01416460; name: FUN_01416460
 */


void FUN_01416460(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_38;
  
  local_38 = *param_2;
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0x60);
    puVar1 = (undefined8 *)(param_1 + *(long *)(param_1 + 0x80) * 8 + 0x40);
    if (lVar2 == 0) {
      FUN_0077eb10(0,&local_38,*puVar1);
    }
    else {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0077eb10(lVar2,&local_38,*puVar1);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
  }
  return;
}


