/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e2280; name: FUN_001e2280
 */


void FUN_001e2280(long param_1,long *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0xe0) != 0) {
    uVar2 = (**(code **)*param_2)(param_2,0x80000000);
    *(undefined8 *)(param_1 + 0xe0) = uVar2;
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    uVar2 = (**(code **)*param_2)(param_2,0x80000000);
    *(undefined8 *)(param_1 + 0xe8) = uVar2;
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (uVar1 < 0x3030200) {
    FUN_003bad50(param_1 + 0x28,0);
    return;
  }
  return;
}


