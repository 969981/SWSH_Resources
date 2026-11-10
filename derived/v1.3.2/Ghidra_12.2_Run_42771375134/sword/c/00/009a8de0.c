/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a8de0; name: FUN_009a8de0
 */


void FUN_009a8de0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte local_88;
  undefined4 local_87;
  undefined2 local_83;
  undefined4 local_80;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined2 uStack_7a;
  undefined5 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 auStack_64 [36];
  undefined1 local_38 [8];
  
  uVar4 = FUN_008e1600(param_2);
  if ((uVar4 & 1) == 0) {
    uVar1 = FUN_008e0a00(param_2);
    uVar2 = FUN_008e1aa0(param_2,0x2b);
    iVar3 = FUN_008e3090(param_2,2);
    if (0 < iVar3) {
      local_88 = 0x1f;
      local_83 = 0;
      local_87 = 0;
      uStack_78 = 0;
      local_80 = 0;
      uStack_7c = 0;
      uStack_7b = 0;
      uStack_7a = 0;
      local_68 = 0;
      local_70 = 0;
      FUN_00943e60(auStack_64);
      local_88 = (byte)(uVar2 >> 3) & 0x1f;
      local_87._0_2_ = CONCAT11(uVar1,1);
      local_80 = 2;
      uStack_7c = 0xff;
      uStack_7b = 10;
      local_68 = CONCAT11(local_68._1_1_,1);
      FUN_00942450(param_1);
      uVar5 = FUN_00925700();
      FUN_0094f100(uVar5,local_38,&local_88);
    }
    iVar3 = FUN_008e3090(param_2,4);
    if (0 < iVar3) {
      local_88 = 0x1f;
      local_83 = 0;
      local_87 = 0;
      uStack_78 = 0;
      local_80 = 0;
      uStack_7c = 0;
      uStack_7b = 0;
      uStack_7a = 0;
      local_68 = 0;
      local_70 = 0;
      FUN_00943e60(auStack_64);
      local_88 = (byte)(uVar2 >> 3) & 0x1f;
      uStack_7c = 0xff;
      uStack_7b = 10;
      local_87._0_2_ = CONCAT11(uVar1,1);
      local_80 = 4;
      local_68 = CONCAT11(local_68._1_1_,local_38[0]) ^ 1;
      FUN_00942450(param_1);
      uVar5 = FUN_00925700();
      FUN_0094f100(uVar5,local_38,&local_88);
    }
  }
  return;
}


