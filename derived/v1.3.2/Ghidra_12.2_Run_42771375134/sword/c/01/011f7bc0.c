/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f7bc0; name: FUN_011f7bc0
 */


undefined1  [16] FUN_011f7bc0(long *param_1)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  puVar1 = (uint *)(**(code **)(*param_1 + 0x10))();
  if (puVar1 == (uint *)0x0) {
    uVar2 = 0;
    uVar5 = 0;
    uVar3 = 0;
    uVar6 = 0;
    uVar4 = 0;
  }
  else {
    uVar5 = (ulong)*(byte *)((long)puVar1 + 6) << 0x30;
    uVar3 = (ulong)*puVar1;
    uVar2 = (ulong)(ushort)puVar1[2];
    uVar4 = (ulong)*(byte *)((long)puVar1 + 7) << 0x38;
    uVar6 = (ulong)(ushort)puVar1[1] << 0x20;
  }
  auVar7._0_8_ = uVar3 | uVar5 | uVar6 | uVar4;
  auVar7._8_8_ = uVar2;
  return auVar7;
}


