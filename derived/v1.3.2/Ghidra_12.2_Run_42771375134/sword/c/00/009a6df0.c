/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a6df0; name: FUN_009a6df0
 */


undefined8 FUN_009a6df0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  bool bVar8;
  byte local_98;
  undefined1 uStack_97;
  byte bStack_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [8];
  
  bVar1 = FUN_008e0a00(param_2);
  bVar2 = FUN_008e2160(param_2);
  if (bVar2 != 0) {
    if (param_3 == 0) {
      uVar7 = 0;
      bVar8 = false;
      do {
        bVar4 = FUN_008e2460(param_2,uVar7);
        if (bVar4 != 0) {
          local_98 = 0x1f;
          uStack_97 = 0;
          bStack_96 = 0;
          uStack_95 = 0;
          uStack_94 = 0;
          FUN_00943e60(auStack_90);
          bVar8 = true;
          uStack_97 = (undefined1)uVar7;
          uStack_94 = 1;
          local_98 = bVar1;
          bStack_96 = bVar4;
          FUN_00942450(param_1);
          uVar5 = FUN_00925750();
          FUN_0094e3a0(uVar5,auStack_68,&local_98);
        }
        uVar7 = uVar7 + 1;
      } while (bVar2 != uVar7);
    }
    else {
      uVar7 = 0;
      bVar8 = false;
      do {
        bVar3 = FUN_008e2460(param_2,uVar7);
        bVar4 = param_3;
        if (bVar3 <= param_3) {
          bVar4 = bVar3;
        }
        if (bVar4 != 0) {
          local_98 = 0x1f;
          uStack_97 = 0;
          bStack_96 = 0;
          uStack_95 = 0;
          uStack_94 = 0;
          FUN_00943e60(auStack_90);
          bVar8 = true;
          uStack_97 = (undefined1)uVar7;
          uStack_94 = 1;
          local_98 = bVar1;
          bStack_96 = bVar4;
          FUN_00942450(param_1);
          uVar5 = FUN_00925750();
          FUN_0094e3a0(uVar5,auStack_68,&local_98);
        }
        uVar7 = uVar7 + 1;
      } while (bVar2 != uVar7);
    }
    if (bVar8) {
      local_98 = 0x1f;
      uStack_97 = 0;
      uVar6 = (ulong)&local_98 | 4;
      FUN_00943e60(uVar6);
      local_98 = bVar1;
      FUN_00943f20(uVar6,2,0x214);
      FUN_00943f60(uVar6,bVar1);
      FUN_00942450(param_1);
      uVar5 = FUN_009256b0();
      FUN_0094c9b0(uVar5,auStack_68,&local_98);
      return 1;
    }
  }
  return 0;
}


