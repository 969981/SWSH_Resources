/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099de00; name: FUN_0099de00
 */


void FUN_0099de00(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [8];
  undefined1 local_48;
  undefined1 local_47;
  
  *param_2 = 0;
  uVar7 = *param_3;
  uVar1 = FUN_008e0a00(uVar7);
  uVar5 = FUN_008e0b50(uVar7);
  if ((uVar5 & 1) != 0) {
    FUN_009423b0(param_1);
    FUN_009366b0();
    return;
  }
  uVar5 = FUN_008e55a0(uVar7);
  if ((uVar5 & 1) != 0) {
    uVar6 = FUN_009423b0(param_1);
    FUN_00936080(uVar6,uVar7,0x426);
    return;
  }
  uVar2 = FUN_008ec2f0(uVar7,4,1);
  uVar3 = FUN_008e12a0(uVar7,0xe);
  if (uVar3 <= uVar2) {
    uVar7 = FUN_009423b0(param_1);
    FUN_00935ec0(uVar7,0x8c,0,0);
    return;
  }
  uVar2 = FUN_00942580(param_1,uVar1);
  if ((uVar2 & 0xff) != 5) {
    iVar4 = FUN_008ec2f0(uVar7,4,1);
    uVar6 = FUN_009423b0(param_1);
    FUN_00937a20(uVar6,uVar7,-iVar4,0xe,uVar1,1);
    local_48 = FUN_008e0a00(uVar7);
    local_47 = 1;
    FUN_00942450(param_1);
    uVar7 = FUN_00925140();
    FUN_00944c20(uVar7,auStack_58,&local_48);
    uVar7 = FUN_009423b0(param_1);
    FUN_00938700(uVar7,uVar1,iVar4);
    uVar7 = FUN_009423b0(param_1);
    FUN_0093a0a0(uVar7,uVar2);
    uVar7 = FUN_009423b0(param_1);
    FUN_009360c0(uVar7,0x422,uVar1 & 0xff);
    *param_2 = 1;
  }
  return;
}


