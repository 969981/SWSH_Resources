/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01222d60; name: FUN_01222d60
 */


ulong FUN_01222d60(long param_1,ulong *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar4 = *param_2;
  uVar1 = (uint)((1 << (ulong)((uint)(uVar4 + 6) & 7) & (uint)*(byte *)(param_1 + (uVar4 + 6 >> 3)))
                != 0) |
          ((uint)((1 << (ulong)((uint)(uVar4 + 7) & 7) & (uint)*(byte *)(param_1 + (uVar4 + 7 >> 3))
                  ) != 0) |
          ((uint)((1 << (ulong)((uint)(uVar4 + 8) & 7) & (uint)*(byte *)(param_1 + (uVar4 + 8 >> 3))
                  ) != 0) |
          (uint)((1 << (ulong)((uint)(uVar4 + 9) & 7) & (uint)*(byte *)(param_1 + (uVar4 + 9 >> 3)))
                != 0) << 1) << 1) << 1;
  uVar7 = (uint)((1 << (ulong)((uint)(uVar4 + 5) & 7) & (uint)*(byte *)(param_1 + (uVar4 + 5 >> 3)))
                != 0);
  uVar5 = (uint)((1 << (ulong)((uint)(uVar4 + 4) & 7) & (uint)*(byte *)(param_1 + (uVar4 + 4 >> 3)))
                != 0);
  uVar8 = (uint)((1 << (ulong)((uint)(uVar4 + 3) & 7) & (uint)*(byte *)(param_1 + (uVar4 + 3 >> 3)))
                != 0);
  uVar6 = (uint)((1 << (ulong)((uint)(uVar4 + 2) & 7) & (uint)*(byte *)(param_1 + (uVar4 + 2 >> 3)))
                != 0);
  uVar9 = (uint)((1 << (ulong)((uint)(uVar4 + 1) & 7) & (uint)*(byte *)(param_1 + (uVar4 + 1 >> 3)))
                != 0);
  uVar3 = (uint)((1 << (ulong)((uint)uVar4 & 7) & (uint)*(byte *)(param_1 + (uVar4 >> 3))) != 0);
  uVar2 = uVar3 | (uVar9 | (uVar6 | (uVar8 | (uVar5 | (uVar7 | uVar1 << 1) << 1) << 1) << 1) << 1)
                  << 1;
  return (ulong)(uVar3 == 0 &&
                 (uVar9 == 0 &&
                 (uVar6 == 0 && (uVar8 == 0 && (uVar5 == 0 && (uVar7 == 0 && uVar1 == 0))))) ||
                (uVar2 - 1 & 0xffff) < 0x382) | (ulong)uVar2 << 0x10;
}


