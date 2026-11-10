/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a1e80; name: FUN_009a1e80
 */


bool FUN_009a1e80(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_90 [16];
  undefined1 local_80 [4];
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined7 uStack_68;
  undefined1 local_61;
  undefined6 uStack_60;
  undefined1 uStack_5a;
  undefined4 local_58;
  undefined1 auStack_54 [36];
  
  if (param_3 == '\x03') {
    uVar4 = FUN_009423b0(param_1);
    uVar1 = FUN_008e0a00(param_2);
    FUN_00936040(uVar4,0xd3,uVar1);
    bVar2 = true;
  }
  else {
    uVar5 = FUN_008e1810(param_2,6);
    if ((uVar5 & 1) != 0) {
      uVar5 = FUN_008e3bf0(param_2);
      if ((uVar5 & 1) == 0) {
        uVar4 = FUN_009423b0(param_1);
        FUN_00937320(uVar4,param_2);
        iVar3 = FUN_008ec900(0x21);
        return iVar3 != 0;
      }
      local_80[0] = 0x1f;
      local_7c = 0x2d;
      local_58 = 0;
      uStack_60 = 0;
      uStack_5a = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_61 = 0;
      local_78 = 0;
      FUN_00943e60(auStack_54);
      local_80[0] = FUN_008e0a00(param_2);
      local_7c = 6;
      uVar1 = FUN_008e0a00(param_2);
      local_78 = CONCAT71(local_78._1_7_,uVar1);
      uStack_5a = 1;
      local_58 = CONCAT13(1,(undefined3)local_58);
      FUN_00943f20(auStack_54,2,0x1dc);
      uVar1 = FUN_008e0a00(param_2);
      FUN_00943f60(auStack_54,uVar1);
      FUN_00942450(param_1);
      uVar4 = FUN_00925570();
      FUN_00948290(uVar4,auStack_90,local_80);
    }
    bVar2 = false;
  }
  return bVar2;
}


