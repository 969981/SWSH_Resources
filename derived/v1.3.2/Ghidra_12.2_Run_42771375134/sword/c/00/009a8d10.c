/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a8d10; name: FUN_009a8d10
 */


void FUN_009a8d10(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  short sVar3;
  undefined8 uVar4;
  undefined1 local_90 [4];
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined7 uStack_78;
  undefined1 local_71;
  undefined6 uStack_70;
  undefined1 uStack_6a;
  undefined4 local_68;
  undefined1 auStack_64 [36];
  undefined1 auStack_40 [16];
  undefined8 local_28;
  
  local_28 = FUN_008e1aa0(param_2,0x17);
  uVar2 = FUN_008ed2f0(&local_28);
  sVar3 = FUN_008e24b0(param_2,uVar2);
  if (sVar3 == 0) {
    uVar1 = FUN_008e0a00(param_2);
    local_90[0] = 0x1f;
    local_8c = 0x2d;
    local_68 = 0;
    uStack_70 = 0;
    uStack_6a = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_71 = 0;
    local_88 = 0;
    FUN_00943e60(auStack_64);
    local_88 = CONCAT71(local_88._1_7_,uVar1);
    uStack_6a = 1;
    local_8c = 0x17;
    local_90[0] = uVar1;
    FUN_00942450(param_1);
    uVar4 = FUN_00925570();
    FUN_00948290(uVar4,auStack_40,local_90);
  }
  return;
}


