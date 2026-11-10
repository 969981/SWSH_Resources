/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014aece0; name: FUN_014aece0
 */


void FUN_014aece0(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  
  iVar1 = FUN_00884820();
  if (iVar1 != 0) {
    uVar7 = 0;
    do {
      uVar5 = (**(code **)(*param_1 + 0x50))(param_1,uVar7);
      uVar2 = FUN_008783b0();
      uVar3 = FUN_008783c0(uVar5);
      uVar6 = FUN_014ae9f0(uVar2,uVar3);
      if ((uVar6 & 0xff) != 0) {
        FUN_0087df30(uVar5,uVar6 >> 0x10 & 0xffff,0);
      }
      uVar6 = FUN_008797f0(uVar5);
      if ((uVar6 & 1) != 0) {
        FUN_008797a0(uVar5,0);
      }
      uVar7 = uVar7 + 1 & 0xff;
      uVar4 = FUN_00884820(param_1);
    } while (uVar7 < uVar4);
  }
  return;
}


