/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a6c20; name: FUN_009a6c20
 */


undefined8
FUN_009a6c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_90 [4];
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined7 uStack_78;
  undefined1 local_71;
  undefined6 uStack_70;
  undefined1 uStack_6a;
  uint local_68;
  undefined1 auStack_64 [36];
  undefined1 auStack_40 [16];
  
  uVar2 = FUN_008e1600(param_2);
  if (((uVar2 & 1) == 0) && (uVar2 = FUN_008e1810(param_2,param_5), (uVar2 & 1) != 0)) {
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
    uVar4 = 1;
    uStack_6a = 1;
    local_88 = CONCAT71(local_88._1_7_,uVar1);
    local_68 = local_68 & 0xffffff;
    local_90[0] = uVar1;
    local_8c = param_5;
    FUN_00942450(param_1);
    uVar3 = FUN_00925570();
    FUN_00948290(uVar3,auStack_40,local_90);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


