/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c00c0; name: FUN_004c00c0
 */


void FUN_004c00c0(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_004c0100(PTR_DAT_027134b0,*(undefined8 *)(param_1 + 0x20));
  if (plVar1 != (long *)0x0) {
    *plVar1 = param_1;
  }
  return;
}


