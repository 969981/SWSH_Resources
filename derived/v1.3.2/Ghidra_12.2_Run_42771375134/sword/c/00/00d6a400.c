/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d6a400; name: FUN_00d6a400
 */


void FUN_00d6a400(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x88) == 0) {
    return;
  }
  plVar1 = (long *)FUN_01052410();
  (**(code **)(*plVar1 + 0x70))(plVar1,*(undefined1 *)(param_1 + 0x104),0);
  FUN_01053890(*(undefined8 *)(param_1 + 0x88),*(undefined1 *)(param_1 + 0x105));
  FUN_01053370(*(undefined8 *)(param_1 + 0x88),*(undefined1 *)(param_1 + 0x106));
  FUN_01052f20(*(undefined8 *)(param_1 + 0x88),*(undefined1 *)(param_1 + 0x107));
  FUN_01053870(*(undefined8 *)(param_1 + 0x88),*(undefined1 *)(param_1 + 0x108));
  return;
}


