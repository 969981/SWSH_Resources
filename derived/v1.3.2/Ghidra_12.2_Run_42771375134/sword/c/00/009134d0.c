/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009134d0; name: FUN_009134d0
 */


byte FUN_009134d0(byte *param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = (uint)*param_1;
  if (*param_1 == 0) {
    uVar1 = (uint)param_1[0x3d];
    if (param_1[0x3d] == 0) {
      uVar1 = (uint)param_1[0x7a];
      if (param_1[0x7a] == 0) {
        uVar1 = (uint)param_1[0xb7];
        if (param_1[0xb7] == 0) {
          return 0x1f;
        }
        lVar2 = 3;
      }
      else {
        lVar2 = 2;
      }
    }
    else {
      lVar2 = 1;
    }
  }
  else {
    lVar2 = 0;
  }
  return param_1[(ulong)(uVar1 - 1) + lVar2 * 0x3d + 0x1f];
}


