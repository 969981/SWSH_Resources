/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f82b0; name: FUN_004f82b0
 */


undefined8 FUN_004f82b0(uint param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_DAT_027137e0;
  if (*(uint *)(PTR_DAT_027137e0 + 8) <= param_1) {
    return 0x1f;
  }
  plVar2 = *(long **)(*(long *)PTR_DAT_027137e0 + (ulong)param_1 * 8);
  if (plVar2 == (long *)0x0) {
    return 0x1f;
  }
  (**(code **)(*plVar2 + 0x30))(plVar2);
  *(undefined8 *)(*(long *)puVar1 + (ulong)param_1 * 8) = 0;
  return 1;
}


