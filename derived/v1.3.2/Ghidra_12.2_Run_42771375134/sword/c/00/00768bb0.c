/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00768bb0; name: FUN_00768bb0
 */


undefined8 FUN_00768bb0(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x60) = param_3;
  *(undefined4 *)(param_1 + 100) = param_4;
  FUN_0076a170(*(undefined8 *)(param_1 + 0x10),param_3,param_4);
  return 0;
}


