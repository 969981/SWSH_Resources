/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e9430; name: FUN_008e9430
 */


void FUN_008e9430(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  FUN_008e7170(param_1,*(undefined8 *)PTR_DAT_02710848,param_2,param_3,param_4,0,param_5,param_6,
               param_6);
  *(uint *)(param_1 + 0xa70) = *(uint *)(param_1 + 0xa70) | 0x40000000;
  return;
}


