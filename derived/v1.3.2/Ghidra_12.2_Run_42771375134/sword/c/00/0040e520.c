/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040e520; name: FUN_0040e520
 */


undefined8 FUN_0040e520(long param_1,uint param_2)

{
  if ((param_2 & 0xffff) < *(uint *)(param_1 + 0xc0)) {
    return *(undefined8 *)(*(long *)(param_1 + 0xb8) + (ulong)(param_2 & 0xffff) * 8);
  }
  return 0;
}


