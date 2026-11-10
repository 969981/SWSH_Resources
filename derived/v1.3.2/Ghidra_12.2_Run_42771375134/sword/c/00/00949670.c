/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00949670; name: FUN_00949670
 */


void FUN_00949670(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 auStack_48 [8];
  
  uVar9 = *param_3;
  uVar5 = FUN_0093b2c0(param_3[1],0);
  uVar1 = FUN_008e12a0(uVar9,0x12);
  uVar2 = FUN_008e12a0(uVar5,0x12);
  uVar6 = FUN_00949860(param_1,uVar9,uVar5,*(undefined1 *)((long)param_3 + 0x11));
  if ((uVar6 & 1) == 0) {
    uVar3 = FUN_008e0a00(uVar9);
    uVar4 = FUN_008e0a00(uVar5);
    lVar7 = FUN_00942400(param_1);
    FUN_0093af10(lVar7 + 0x10);
    uVar8 = FUN_009423b0(param_1);
    FUN_0093a320(uVar8,uVar3,uVar4,uVar2,uVar1);
    uVar8 = FUN_009423b0(param_1);
    FUN_00936080(uVar8,uVar9,0x2ae);
    uVar8 = FUN_009423e0(param_1);
    FUN_0092e880(uVar8,uVar3,uVar1,uVar2);
    uVar8 = FUN_009423e0(param_1);
    FUN_0092e880(uVar8,uVar4,uVar2,uVar1);
    FUN_008e4aa0(uVar9,uVar2);
    FUN_008e4aa0(uVar5,uVar1);
    uVar8 = FUN_009423b0(param_1);
    FUN_0093a730(uVar8,uVar3,uVar4);
    local_60 = uVar9;
    FUN_00942450(param_1);
    uVar8 = FUN_00925030();
    FUN_00949bb0(uVar8,auStack_48,&local_60);
    local_60 = uVar5;
    FUN_00942450(param_1);
    uVar8 = FUN_00925030();
    FUN_00949bb0(uVar8,auStack_48,&local_60);
    local_60 = uVar9;
    local_58 = uVar1;
    uStack_54 = uVar2;
    FUN_00942450(param_1);
    uVar9 = FUN_00925040();
    FUN_00949a40(uVar9,auStack_48,&local_60);
    local_60 = uVar5;
    local_58 = uVar2;
    uStack_54 = uVar1;
    FUN_00942450(param_1);
    uVar9 = FUN_00925040();
    FUN_00949a40(uVar9,auStack_48,&local_60);
  }
  else if (*(char *)(param_3 + 2) != '\0') {
    FUN_009423b0(param_1);
    FUN_009366b0();
    return;
  }
  return;
}


