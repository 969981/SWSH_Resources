/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003d94a0; name: FUN_003d94a0
 */


void FUN_003d94a0(long param_1,uint param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_003ade70(*(undefined8 *)(param_1 + 0x28));
  FUN_003aa930(uVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_2 & 1,
               param_3);
  *(undefined1 *)(param_1 + 0x4a) = 0;
  return;
}


