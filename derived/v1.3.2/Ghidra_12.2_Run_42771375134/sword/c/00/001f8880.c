/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f8880; name: FUN_001f8880
 */


void FUN_001f8880(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  
  uVar1 = *param_2;
  uVar2 = *(int *)(param_1 + 0x25f0) - 1;
  *(uint *)(param_1 + 0x25f0) = uVar2;
  *(undefined8 *)(*(long *)(param_1 + 0x25e8) + (ulong)uVar1 * 8) =
       *(undefined8 *)(*(long *)(param_1 + 0x25e8) + (ulong)uVar2 * 8);
  if ((uVar2 != 0) && (uVar2 != *param_2)) {
    plVar4 = *(long **)(*(long *)(param_1 + 0x25e8) + (ulong)*param_2 * 8);
    iVar3 = (**(code **)(*plVar4 + 0x30))(plVar4);
    if ((iVar3 == 1) || (iVar3 == 0)) {
      *(uint *)(plVar4 + 10) = *param_2;
    }
  }
  return;
}


