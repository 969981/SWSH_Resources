/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a1bf0; name: FUN_009a1bf0
 */


void FUN_009a1bf0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [16];
  undefined1 local_70 [4];
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined7 uStack_58;
  undefined1 local_51;
  undefined6 uStack_50;
  undefined1 uStack_4a;
  uint local_48;
  undefined1 auStack_44 [36];
  
  iVar2 = FUN_008e19f0(param_2);
  if ((iVar2 == 2) && (uVar3 = FUN_008e3b40(param_2), (uVar3 & 1) != 0)) {
    local_70[0] = 0x1f;
    local_6c = 0x2d;
    local_48 = 0;
    uStack_50 = 0;
    uStack_4a = 0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_51 = 0;
    FUN_00943e60(auStack_44);
    local_70[0] = FUN_008e0a00(param_2);
    local_6c = 2;
    uVar1 = FUN_008e0a00(param_2);
    local_68 = CONCAT71(local_68._1_7_,uVar1);
    uStack_4a = 1;
    local_48 = local_48 & 0xffffff;
    FUN_00942450(param_1);
    uVar4 = FUN_00925570();
    FUN_00948290(uVar4,auStack_80,local_70);
  }
  return;
}


