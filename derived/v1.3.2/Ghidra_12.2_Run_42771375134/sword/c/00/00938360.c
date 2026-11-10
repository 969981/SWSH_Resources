/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00938360; name: FUN_00938360
 */


void FUN_00938360(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  FUN_0093c730(*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_4 & 1);
  FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x6c,(uint)param_2 & 0xff,(uint)param_3 & 0xff,
               param_4 & 1);
  return;
}


