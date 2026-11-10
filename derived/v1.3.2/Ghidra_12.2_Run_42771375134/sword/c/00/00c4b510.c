/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c4b510; name: FUN_00c4b510
 */


bool FUN_00c4b510(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long local_880 [7];
  long local_848;
  long lStack_840;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar3 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    lVar2 = FUN_00be66c0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        FUN_00c1ce80(local_880,puVar3 + -10);
        goto joined_r0x00c4b614;
      }
    }
  }
  FUN_00c1ce80(local_880,0);
joined_r0x00c4b614:
  if (local_880[0] != 0) {
    puVar3 = *(undefined8 **)(local_880[0] + 0x60);
    if (puVar3 != (undefined8 *)0x0) {
      plVar1 = (long *)(**(code **)*puVar3)(puVar3);
      lVar2 = FUN_00c22170();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          puVar3 = puVar3 + -10;
          goto joined_r0x00c4b638;
        }
      }
    }
    puVar3 = (undefined8 *)0x0;
joined_r0x00c4b638:
    if (local_880[0] != 0) {
      (**(code **)(*(long *)(local_880[0] + 0x48) + 0x18))();
      local_880[0] = 0;
    }
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00bd9f00(local_880,puVar3);
      return local_848 < param_2 && param_2 < lStack_840;
    }
  }
  return false;
}


