/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099f540; name: FUN_0099f540
 */


void FUN_0099f540(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5
                 ,int *param_6,uint param_7,undefined8 param_8,undefined1 *param_9)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  
  *param_9 = 0;
  uVar4 = FUN_00931920(param_3);
  uVar1 = FUN_008e0a00(param_4);
  uVar2 = FUN_008f9470(param_2,uVar4,uVar1);
  if (*param_6 == 0xae) {
    if (param_6[6] != 7) {
      if ((param_6[6] != 0) || (((param_5 & 0xff) != 5 && ((uVar2 & 0xff) != (param_5 & 0xff)))))
      goto LAB_0099f5f0;
      uVar2 = FUN_008eca00(param_2,uVar4,param_4,0xae,0);
    }
    param_5 = uVar2;
  }
LAB_0099f5f0:
  uVar1 = FUN_008e0a00(param_4);
  uVar1 = FUN_008f9470(param_2,uVar4,uVar1);
  switch(param_6[6]) {
  case 0:
  case 3:
    uVar4 = FUN_008df770(uVar4,param_5);
    break;
  case 1:
    lVar5 = FUN_008df770(uVar4,param_5);
    if (lVar5 == 0) {
LAB_0099f658:
      lVar5 = param_4;
    }
    else {
      uVar6 = FUN_008e1600();
      if ((uVar6 & 1) != 0) goto LAB_0099f658;
    }
    param_4 = lVar5;
    goto LAB_0099f81c;
  case 2:
    param_4 = FUN_008df770(uVar4,param_5);
    goto LAB_0099f81c;
  case 6:
    FUN_0093b0b0(param_8,param_4);
    uVar1 = FUN_008f9420(param_2,uVar1,1);
LAB_0099f734:
    FUN_008f8e50(param_2,uVar1,local_54,local_58);
    uVar4 = FUN_008df900(uVar4,local_54[0],local_58[0]);
    FUN_0093b0b0(param_8,uVar4);
    return;
  case 7:
    if ((param_7 & 0xff) != 0x1f) {
      param_4 = FUN_008deea0(uVar4,param_7);
    }
LAB_0099f81c:
    FUN_0093b0b0(param_8,param_4);
    return;
  case 8:
    FUN_0093b0b0(param_8,param_4);
  case 4:
    uVar3 = FUN_008f9420(param_2,uVar1,1);
    FUN_008f8e50(param_2,uVar3,local_54,local_58);
    uVar7 = FUN_008df900(uVar4,local_54[0],local_58[0]);
    FUN_0093b0b0(param_8,uVar7);
  case 5:
    uVar3 = FUN_008f9400(param_2,uVar1,0);
    FUN_008f8e50(param_2,uVar3,local_54,local_58);
    uVar7 = FUN_008df900(uVar4,local_54[0],local_58[0]);
    FUN_0093b0b0(param_8,uVar7);
    uVar1 = FUN_008f9400(param_2,uVar1,1);
    goto LAB_0099f734;
  case 9:
    uVar3 = FUN_008ebfa0(2);
    uVar1 = FUN_008f9400(param_2,uVar1,uVar3);
    FUN_008f8e50(param_2,uVar1,local_54,local_58);
    uVar4 = FUN_008df900(uVar4,local_54[0],local_58[0]);
    break;
  case 10:
  case 0xb:
  case 0xc:
    goto switchD_0099f628_caseD_a;
  case 0xd:
    if ((param_7 & 0xff) == 0x1f) {
      return;
    }
    uVar4 = FUN_008deea0(uVar4,param_7);
    break;
  default:
    return;
  }
  FUN_0093b0b0(param_8,uVar4);
  *param_9 = 1;
switchD_0099f628_caseD_a:
  return;
}


