/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009de3f0; name: FUN_009de3f0
 */


void FUN_009de3f0(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  
  iVar1 = FUN_00884820();
  if (iVar1 != 0) {
    iVar7 = 0;
    do {
      uVar4 = (**(code **)(*param_2 + 0x58))(param_2,iVar7);
      uVar5 = (**(code **)(*param_1 + 0x50))(param_1,iVar7);
      uVar6 = FUN_008787f0(uVar4);
      uVar8 = uVar6 & 0xffffffff;
      iVar2 = FUN_008ec3f0(uVar6,0x13);
      if (iVar2 == 0) {
LAB_009de494:
        FUN_00878810(uVar5,uVar8);
      }
      else {
        uVar3 = FUN_008787f0(uVar5);
        if ((uVar3 & 0xffff) != ((uint)uVar6 & 0xffff)) {
          uVar8 = 0;
          goto LAB_009de494;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar1 != iVar7);
  }
  return;
}


