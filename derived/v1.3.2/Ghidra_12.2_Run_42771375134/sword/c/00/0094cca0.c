/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094cca0; name: FUN_0094cca0
 */


void FUN_0094cca0(undefined8 param_1,undefined1 *param_2,char *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 local_50;
  undefined2 local_48;
  char local_46;
  undefined1 auStack_38 [8];
  
  *param_2 = 0;
  uVar3 = FUN_009424e0(param_1,param_3[1]);
  if (*param_3 != param_3[1]) {
    uVar4 = FUN_009423e0(param_1);
    uVar5 = FUN_0092e6b0(uVar4,uVar3,*(undefined2 *)(param_3 + 2));
    if ((uVar5 & 1) != 0) {
      uVar4 = FUN_009423e0(param_1);
      FUN_0092e750(uVar4,uVar3);
      return;
    }
  }
  if (param_3[8] != '\0') {
    uVar4 = FUN_009423b0(param_1);
    FUN_00938900(uVar4,*param_3);
  }
  uVar2 = FUN_008e2d10(uVar3);
  uVar4 = FUN_009423b0(param_1);
  FUN_00935bf0(uVar4,param_3 + 0xc);
  if (param_3[4] != '\0') {
    uVar4 = FUN_009423b0(param_1);
    FUN_009379e0(uVar4,param_3[1]);
  }
  local_48 = *(undefined2 *)(param_3 + 2);
  local_46 = param_3[9];
  local_50 = uVar3;
  FUN_00942450(param_1);
  uVar4 = FUN_009250a0();
  FUN_00949f80(uVar4,auStack_38,&local_50);
  if ((*(short *)(param_3 + 2) == 0) && (param_3[7] != '\0')) {
    uVar4 = FUN_009423e0(param_1);
    FUN_0092b870(uVar4,uVar3,uVar2,1);
  }
  if (param_3[8] != '\0') {
    uVar4 = FUN_009423b0(param_1);
    FUN_009389c0(uVar4,*param_3);
  }
  if (param_3[5] != '\0') {
    uVar4 = FUN_009423b0(param_1);
    FUN_009379e0(uVar4,param_3[6]);
  }
  uVar1 = FUN_008e0a00(uVar3);
  local_50._0_2_ = CONCAT11(0xf,uVar1);
  FUN_00942450(param_1);
  uVar3 = FUN_00925140();
  FUN_00944c20(uVar3,auStack_38,&local_50);
  *param_2 = 1;
  return;
}


