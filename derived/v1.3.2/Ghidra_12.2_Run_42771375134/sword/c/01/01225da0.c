/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01225da0; name: FUN_01225da0
 */


void FUN_01225da0(undefined4 *param_1,undefined4 param_2,void *param_3)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  param_1[0x94] = 0;
  *(undefined8 *)(param_1 + 0x92) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  memmove(param_1 + 0x82,param_3,0x28);
  *(undefined1 *)(param_1 + 0x80) = 1;
  uVar1 = nn::time::StandardSteadyClock::now();
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  return;
}


