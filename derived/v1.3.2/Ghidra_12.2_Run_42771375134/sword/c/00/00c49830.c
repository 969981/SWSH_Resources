/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c49830; name: FUN_00c49830
 */


uint FUN_00c49830(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  char local_a8 [8];
  undefined1 auStack_a0 [112];
  long local_28;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar4)(puVar4);
    lVar3 = FUN_00be66c0();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        FUN_00c1cec0(&local_28,puVar4 + -10);
        goto joined_r0x00c498e0;
      }
    }
  }
  FUN_00c1cec0(&local_28,0);
joined_r0x00c498e0:
  if ((local_28 != 0) && (puVar4 = *(undefined8 **)(local_28 + 0x60), puVar4 != (undefined8 *)0x0))
  {
    plVar2 = (long *)(**(code **)*puVar4)(puVar4);
    lVar3 = FUN_00c1bbc0();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        FUN_00bdc170(local_a8,puVar4 + -10);
        goto joined_r0x00c49970;
      }
    }
  }
  FUN_00bdc170(local_a8,0);
joined_r0x00c49970:
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (local_a8[0] == '\0') {
    uVar1 = 0;
  }
  else {
    if (*(char *)(param_1 + 0xa8) == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00be1d60(param_1 + 0xb0,auStack_a0,*(undefined8 *)(param_1 + 8));
      if (local_a8[0] == '\0') goto LAB_00c49948;
    }
  }
LAB_00c49948:
  return uVar1 & 1;
}


