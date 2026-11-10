/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093fdc0; name: FUN_0093fdc0
 */


undefined1 FUN_0093fdc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_18 [8];
  
  uVar1 = FUN_009255c0(*(undefined8 *)(param_1 + 0x20));
  FUN_0095e3b0(uVar1,local_18,param_2);
  return local_18[0];
}


