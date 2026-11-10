/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00878ad0; name: FUN_00878ad0
 */


void FUN_00878ad0(long param_1,uint param_2)

{
  if (param_2 < 0xff) {
    FUN_0086f780(*(undefined8 *)(param_1 + 0x98));
    return;
  }
  FUN_0086f780(*(undefined8 *)(param_1 + 0x98),0xff);
  return;
}


