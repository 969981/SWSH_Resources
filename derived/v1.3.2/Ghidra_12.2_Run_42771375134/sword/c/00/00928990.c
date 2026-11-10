/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00928990; name: FUN_00928990
 */


void FUN_00928990(long param_1,undefined1 param_2,undefined4 param_3,long param_4,undefined4 param_5
                 )

{
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),2,param_2);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x12,param_3);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x6f,*(uint *)(param_4 + 4) >> 1 & 1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x70,*(uint *)(param_4 + 4) >> 2 & 1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x71,*(uint *)(param_4 + 4) >> 3 & 1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x72,*(uint *)(param_4 + 4) & 1);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),param_5);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return;
}


