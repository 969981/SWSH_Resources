/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e2fb0; name: FUN_006e2fb0
 */


undefined8 FUN_006e2fb0(long *param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 0;
  }
  if (param_2 < *(uint *)(lVar1 + 0x10)) {
    return *(undefined8 *)(*(long *)(lVar1 + 0x20) + (ulong)param_2 * 8);
  }
  return 0;
}


