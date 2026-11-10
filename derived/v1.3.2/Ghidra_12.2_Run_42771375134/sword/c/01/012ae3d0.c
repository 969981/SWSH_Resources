/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ae3d0; name: FUN_012ae3d0
 */


void FUN_012ae3d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  nn::os::GetSystemTick();
  uVar1 = nn::os::ConvertToTimeSpan();
  *param_1 = uVar1;
  param_1[1] = param_2;
  return;
}


