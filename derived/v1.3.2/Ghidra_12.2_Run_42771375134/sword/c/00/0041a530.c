/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041a530; name: FUN_0041a530
 */


int FUN_0041a530(long param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  
  *(int *)(param_1 + 0x90) = param_2;
  iVar2 = FUN_0040eaa0(*(undefined8 *)(param_1 + 0x78));
  uVar1 = (**(code **)(**(long **)(param_1 + 0x78) + 0x250))();
  iVar3 = 0;
  if (uVar1 != 0) {
    uVar6 = 0;
    iVar5 = iVar3;
    do {
      uVar4 = FUN_0040e520(*(undefined8 *)(param_1 + 0x78),uVar6);
      iVar3 = FUN_00414ea0(uVar4,iVar2 + param_2);
      uVar6 = uVar6 + 1;
      if (iVar3 <= iVar5) {
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
    } while (uVar1 != uVar6);
  }
  return iVar3;
}


