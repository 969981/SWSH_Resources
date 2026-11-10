/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009516c0; name: FUN_009516c0
 */


void FUN_009516c0(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  undefined1 auStack_48 [8];
  
  *param_2 = 0;
  uVar4 = FUN_009424e0(param_1,param_3[1]);
  iVar2 = FUN_008e12a0(uVar4,0x12);
  uVar5 = FUN_008dd580();
  if ((((uVar5 & 1) == 0) && (uVar5 = FUN_008e1600(uVar4), (uVar5 & 1) == 0)) &&
     ((param_3[9] != '\0' || (*(int *)(param_3 + 4) != iVar2)))) {
    uVar6 = FUN_009423e0(param_1);
    uVar5 = FUN_0092ea30(uVar6,param_3[1],*(undefined4 *)(param_3 + 4),param_3[8]);
    if (param_3[0xb] != '\0') {
      uVar6 = FUN_009423b0(param_1);
      FUN_00938900(uVar6,*param_3);
    }
    if ((uVar5 & 1) == 0) {
      uVar6 = FUN_009423e0(param_1);
      FUN_0092eae0(uVar6,param_3[1],*(undefined4 *)(param_3 + 4),param_3[8]);
      cVar1 = param_3[0xb];
    }
    else {
      uVar6 = FUN_009423b0();
      FUN_0093a350(uVar6,param_3[1],*(undefined4 *)(param_3 + 4));
      uVar6 = FUN_009423b0(param_1);
      FUN_00935bf0(uVar6,param_3 + 0xc);
      uVar6 = FUN_009423e0(param_1);
      FUN_0092e880(uVar6,param_3[1],iVar2,*(undefined4 *)(param_3 + 4));
      uVar6 = FUN_009423b0(param_1);
      uVar3 = FUN_008e0a00(uVar4);
      FUN_0093a6f0(uVar6,uVar3);
      uVar6 = FUN_009423b0(param_1);
      FUN_00938590(uVar6,param_3[1],*(undefined4 *)(param_3 + 4));
      uVar6 = FUN_009423b0(param_1);
      uVar7 = FUN_009423e0(param_1);
      FUN_0092fa00(uVar6,uVar7,uVar4);
      uVar6 = FUN_009423b0(param_1);
      FUN_009389c0(uVar6,param_3[1]);
      if (iVar2 != *(int *)(param_3 + 4)) {
        uVar6 = FUN_009423e0(param_1);
        FUN_00928940(uVar6,param_3[1]);
      }
      *param_2 = 1;
      cVar1 = param_3[0xb];
    }
    if (cVar1 != '\0') {
      uVar6 = FUN_009423b0(param_1);
      FUN_009389c0(uVar6,*param_3);
    }
    if ((uVar5 & 1) != 0) {
      uStack_54 = *(undefined4 *)(param_3 + 4);
      local_60 = uVar4;
      local_58 = iVar2;
      FUN_00942450(param_1);
      uVar4 = FUN_00925040();
      FUN_00949a40(uVar4,auStack_48,&local_60);
    }
  }
  return;
}


