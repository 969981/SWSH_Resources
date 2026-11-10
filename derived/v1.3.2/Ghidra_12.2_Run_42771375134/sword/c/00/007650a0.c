/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007650a0; name: FUN_007650a0
 */


void FUN_007650a0(MutexType *param_1)

{
  nn::os::InitializeMutex(param_1,true,0);
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x30) = 0x7fffffffffffffff;
  *(undefined8 *)(param_1 + 0x38) = 0xffffffffffffffff;
  return;
}


