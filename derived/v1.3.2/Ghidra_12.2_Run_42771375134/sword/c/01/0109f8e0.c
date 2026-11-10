/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0109f8e0; name: FUN_0109f8e0
 */


int FUN_0109f8e0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0087a5f0(*(undefined8 *)(param_1 + 0x128));
  if (iVar1 == 100) {
    return 0;
  }
  iVar1 = FUN_0087b3e0(*(undefined8 *)(param_1 + 0x128));
  iVar2 = FUN_0087b490(*(undefined8 *)(param_1 + 0x128));
  iVar3 = FUN_0087b350(*(undefined8 *)(param_1 + 0x128));
  return (int)(((float)(iVar3 - iVar1) / (float)(iVar2 - iVar1)) * DAT_01d4c6b8);
}


