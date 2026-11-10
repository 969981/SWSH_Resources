/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093a550; name: FUN_0093a550
 */


undefined8 FUN_0093a550(long param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  ulong uVar1;
  
  uVar1 = FUN_0093d5c0(*(undefined8 *)(param_1 + 0x20));
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x6e,param_2,param_3,param_4);
  return 1;
}


