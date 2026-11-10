/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092f850; name: FUN_0092f850
 */


undefined8 FUN_0092f850(long param_1,undefined4 param_2)

{
  ulong uVar1;
  
  if (*(char *)(*(long *)(param_1 + 0x88) + 0xa81) != '\0') {
    uVar1 = FUN_00880a00(param_2,0xe);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}


