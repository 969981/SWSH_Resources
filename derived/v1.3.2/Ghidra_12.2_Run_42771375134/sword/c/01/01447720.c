/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01447720; name: FUN_01447720
 */


void FUN_01447720(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  
  *(int *)(param_1 + 0x78) = param_2;
  if (param_2 == 1) {
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar3 != (undefined8 *)0x0)) {
      plVar1 = (long *)(**(code **)*puVar3)(puVar3);
      lVar2 = FUN_01410b60();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          puVar3 = puVar3 + -10;
          goto LAB_0144780c;
        }
      }
    }
    puVar3 = (undefined8 *)0x0;
LAB_0144780c:
    FUN_0140e0b0(puVar3,1);
    return;
  }
  if (param_2 != 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar3 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    lVar2 = FUN_01410b60();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        FUN_0140e0b0(puVar3 + -10,0);
        lVar2 = *(long *)(param_1 + 0x68);
        goto joined_r0x01447840;
      }
    }
  }
  FUN_0140e0b0(0,0);
  lVar2 = *(long *)(param_1 + 0x68);
joined_r0x01447840:
  if ((lVar2 != 0) && (puVar3 = *(undefined8 **)(lVar2 + 0x60), puVar3 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    lVar2 = FUN_01410b60();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        puVar3 = puVar3 + -10;
        goto LAB_01447848;
      }
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_01447848:
  FUN_0140ce60(puVar3,*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98));
  return;
}


