/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd9f30; name: FUN_00bd9f30
 */


void FUN_00bd9f30(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0xa52) = param_2[2];
  *(undefined8 *)(param_1 + 0xa4a) = uVar1;
  *(undefined8 *)(param_1 + 0xa42) = uVar2;
  uVar3 = param_2[5];
  uVar2 = param_2[3];
  uVar1 = param_2[4];
  *(undefined4 *)(param_1 + 0xa72) = *(undefined4 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0xa62) = uVar1;
  *(undefined8 *)(param_1 + 0xa6a) = uVar3;
  *(undefined8 *)(param_1 + 0xa5a) = uVar2;
  if (*(char *)(param_1 + 0xa40) == '\0') {
    *(undefined1 *)(param_1 + 0xa40) = 1;
  }
  nn::os::GetSystemTick();
  uVar2 = nn::os::ConvertToTimeSpan();
  *(undefined8 *)(param_1 + 0x1908) = uVar2;
  return;
}


