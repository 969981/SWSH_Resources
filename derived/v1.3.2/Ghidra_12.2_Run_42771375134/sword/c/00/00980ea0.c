/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00980ea0; name: FUN_00980ea0
 */


undefined8 FUN_00980ea0(undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 local_90;
  undefined1 uStack_8f;
  undefined2 uStack_8e;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined7 uStack_78;
  undefined1 local_71;
  undefined6 uStack_70;
  undefined1 uStack_6a;
  undefined4 local_68;
  undefined1 auStack_64 [36];
  
  uVar2 = FUN_008e1810(param_4,0x22);
  if ((uVar2 & 1) == 0) {
    local_90 = (undefined1)param_4;
    uStack_8f = (undefined1)((ulong)param_4 >> 8);
    uStack_8e = (undefined2)((ulong)param_4 >> 0x10);
    uStack_8c = (undefined4)((ulong)param_4 >> 0x20);
    local_88 = CONCAT31(local_88._1_3_,1);
    uVar2 = FUN_009402b0(param_1,&local_90);
    if ((uVar2 & 1) != 0) {
      local_90 = 0x1f;
      uStack_8f = 0x1f;
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_8c = 0;
      local_88 = 0;
      uStack_7c = 1;
      FUN_00943e60(&uStack_78);
      uVar1 = (undefined1)param_2;
      uStack_8c = 0x20;
      local_90 = uVar1;
      uStack_8f = param_3;
      uVar3 = FUN_008ed120(param_2);
      local_88 = (undefined4)uVar3;
      uStack_84 = (undefined4)((ulong)uVar3 >> 0x20);
      FUN_00943f20(&uStack_78,2,0x5fa);
      FUN_00943f60(&uStack_78,param_3);
      FUN_0093f310(param_1,&local_90);
      uVar2 = FUN_008e1810(param_4,0x1f);
      if ((uVar2 & 1) != 0) {
        uStack_8c = 0x2d;
        local_90 = 0x1f;
        local_68 = 0;
        uStack_70 = 0;
        uStack_6a = 0;
        local_88 = 0;
        uStack_84 = 0;
        uStack_80 = 0;
        uStack_7c = 0;
        uStack_78 = 0;
        local_71 = 0;
        FUN_00943e60(auStack_64);
        uStack_6a = 1;
        local_88 = CONCAT31(local_88._1_3_,param_3);
        uStack_8c = 0x1f;
        local_68 = CONCAT13(1,(undefined3)local_68);
        local_90 = uVar1;
        FUN_0093f290(param_1,&local_90);
      }
      uVar2 = FUN_008e1810(param_4,0x21);
      if ((uVar2 & 1) == 0) {
        return 1;
      }
      local_90 = 0x1f;
      uStack_8c = 0x2d;
      local_68 = 0;
      uStack_70 = 0;
      uStack_6a = 0;
      local_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_78 = 0;
      local_71 = 0;
      FUN_00943e60(auStack_64);
      uStack_6a = 1;
      local_88 = CONCAT31(local_88._1_3_,param_3);
      uStack_8c = 0x21;
      local_68 = CONCAT13(1,(undefined3)local_68);
      local_90 = uVar1;
      FUN_0093f290(param_1,&local_90);
      return 1;
    }
  }
  return 0;
}


