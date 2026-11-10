/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0107fa30; name: FUN_0107fa30
 */


void FUN_0107fa30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = nn::os::GetSystemTick();
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  return;
}


