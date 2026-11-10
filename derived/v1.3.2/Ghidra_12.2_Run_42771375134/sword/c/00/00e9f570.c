/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e9f570; name: FUN_00e9f570
 */


void FUN_00e9f570(undefined8 param_1,long param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  
  auVar1 = FUN_007101c0(param_2 + 0xa0);
  auVar2 = FUN_00a92cd0(param_1,auVar1._0_8_,auVar1._8_4_);
  *(undefined1 *)(param_2 + 0xc0) = 1;
  *(undefined1 (*) [16])(param_2 + 0xa0) = auVar2;
  return;
}


