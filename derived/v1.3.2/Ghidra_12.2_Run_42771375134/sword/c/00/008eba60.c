/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008eba60; name: FUN_008eba60
 */


ulong FUN_008eba60(ulong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  uVar1 = param_2 & 0x1f;
  uVar2 = (param_2 & 0xffff) >> 5 & 0x1f;
  uVar3 = (param_2 & 0xffff) >> 10 & 0x1f;
  uVar5 = FUN_00889230(param_1,uVar1,DAT_02a4d174);
  uVar5 = uVar5 & 0xffffffff;
  if ((uVar2 != 0x12) && (uVar2 != uVar1)) {
    uVar4 = FUN_00889230(param_1 & 0xffffffff,uVar2,DAT_02a4d174);
    uVar5 = FUN_008892d0(uVar5,uVar4);
    uVar5 = uVar5 & 0xffffffff;
  }
  if (((uVar3 == uVar2) || (uVar3 == 0x12)) || (uVar3 == uVar1)) {
    return uVar5;
  }
  uVar4 = FUN_00889230(param_1 & 0xffffffff,uVar3,DAT_02a4d174);
  uVar5 = FUN_008892d0(uVar5,uVar4);
  return uVar5;
}


