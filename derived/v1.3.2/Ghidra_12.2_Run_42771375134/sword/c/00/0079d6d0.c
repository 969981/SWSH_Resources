/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0079d6d0; name: FUN_0079d6d0
 */


bool FUN_0079d6d0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = (**(code **)PTR_DAT_02714c48)(uVar1);
  uVar4 = (**(code **)PTR_DAT_02714c50)(uVar1);
  uVar5 = (**(code **)PTR_DAT_02713af0)(uVar1);
  iVar6 = FUN_00518c80(*(undefined8 *)(lVar7 + 0x68),uVar1,uVar2,uVar3,uVar4,uVar5,1,0);
  return iVar6 == 0;
}


