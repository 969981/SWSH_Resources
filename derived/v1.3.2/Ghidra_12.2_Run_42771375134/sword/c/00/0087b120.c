/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087b120; name: FUN_0087b120
 */


bool FUN_0087b120(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98));
  if ((uVar3 & 1) == 0) {
    return true;
  }
  iVar1 = FUN_008681f0(*(undefined8 *)(param_1 + 0x98));
  iVar2 = FUN_008680a0(*(undefined8 *)(param_1 + 0x98));
  return iVar1 == iVar2;
}


