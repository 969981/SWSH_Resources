/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094d920; name: FUN_0094d920
 */


void FUN_0094d920(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 local_60;
  short local_58;
  undefined1 local_56;
  undefined1 auStack_48 [8];
  
  *param_2 = 0;
  uVar6 = FUN_009424e0(param_1,param_3[1]);
  uVar7 = FUN_009424e0(param_1,*param_3);
  uVar4 = FUN_008e2d10();
  sVar3 = FUN_008e2d10(uVar6);
  uVar8 = FUN_009423e0(param_1);
  uVar9 = FUN_0092e6b0(uVar8,uVar6,uVar4);
  if ((uVar9 & 1) != 0) {
    uVar7 = FUN_009423e0(param_1);
    FUN_0092e750(uVar7,uVar6);
    return;
  }
  if (param_3[3] != '\0') {
    uVar8 = FUN_009423b0(param_1);
    FUN_00938920(uVar8,uVar7);
  }
  uVar8 = FUN_009423b0(param_1);
  FUN_00935bf0(uVar8,param_3 + 4);
  uVar8 = FUN_009423b0(param_1);
  FUN_00935bf0(uVar8,param_3 + 0x28);
  uVar8 = FUN_009423b0(param_1);
  FUN_00935bf0(uVar8,param_3 + 0x4c);
  if (param_3[3] != '\0') {
    uVar8 = FUN_009423b0(param_1);
    FUN_009389e0(uVar8,uVar7);
  }
  local_56 = 0;
  local_60 = uVar7;
  local_58 = sVar3;
  FUN_00942450(param_1);
  uVar8 = FUN_009250a0();
  FUN_00949f80(uVar8,auStack_48,&local_60);
  local_58 = (short)uVar4;
  local_56 = 0;
  local_60 = uVar6;
  FUN_00942450(param_1);
  uVar8 = FUN_009250a0();
  FUN_00949f80(uVar8,auStack_48,&local_60);
  uVar1 = FUN_008e0a00(uVar7);
  local_60._0_2_ = CONCAT11(7,uVar1);
  FUN_00942450(param_1);
  uVar7 = FUN_00925140();
  FUN_00944c20(uVar7,auStack_48,&local_60);
  uVar1 = FUN_008e0a00(uVar6);
  local_60._0_2_ = CONCAT11(7,uVar1);
  FUN_00942450(param_1);
  uVar6 = FUN_00925140();
  FUN_00944c20(uVar6,auStack_48,&local_60);
  if ((param_3[2] != '\0') && (sVar3 != 0)) {
    uVar1 = param_3[1];
    iVar5 = FUN_00942640(param_1);
    if (iVar5 == 0) {
      cVar2 = FUN_008f94e0(uVar1);
      if (cVar2 == '\x01') {
        FUN_00942380(param_1);
        FUN_0094dc70();
      }
    }
  }
  *param_2 = 1;
  return;
}


