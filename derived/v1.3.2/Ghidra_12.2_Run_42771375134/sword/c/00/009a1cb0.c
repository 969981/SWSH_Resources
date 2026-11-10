/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a1cb0; name: FUN_009a1cb0
 */


undefined8 FUN_009a1cb0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_90 [16];
  undefined1 local_80 [4];
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined7 uStack_68;
  undefined1 local_61;
  undefined6 uStack_60;
  undefined1 uStack_5a;
  uint local_58;
  undefined1 auStack_54 [36];
  
  iVar2 = FUN_008e19f0(param_2);
  if (iVar2 == 3) {
    uVar3 = FUN_009423e0(param_1);
    uVar4 = FUN_0092ad80(uVar3,param_2,param_3);
    if (((uVar4 & 1) == 0) && (uVar4 = FUN_00880a00(param_3,10), (uVar4 & 1) != 0)) {
      return 1;
    }
    uVar3 = FUN_008ec900(0x14);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    local_80[0] = 0x1f;
    local_7c = 0x2d;
    local_58 = 0;
    uStack_60 = 0;
    uStack_5a = 0;
    local_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_61 = 0;
    FUN_00943e60(auStack_54);
    local_80[0] = FUN_008e0a00(param_2);
    local_7c = 3;
    uVar1 = FUN_008e0a00(param_2);
    local_78 = CONCAT71(local_78._1_7_,uVar1);
    uStack_5a = 1;
    local_58 = local_58 & 0xffffff;
    FUN_00942450(param_1);
    uVar3 = FUN_00925570();
    FUN_00948290(uVar3,auStack_90,local_80);
  }
  return 0;
}


