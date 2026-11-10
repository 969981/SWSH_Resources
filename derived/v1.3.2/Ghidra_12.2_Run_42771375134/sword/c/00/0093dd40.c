/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093dd40; name: FUN_0093dd40
 */


bool FUN_0093dd40(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  long lVar6;
  undefined4 local_34;
  
  piVar5 = (int *)FUN_008e1580(param_2);
  iVar1 = *piVar5;
  if ((iVar1 < 4) && (iVar1 - 1U < 3)) {
    lVar6 = (*(code *)(&PTR_LAB_0261bf28)[(ulong)(iVar1 - 1U) * 2])(&local_34);
    bVar2 = false;
    if (lVar6 != 0) {
      uVar3 = FUN_008e1720(param_2,0xc);
      uVar4 = FUN_008e0a00(param_2);
      lVar6 = FUN_008daa50(param_1,6,iVar1,0,uVar3,uVar4,lVar6,local_34);
      bVar2 = lVar6 != 0;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


