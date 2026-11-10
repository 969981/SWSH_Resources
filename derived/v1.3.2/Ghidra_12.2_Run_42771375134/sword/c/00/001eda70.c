/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001eda70; name: FUN_001eda70
 */


undefined8 FUN_001eda70(long param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *param_2 | *(byte *)(param_1 + 0x24);
  *param_2 = bVar1;
  if ((bVar1 & 6) == 0) {
    iVar2 = *(int *)(param_1 + 0x20) + 1;
  }
  else {
    if (*(int *)(param_1 + 0x20) != 0) {
      return 0;
    }
    iVar2 = 1;
  }
  *(byte *)(param_1 + 0x24) = bVar1;
  *(int *)(param_1 + 0x20) = iVar2;
  return 1;
}


