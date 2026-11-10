/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009887b0; name: FUN_009887b0
 */


void FUN_009887b0(undefined8 param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  uint local_34;
  
  uVar6 = 1;
  piVar7 = &DAT_02625ee0;
  while (piVar7[-4] != param_3) {
    if (*piVar7 == param_3) goto LAB_00988810;
    uVar1 = uVar6 + 1;
    uVar6 = uVar6 + 2;
    piVar7 = piVar7 + 8;
    if (0x103 < uVar1) {
      return;
    }
  }
  uVar6 = uVar6 - 1;
LAB_00988810:
  lVar5 = (**(code **)((uVar6 & 0xffffffff) * 0x10 + 0x2625ed8))(&local_34);
  if (lVar5 == 0) {
    return;
  }
  uVar4 = FUN_008e0a00(param_2);
  uVar3 = FUN_008e1720(param_2,0xc);
  uVar2 = 7;
  if ((local_34 & 0xffff0000) != 0) {
    uVar2 = local_34 >> 0x10;
  }
  local_34 = local_34 & 0xffff;
  FUN_008daa50(param_1,4,param_3,uVar2,uVar3,uVar4,lVar5);
  return;
}


