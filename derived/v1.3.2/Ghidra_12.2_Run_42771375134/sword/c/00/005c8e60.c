/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c8e60; name: FUN_005c8e60
 */


void FUN_005c8e60(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = nn::os::GetSystemTickFrequency();
  *(undefined1 *)(param_1 + 0x1ce) = 1;
  *(undefined4 *)(param_1 + 0x1c8) = 0x1010101;
  *(undefined2 *)(param_1 + 0x1cc) = 0x101;
  *(undefined8 *)(param_1 + 0x178) = uVar1;
  *(undefined1 *)(param_1 + 0x1d1) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0x300000004;
  *(undefined8 *)(param_1 + 400) = 0x300000004;
  return;
}


