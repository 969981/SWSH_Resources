/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01470b00; name: FUN_01470b00
 */


undefined8 FUN_01470b00(long param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x2b0) == 0) {
    return 1;
  }
  puVar1 = &UNK_0216d3a8;
  if (param_3 != 0) {
    puVar1 = &UNK_0216d3b0;
  }
  uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),puVar1 + (long)param_2 * 0x40);
  return uVar2;
}


