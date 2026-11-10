/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b98310; name: FUN_00b98310
 */


undefined8 * FUN_00b98310(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long local_30;
  undefined1 auStack_28 [8];
  
  uVar1 = FUN_00ff5cf0();
  local_30 = param_1;
  plVar2 = (long *)FUN_00b99f00(auStack_28,uVar1,&local_30);
  if (plVar2 != (long *)0x0) {
    (**(code **)(plVar2[9] + 0x10))();
  }
  if (*(long *)(param_1 + 0x2c8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2c8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2c8) = 0;
  }
  *(long **)(param_1 + 0x2c8) = plVar2;
  (**(code **)(*plVar2 + 0x10))(&local_30,plVar2);
  if (local_30 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = *(undefined8 **)(local_30 + 0x60);
    if (puVar4 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar4)(puVar4);
      lVar3 = FUN_00b9a020();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar4 = puVar4 + -10;
          goto joined_r0x00b98410;
        }
      }
    }
    puVar4 = (undefined8 *)0x0;
joined_r0x00b98410:
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    }
  }
  return puVar4;
}


