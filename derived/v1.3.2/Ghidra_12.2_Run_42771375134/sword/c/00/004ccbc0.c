/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ccbc0; name: FUN_004ccbc0
 */


undefined8 FUN_004ccbc0(long param_1)

{
  long *plVar1;
  undefined1 auStack_30 [8];
  undefined4 local_28;
  
  plVar1 = *(long **)(param_1 + 0x58);
  *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x80) + 1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,auStack_30);
    local_28 = 0;
    (**(code **)(**(long **)(param_1 + 0x58) + 0x30))(*(long **)(param_1 + 0x58),auStack_30);
  }
  return 1;
}


