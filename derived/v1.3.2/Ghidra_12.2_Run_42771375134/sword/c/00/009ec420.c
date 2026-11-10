/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ec420; name: FUN_009ec420
 */


bool FUN_009ec420(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar7 = FUN_008d5540();
  lVar8 = FUN_008d5550(param_1);
  bVar1 = false;
  if ((lVar7 != 0) && (lVar8 != 0)) {
    uVar9 = FUN_008d5550(param_1);
    iVar2 = FUN_008e12a0(uVar9,0xd);
    uVar9 = FUN_008d5510(param_1);
    uVar3 = FUN_008e0a00(lVar7);
    uVar4 = FUN_008e0a00(lVar8);
    uVar5 = FUN_008d5650(param_1);
    uVar6 = FUN_008d60d0(uVar9,uVar3,uVar4,uVar5,1,0);
    bVar1 = iVar2 <= (int)(uVar6 & 0xffff);
  }
  return bVar1;
}


