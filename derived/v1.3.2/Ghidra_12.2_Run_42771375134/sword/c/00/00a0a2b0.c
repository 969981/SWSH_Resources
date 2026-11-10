/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0a2b0; name: FUN_00a0a2b0
 */


undefined8 FUN_00a0a2b0(long *param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0x870))();
  bVar1 = (**(code **)(*param_1 + 0x7d8))(param_1);
  if (iVar2 == 1 && (bVar1 | 4) == 4) {
    return 1;
  }
  return 0;
}


