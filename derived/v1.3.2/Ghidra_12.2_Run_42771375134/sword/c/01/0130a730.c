/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130a730; name: FUN_0130a730
 */


void FUN_0130a730(long *param_1)

{
  undefined *puVar1;
  undefined8 local_18;
  
  *(undefined1 *)((long)param_1 + 0x3b1) = 1;
  (**(code **)(*param_1 + 0x10))(&local_18);
  puVar1 = PTR_DAT_02727748;
  if (*(long *)PTR_DAT_02727748 != 0) {
    (**(code **)(*(long *)(*(long *)PTR_DAT_02727748 + 0x48) + 0x18))();
    *(undefined8 *)puVar1 = 0;
  }
  *(undefined8 *)puVar1 = local_18;
  return;
}


