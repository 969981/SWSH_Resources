/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c4c340; name: FUN_00c4c340
 */


ulong FUN_00c4c340(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long local_30;
  long local_28;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar5)(puVar5);
    lVar2 = FUN_00be66c0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        FUN_00c1ce40(&local_30,puVar5 + -10);
        goto joined_r0x00c4c3e8;
      }
    }
  }
  FUN_00c1ce40(&local_30,0);
joined_r0x00c4c3e8:
  if ((local_30 != 0) && (puVar5 = *(undefined8 **)(local_30 + 0x60), puVar5 != (undefined8 *)0x0))
  {
    plVar1 = (long *)(**(code **)*puVar5)(puVar5);
    lVar2 = FUN_00c3a5b0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        FUN_00bd9cd0(&local_28,puVar5 + -10);
        goto joined_r0x00c4c478;
      }
    }
  }
  FUN_00bd9cd0(&local_28,0);
joined_r0x00c4c478:
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  if (local_28 == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = FUN_009fed30(local_28,4);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
    uVar4 = (uVar3 & 1) << 8;
    uVar3 = 1;
  }
  return uVar4 | uVar3;
}


