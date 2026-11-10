/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f8980; name: FUN_008f8980
 */


undefined8 FUN_008f8980(long param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x88);
  if (((((*(byte *)(piVar1 + 0x29d) >> 2 & 1) == 0) && (*piVar1 == 1)) &&
      (*(int *)(param_1 + 0x150) == 0)) &&
     (((char)piVar1[0xee] == '\0' && (*(int *)(param_1 + 0x178) == 0)))) {
    return 1;
  }
  return 0;
}


