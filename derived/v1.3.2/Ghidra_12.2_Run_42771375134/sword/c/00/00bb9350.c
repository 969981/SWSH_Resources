/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb9350; name: FUN_00bb9350
 */


void FUN_00bb9350(long param_1,int param_2,uint param_3,uint param_4,ulong param_5,uint param_6)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  uVar7 = 0;
  if (param_2 != 0) {
    uVar7 = 3;
  }
  uVar1 = 2;
  if ((param_5 & 1) == 0) {
    uVar1 = uVar7;
  }
  uVar8 = (ulong)param_4;
  lVar3 = FUN_00bd1790(*(undefined8 *)(param_1 + 0x5f0),uVar1);
  lVar4 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),param_2,param_3,uVar8);
  if (lVar4 == 0) {
    return;
  }
  uVar2 = FUN_008787f0();
  piVar5 = (int *)FUN_00bd0180(*(undefined8 *)(param_1 + 0x5f8));
  if ((((*(short *)((long)piVar5 + 6) == 0) || (*piVar5 != param_2)) ||
      (*(byte *)(piVar5 + 1) != param_3)) || (*(byte *)((long)piVar5 + 5) != param_4)) {
    FUN_00bcfef0(*(undefined8 *)(param_1 + 0x5f8),uVar2,0,*(undefined1 *)(lVar3 + uVar8));
    uVar9 = *(undefined8 *)(param_1 + 0x5f0);
  }
  else {
    FUN_00bcfef0(*(undefined8 *)(param_1 + 0x5f8),0,0,*(undefined1 *)(lVar3 + (ulong)param_4));
    uVar9 = *(undefined8 *)(param_1 + 0x5f0);
  }
  if ((param_6 & 1) == 0) {
    uVar6 = FUN_00bc8500(param_1,param_2,param_3,uVar8);
    uVar7 = 0;
    if ((uVar6 & 1) == 0) {
      uVar7 = 2;
    }
  }
  else {
    uVar7 = 1;
  }
  FUN_00bd3390(uVar9,uVar1,uVar8,uVar7,(uVar2 & 0xffff) == 0);
  return;
}


