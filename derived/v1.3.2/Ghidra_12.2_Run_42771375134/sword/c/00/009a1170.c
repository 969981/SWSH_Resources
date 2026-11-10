/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a1170; name: FUN_009a1170
 */


void FUN_009a1170(undefined8 param_1,undefined8 param_2,undefined4 param_3,ulong param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_48;
  
  if ((((uint)param_4 & 0xff) < 0x27) && ((1L << (param_4 & 0x3f) & 0x4004020002U) != 0)) {
    lVar3 = FUN_00942400(param_1);
    lVar4 = FUN_00942400(param_1);
    uVar1 = FUN_008e0a00(param_2);
    *(undefined1 *)(lVar3 + 0xc) = uVar1;
    *(undefined4 *)(lVar3 + 8) = param_3;
    *(undefined2 *)(lVar3 + 0xd) = 0x105;
    uVar5 = FUN_009423c0(param_1);
    FUN_0095eca0(uVar5,lVar3,lVar4 + 0x10);
  }
  uVar5 = FUN_009423b0(param_1);
  FUN_009367b0(uVar5,param_2,param_3,param_4 & 0xffffffff);
  switch((uint)param_4 & 0xff) {
  case 2:
    uVar5 = FUN_009423b0(param_1);
    uVar6 = 0x2a;
    break;
  case 3:
    uVar5 = FUN_009423b0(param_1);
    uVar6 = 0x2e;
    break;
  case 4:
    uVar5 = FUN_009423b0(param_1);
    uVar6 = 0x2d;
    break;
  default:
    return;
  case 0x17:
    uVar2 = FUN_008e0a00(param_2);
    local_48 = FUN_008ec1d0(2,uVar2);
    uVar5 = FUN_009423b0(param_1);
    uVar2 = FUN_008e0a00(param_2);
    FUN_0093a080(uVar5,uVar2,0);
    uVar5 = FUN_009423b0(param_1);
    FUN_00937e30(uVar5,param_2,2,&local_48);
    uVar5 = FUN_009423b0(param_1);
    FUN_00937200(uVar5,param_2,0x2a);
    return;
  }
  FUN_00937200(uVar5,param_2,uVar6);
  return;
}


