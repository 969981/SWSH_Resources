/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e8ffc0; name: FUN_00e8ffc0
 */


void FUN_00e8ffc0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x540) = *param_2;
  *(undefined8 *)(param_1 + 0x548) = uVar1;
  if (*(char *)(param_1 + 0x521) == '\0') {
    *(undefined8 *)(param_1 + 0x568) = *(undefined8 *)(param_1 + 0x548);
    *(undefined8 *)(param_1 + 0x560) = *(undefined8 *)(param_1 + 0x540);
    return;
  }
  return;
}


