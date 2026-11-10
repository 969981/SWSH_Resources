/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ce6af0; name: FUN_00ce6af0
 */


void FUN_00ce6af0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long local_28;
  
  lVar2 = *(long *)(param_1 + 0x68);
  if (lVar2 == 0) {
    FUN_00ce6c10(&local_28,0);
  }
  else {
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_00ce6c10(&local_28,lVar2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_28 == 0) || (puVar3 = *(undefined8 **)(local_28 + 0x60), puVar3 == (undefined8 *)0x0))
  {
    lVar2 = *param_2;
  }
  else {
    plVar4 = (long *)(**(code **)*puVar3)(puVar3);
    lVar2 = FUN_00ce73b0();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar2) {
        puVar3 = puVar3 + -10;
        lVar2 = *param_2;
        goto joined_r0x00ce6c00;
      }
    }
    lVar2 = *param_2;
  }
  puVar3 = (undefined8 *)0x0;
joined_r0x00ce6c00:
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = puVar3[0x12];
  puVar3[0x12] = lVar2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


