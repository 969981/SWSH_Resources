/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099c0e0; name: FUN_0099c0e0
 */


undefined1 FUN_0099c0e0(undefined8 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 local_c0 [16];
  undefined1 auStack_b0 [32];
  undefined1 local_90 [4];
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined7 uStack_78;
  undefined1 local_71;
  undefined6 uStack_70;
  byte bStack_6a;
  undefined4 local_68;
  undefined1 auStack_64 [36];
  undefined8 local_38;
  
  local_90[0] = 0x1f;
  local_8c = 0x2d;
  local_68 = 0;
  uStack_70 = 0;
  bStack_6a = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_71 = 0;
  local_88 = 0;
  FUN_00943e60(auStack_64);
  local_90[0] = 0x1f;
  local_8c = 0x2d;
  bStack_6a = 0;
  uVar3 = FUN_00942380(param_1);
  uVar4 = FUN_00942390(param_1);
  FUN_00943860(auStack_b0,uVar3,uVar4);
  while (uVar5 = FUN_00943ae0(auStack_b0,&local_38), (uVar5 & 1) != 0) {
    FUN_008e0a00(local_38);
    uVar2 = FUN_008f94e0();
    uVar3 = FUN_00942380(param_1);
    uVar5 = FUN_008fafc0(uVar3,uVar2,param_2);
    if ((uVar5 & 1) != 0) {
      uVar1 = FUN_008e0a00(local_38);
      local_90[(ulong)bStack_6a + 8] = uVar1;
      bStack_6a = bStack_6a + 1;
    }
  }
  FUN_00942450(param_1);
  uVar3 = FUN_00925570();
  FUN_00948290(uVar3,local_c0,local_90);
  return local_c0[0];
}


