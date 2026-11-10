/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f9850; name: FUN_014f9850
 */


void FUN_014f9850(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long local_38;
  
  lVar4 = *(long *)(param_1 + 0x68);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_014f9960(&local_38,lVar4);
  if ((local_38 == 0) || (puVar5 = *(undefined8 **)(local_38 + 0x60), puVar5 == (undefined8 *)0x0))
  {
    lVar2 = *param_2;
  }
  else {
    plVar1 = (long *)(**(code **)*puVar5)(puVar5);
    lVar2 = FUN_014f9e30();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        puVar5 = puVar5 + -10;
        lVar2 = *param_2;
        goto joined_r0x014f9954;
      }
    }
    lVar2 = *param_2;
  }
  puVar5 = (undefined8 *)0x0;
joined_r0x014f9954:
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = puVar5[0x35];
  puVar5[0x35] = lVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


