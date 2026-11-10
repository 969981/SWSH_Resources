/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0108b410; name: FUN_0108b410
 */


undefined8 FUN_0108b410(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x2b0) == 0) {
    return 1;
  }
  uVar1 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&UNK_02163568 + (long)param_2 * 8);
  return uVar1;
}


