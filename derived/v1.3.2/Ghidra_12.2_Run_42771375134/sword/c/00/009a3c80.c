/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a3c80; name: FUN_009a3c80
 */


bool FUN_009a3c80(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long local_58 [4];
  undefined8 local_38;
  
  uVar3 = FUN_008f35c0(param_1,0x200);
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN_008f80c0(param_1,param_3);
    if ((uVar3 & 1) == 0) {
      FUN_008f80e0(local_58,param_1,param_3);
      uVar3 = FUN_01524da0(local_58[0]);
      if (local_58[0] != 0) {
        (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
        local_58[0] = 0;
      }
      if ((uVar3 & 1) == 0) {
        return false;
      }
    }
    FUN_00943860(local_58,param_1,param_2);
    do {
      do {
        uVar3 = FUN_00943ae0(local_58,&local_38);
        if ((uVar3 & 1) == 0) {
          uVar2 = FUN_008f8ca0(param_1,param_3);
          uVar4 = FUN_00931a90(param_2);
          lVar5 = FUN_00930630(uVar4,0,uVar2);
          return lVar5 == 0;
        }
        uVar3 = FUN_008e0a10(local_38);
      } while ((uVar3 & 1) == 0);
      FUN_008e0a00(local_38);
      uVar1 = FUN_008f94e0();
    } while ((uVar1 & 0xff) != param_3);
  }
  return false;
}


