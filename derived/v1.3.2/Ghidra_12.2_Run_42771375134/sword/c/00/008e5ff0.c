/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e5ff0; name: FUN_008e5ff0
 */


void FUN_008e5ff0(undefined8 *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)((long)param_1 + 0x42);
  if (((ulong)bVar1 < 2) && (*(char *)((long)param_1 + (ulong)bVar1 + 0x2c) != '\0')) {
    *(byte *)((long)param_1 + 0x42) = bVar1 + 1;
    FUN_0093dc80(*param_1);
    return;
  }
  return;
}


