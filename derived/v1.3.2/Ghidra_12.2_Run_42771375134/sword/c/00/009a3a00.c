/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a3a00; name: FUN_009a3a00
 */


bool FUN_009a3a00(undefined8 param_1,undefined8 param_2,uint param_3)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long local_58 [4];
  undefined8 local_38;
  
  uVar4 = FUN_008f35c0(param_1,0x200);
  if ((uVar4 & 1) == 0) {
    return false;
  }
  uVar4 = FUN_008f80c0(param_1,param_3);
  if ((uVar4 & 1) == 0) {
    FUN_008f80e0(local_58,param_1,param_3);
    uVar4 = FUN_01524da0(local_58[0]);
    lVar6 = 0;
    if (local_58[0] != 0) {
      (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
      local_58[0] = 0;
      lVar6 = local_58[0];
    }
  }
  else {
    sVar1 = FUN_008fb0a0(param_1,param_3);
    if ((sVar1 == 0xec) && (uVar4 = FUN_008fb100(param_1,param_3), (uVar4 & 1) == 0)) {
      return false;
    }
    sVar1 = FUN_008fb0a0(param_1,param_3);
    if ((sVar1 == 0xf0) && (uVar4 = FUN_008fb100(param_1,param_3), (uVar4 & 1) == 0)) {
      return false;
    }
    sVar1 = FUN_008fb0a0(param_1,param_3);
    if (sVar1 != 0xf7) goto LAB_009a3af0;
    uVar4 = FUN_008fb100(param_1,param_3);
    lVar6 = local_58[0];
  }
  local_58[0] = lVar6;
  if ((uVar4 & 1) == 0) {
    return false;
  }
LAB_009a3af0:
  uVar2 = FUN_008f8ca0(param_1,param_3);
  if ((uVar2 & 0xff) < 2) {
    uVar5 = FUN_00931a10(param_2);
    FUN_009336e0(uVar5,uVar2);
    uVar4 = FUN_00933820();
    if ((uVar4 & 1) != 0) {
      uVar5 = FUN_00931a10(param_2);
      FUN_009336e0(uVar5,uVar2);
      uVar2 = FUN_00933960();
      if (uVar2 != param_3) {
        return false;
      }
    }
  }
  FUN_00931a30(param_2,param_3);
  uVar4 = FUN_00935890();
  if ((uVar4 & 1) != 0) {
    FUN_00943860(local_58,param_1,param_2);
    do {
      do {
        uVar4 = FUN_00943ae0(local_58,&local_38);
        if ((uVar4 & 1) == 0) {
          uVar3 = FUN_008f8ca0(param_1,param_3);
          uVar5 = FUN_00931a90(param_2);
          lVar6 = FUN_00930630(uVar5,0,uVar3);
          return lVar6 == 0;
        }
        uVar4 = FUN_008e0a10(local_38);
      } while ((uVar4 & 1) == 0);
      FUN_008e0a00(local_38);
      uVar2 = FUN_008f94e0();
    } while ((uVar2 & 0xff) != param_3);
  }
  return false;
}


