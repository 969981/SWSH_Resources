/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00546150; name: FUN_00546150
 */


undefined4 FUN_00546150(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xfffffffc;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


