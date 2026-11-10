/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0079d540; name: FUN_0079d540
 */


bool FUN_0079d540(long param_1,int param_2,long param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x50);
  if (*(char *)(lVar9 + 0xaa) == '\0') {
    bVar1 = false;
  }
  else {
    if (param_2 == 0) {
      uVar6 = *(undefined8 *)(lVar9 + 0x68);
      uVar4 = 0x25;
      param_2 = 0;
      uVar7 = 0;
      uVar8 = 0;
      uVar2 = 0;
      uVar3 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(param_3 + 8);
      uVar8 = *(undefined8 *)(param_3 + 0x10);
      uVar2 = (**(code **)PTR_DAT_02714c48)(uVar7);
      uVar3 = (**(code **)PTR_DAT_02714c50)(uVar7);
      uVar4 = (**(code **)PTR_DAT_02713af0)(uVar7);
      uVar6 = *(undefined8 *)(lVar9 + 0x68);
    }
    iVar5 = FUN_00518df0(uVar6,param_2,uVar7,uVar8,uVar2,uVar3,uVar4);
    bVar1 = iVar5 == 0;
  }
  return bVar1;
}


