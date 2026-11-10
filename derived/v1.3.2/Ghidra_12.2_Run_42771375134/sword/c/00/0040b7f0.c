/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040b7f0; name: FUN_0040b7f0
 */


void FUN_0040b7f0(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((*(long *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 0x38) != 0)) {
    return;
  }
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78);
  iVar1 = FUN_0040ead0(uVar3);
  if ((param_2 & 1) == 0) {
    *(int *)(param_1 + 0x34) = iVar1;
    return;
  }
  iVar2 = FUN_0040eab0(uVar3);
  *(int *)(param_1 + 0x34) = iVar2 + iVar1;
  return;
}


