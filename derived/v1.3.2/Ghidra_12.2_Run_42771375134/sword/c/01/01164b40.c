/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01164b40; name: FUN_01164b40
 */


void FUN_01164b40(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_0077d7e0(*(long *)(param_1 + 0x60) + 0x168,param_2,0xb);
  uVar1 = FUN_008d3fc0(param_3,0);
  *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x184) = uVar1;
  return;
}


