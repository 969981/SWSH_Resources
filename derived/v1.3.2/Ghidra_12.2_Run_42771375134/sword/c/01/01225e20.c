/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01225e20; name: FUN_01225e20
 */


void FUN_01225e20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = nn::time::StandardSteadyClock::now();
  *(undefined8 *)(param_1 + 0x240) = uVar1;
  return;
}


