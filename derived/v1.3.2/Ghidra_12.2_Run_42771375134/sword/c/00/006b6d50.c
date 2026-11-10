/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b6d50; name: FUN_006b6d50
 */


void FUN_006b6d50(undefined8 param_1,long param_2)

{
  FUN_006b9b70(0x3f800000,*(undefined8 *)(param_2 + 0xf0));
  *(undefined8 *)(*(long *)(param_2 + 0x88) + 0x118) = 0;
  *(long *)(*(long *)(param_2 + 0x88) + 0x110) = param_2;
  *(undefined4 *)(param_2 + 0x124) = 0;
  do {
    FUN_006b6750(param_1,param_2,1);
    param_2 = *(long *)(param_2 + 0x110);
  } while (param_2 != 0);
  return;
}


