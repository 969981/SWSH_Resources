/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099f3d0; name: FUN_0099f3d0
 */


void FUN_0099f3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,uint param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  
  uVar2 = FUN_00931920(param_3);
  uVar1 = FUN_008e0a00(param_4);
  uVar1 = FUN_008f9470(param_2,uVar2,uVar1);
  switch(*(undefined4 *)(param_6 + 0x18)) {
  case 0:
  case 3:
  case 4:
  case 5:
  case 9:
    if ((param_7 & 0xff) != 0x1f) goto LAB_0099f510;
    uVar1 = FUN_008f9400(param_2,uVar1,0);
    FUN_008f8e50(param_2,uVar1,local_54,local_58);
    break;
  case 1:
  case 6:
  case 7:
    if ((param_7 & 0xff) == 0x1f) goto LAB_0099f524;
    goto LAB_0099f510;
  case 2:
  case 10:
  case 0xb:
  case 0xc:
    goto switchD_0099f444_caseD_2;
  case 8:
    FUN_0093b0b0(param_8,param_4);
    uVar1 = FUN_008f9400(param_2,uVar1,0);
    FUN_008f8e50(param_2,uVar1,local_44,local_48);
    local_54[0] = local_44[0];
    local_58[0] = local_48[0];
    break;
  case 0xd:
    if ((param_7 & 0xff) == 0x1f) {
      return;
    }
LAB_0099f510:
    param_4 = FUN_008deea0(uVar2,param_7);
LAB_0099f524:
    FUN_0093b0b0(param_8,param_4);
    return;
  default:
    return;
  }
  uVar2 = FUN_008df900(uVar2,local_54[0],local_58[0]);
  FUN_0093b0b0(param_8,uVar2);
switchD_0099f444_caseD_2:
  return;
}


