/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087dc50; name: FUN_0087dc50
 */


void FUN_0087dc50(long param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar3 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  uVar4 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
  FUN_00864d20(uVar3,uVar4);
  uVar6 = FUN_00864da0(param_3);
  iVar5 = FUN_00864dc0(param_3);
  if (iVar5 != param_2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar7 = FUN_00864de0(param_3);
  if ((uVar7 & 1) != 0) {
    uVar4 = FUN_00864dd0(param_3);
  }
  FUN_0087dde0(param_1,param_2,uVar4);
  iVar5 = FUN_008693a0(*(undefined8 *)(param_1 + 0x98));
  if ((param_2 == 0x305) && (iVar5 == 0xe1)) {
    uVar2 = FUN_00868e00(*(undefined8 *)(param_1 + 0x98));
    uVar1 = FUN_00877840(uVar2);
    FUN_0087df30(param_1,uVar1,0);
  }
  else if (param_2 == 0x365) {
    uVar2 = FUN_00868e00(*(undefined8 *)(param_1 + 0x98));
    uVar3 = FUN_00877880(uVar2);
    iVar5 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
    if (iVar5 == 0x365) {
      uVar8 = FUN_008767f0(*(undefined8 *)(param_1 + 0x98));
      uVar3 = FUN_00880810(uVar8,uVar3);
      FUN_008766a0(*(undefined8 *)(param_1 + 0x98),uVar3);
    }
  }
  if (((uint)uVar6 < 0x2e) && ((1L << (uVar6 & 0x3f) & 0x200000180040U) != 0)) {
    FUN_0086fa20(*(undefined8 *)(param_1 + 0x98),0);
    return;
  }
  return;
}


