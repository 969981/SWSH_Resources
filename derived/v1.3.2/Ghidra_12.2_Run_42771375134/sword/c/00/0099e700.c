/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099e700; name: FUN_0099e700
 */


void FUN_0099e700(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  
  *param_2 = 0;
  uVar3 = FUN_008e1810(*param_3,0x1b);
  if ((uVar3 & 1) == 0) {
    uVar2 = *(undefined4 *)param_3[1];
    uVar6 = FUN_009423e0(param_1);
    uVar3 = FUN_0092d5b0(uVar6,*param_3,param_3[2]);
    if ((uVar3 & 1) == 0) {
      uVar6 = FUN_009423e0(param_1);
      uVar3 = FUN_0092d680(uVar6,*param_3,uVar2);
      uVar7 = FUN_008e0b50(*param_3);
      uVar8 = FUN_0099e8a0(param_1,*param_3,param_3[1],param_3[2]);
      if (((uVar3 & 1) == 0) && ((uVar7 & 1) == 0)) {
        if ((uVar8 & 1) == 0) {
          uVar9 = 2;
        }
        else {
          uVar6 = FUN_008e0a00(*param_3);
          uVar9 = 2;
          local_48 = FUN_008ed0d0(uVar6,2,uVar2);
          uVar6 = FUN_009423b0(param_1);
          FUN_00937e30(uVar6,*param_3,0x1b,&local_48);
        }
        goto LAB_0099e878;
      }
      if ((uVar8 & 1) != 0) {
        uVar6 = *param_3;
        puVar1 = (undefined4 *)param_3[1];
        uVar4 = FUN_009423e0(param_1);
        FUN_0092d910(uVar4,uVar6,*puVar1);
        goto LAB_0099e738;
      }
    }
    else {
      FUN_009423b0(param_1);
      FUN_009366b0();
    }
    uVar9 = 1;
  }
  else {
LAB_0099e738:
    uVar6 = *param_3;
    puVar1 = (undefined4 *)param_3[1];
    uVar10 = param_3[2];
    uVar4 = FUN_009423e0(param_1);
    uVar3 = FUN_0092d970(uVar4,uVar6,uVar10,*puVar1);
    lVar5 = FUN_00942400(param_1);
    FUN_0093af60(lVar5 + 0x10,1);
    FUN_008e3830(*param_3,0xb);
    local_48 = *param_3;
    FUN_00942450(param_1);
    uVar6 = FUN_00925c50();
    FUN_0099eb80(uVar6,auStack_50,&local_48);
    uVar9 = 3;
    if ((uVar3 & 1) != 0) {
      uVar9 = 4;
    }
  }
LAB_0099e878:
  *param_2 = uVar9;
  return;
}


