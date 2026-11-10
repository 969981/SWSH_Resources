/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009de320; name: FUN_009de320
 */


void FUN_009de320(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  
  iVar1 = FUN_00884820();
  if (iVar1 != 0) {
    iVar9 = 0;
    do {
      uVar6 = (**(code **)(*param_2 + 0x58))(param_2,iVar9);
      uVar7 = (**(code **)(*param_1 + 0x50))(param_1,iVar9);
      uVar8 = FUN_0087b180();
      if ((uVar8 & 1) == 0) {
        uVar2 = FUN_0087ac70(uVar6);
        uVar3 = FUN_0087ac70(uVar7);
        if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
          iVar4 = FUN_0087a5f0(uVar6);
          iVar5 = FUN_0087a5f0(uVar7);
          if (iVar4 == iVar5) {
            FUN_0087b0a0(uVar7,uVar3 - uVar2);
          }
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar1 != iVar9);
  }
  return;
}


