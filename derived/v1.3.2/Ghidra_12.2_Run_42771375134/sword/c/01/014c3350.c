/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c3350; name: FUN_014c3350
 */


undefined4 FUN_014c3350(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 10) {
    uVar1 = FUN_008d3750();
    param_2 = FUN_008d3fc0(uVar1,0);
  }
  if (param_2 - 7U < 3) {
    if (param_1 < 4) {
      return *(undefined4 *)
              (&DAT_01d4a460 +
              (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2));
    }
  }
  else if (param_1 < 4) {
    return *(undefined4 *)
            (&DAT_01d4a460 + (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2))
    ;
  }
  return DAT_01d4c2d0;
}


