/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ff9c0; name: FUN_004ff9c0
 */


void FUN_004ff9c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = nn::os::GetCurrentThread();
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}


