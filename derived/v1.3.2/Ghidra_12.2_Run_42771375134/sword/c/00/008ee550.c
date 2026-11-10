/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ee550; name: FUN_008ee550
 */


undefined4 FUN_008ee550(int param_1,byte param_2,byte param_3)

{
  uint uVar1;
  
  if (param_1 == 2) {
    if (4 < param_3) {
      return 5;
    }
    switch(param_2) {
    case 0:
    case 5:
    case 6:
    case 7:
      return *(undefined4 *)(&DAT_02149cc8 + (ulong)param_3 * 4);
    case 1:
      return *(undefined4 *)(&DAT_02149c8c + (ulong)param_3 * 4);
    case 2:
    case 4:
      return *(undefined4 *)(&DAT_02149cb4 + (ulong)param_3 * 4);
    case 3:
      return *(undefined4 *)(&DAT_02149ca0 + (ulong)param_3 * 4);
    default:
      return 5;
    }
  }
  if (param_1 != 1) {
    if (param_1 != 0) {
      return 5;
    }
    if (param_3 < 5) {
      return *(undefined4 *)(&DAT_02149c28 + (ulong)param_3 * 4);
    }
    return 5;
  }
  if (4 < param_3) {
    return 5;
  }
  uVar1 = (uint)param_2;
  if (uVar1 - 1 < 3) {
    return *(undefined4 *)(&DAT_02149c50 + (ulong)param_3 * 4);
  }
  if (uVar1 == 4) {
    return *(undefined4 *)(&DAT_02149c64 + (ulong)param_3 * 4);
  }
  if (uVar1 == 5) {
    return *(undefined4 *)(&DAT_02149c78 + (ulong)param_3 * 4);
  }
  return *(undefined4 *)(&DAT_02149c3c + (ulong)param_3 * 4);
}


