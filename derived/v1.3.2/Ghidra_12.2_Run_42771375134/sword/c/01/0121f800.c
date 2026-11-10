/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121f800; name: FUN_0121f800
 */


ulong FUN_0121f800(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  return ((ulong)(((uint)((1 << (ulong)((uint)(uVar1 + 1) & 7) &
                          (uint)*(byte *)(param_1 + (uVar1 + 1 >> 3))) != 0) |
                  ((uint)((1 << (ulong)((uint)(uVar1 + 2) & 7) &
                          (uint)*(byte *)(param_1 + (uVar1 + 2 >> 3))) != 0) |
                  ((uint)((1 << (ulong)((uint)(uVar1 + 3) & 7) &
                          (uint)*(byte *)(param_1 + (uVar1 + 3 >> 3))) != 0) |
                  ((uint)((1 << (ulong)((uint)(uVar1 + 4) & 7) &
                          (uint)*(byte *)(param_1 + (uVar1 + 4 >> 3))) != 0) |
                  ((uint)((1 << (ulong)((uint)(uVar1 + 5) & 7) &
                          (uint)*(byte *)(param_1 + (uVar1 + 5 >> 3))) != 0) |
                  ((uint)((1 << (ulong)((uint)(uVar1 + 6) & 7) &
                          (uint)*(byte *)(param_1 + (uVar1 + 6 >> 3))) != 0) |
                  ((uint)((1 << (ulong)((uint)(uVar1 + 7) & 7) &
                          (uint)*(byte *)(param_1 + (uVar1 + 7 >> 3))) != 0) |
                  ((uint)((1 << (ulong)((uint)(uVar1 + 8) & 7) &
                          (uint)*(byte *)(param_1 + (uVar1 + 8 >> 3))) != 0) |
                  (uint)((1 << (ulong)((uint)(uVar1 + 9) & 7) &
                         (uint)*(byte *)(param_1 + (uVar1 + 9 >> 3))) != 0) << 1) << 1) << 1) << 1)
                  << 1) << 1) << 1) << 1) << 1) |
         (ulong)((1 << (ulong)((uint)uVar1 & 7) & (uint)*(byte *)(param_1 + (uVar1 >> 3))) != 0)) <<
         0x10 | 1;
}


