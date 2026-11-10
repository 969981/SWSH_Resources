/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00930630; name: FUN_00930630
 */


undefined8 FUN_00930630(long param_1,char param_2,byte param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_2 == '\0') && (param_3 < 2)) {
    uVar1 = *(undefined8 *)(param_1 + (ulong)param_3 * 8 + 0x68);
  }
  return uVar1;
}


