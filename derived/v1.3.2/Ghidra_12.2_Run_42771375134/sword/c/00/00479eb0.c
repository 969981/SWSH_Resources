/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00479eb0; name: FUN_00479eb0
 */


void FUN_00479eb0(long param_1)

{
  if (((*(long *)PTR_DAT_02712dc8 != 0) && (*(long **)(param_1 + 0x10) != (long *)0x0)) &&
     (**(long **)(param_1 + 0x10) != 0)) {
    FUN_0048ad70();
  }
  FUN_00479190(param_1 + 0x28);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0045b680();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}


