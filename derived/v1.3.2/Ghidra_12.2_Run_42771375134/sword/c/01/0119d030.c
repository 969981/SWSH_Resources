/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0119d030; name: FUN_0119d030
 */


ulong FUN_0119d030(long param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x278) == 0 || *(long *)(param_1 + 0x278) != param_2) {
    if ((*(long *)(param_1 + 0x288) == 0) || (*(long *)(param_1 + 0x288) != param_2)) {
      if ((*(long *)(param_1 + 0x298) == 0) || (*(long *)(param_1 + 0x298) != param_2)) {
        if ((*(long *)(param_1 + 0x2a8) == 0) || (*(long *)(param_1 + 0x2a8) != param_2)) {
          if ((*(long *)(param_1 + 0x2b8) == 0) || (*(long *)(param_1 + 0x2b8) != param_2)) {
            if ((*(long *)(param_1 + 0x2c8) == 0) || (*(long *)(param_1 + 0x2c8) != param_2)) {
              if ((*(long *)(param_1 + 0x2d8) == 0) || (*(long *)(param_1 + 0x2d8) != param_2)) {
                lVar1 = param_1 + 0x2e8;
                if (*(long *)(param_1 + 0x2e8) != param_2 || *(long *)(param_1 + 0x2e8) == 0) {
                  lVar1 = param_1 + 0x2f8;
                }
                if (lVar1 == param_1 + 0x2f8) {
                  return 0;
                }
              }
              else {
                lVar1 = param_1 + 0x2d8;
              }
            }
            else {
              lVar1 = param_1 + 0x2c8;
            }
          }
          else {
            lVar1 = param_1 + 0x2b8;
          }
        }
        else {
          lVar1 = param_1 + 0x2a8;
        }
      }
      else {
        lVar1 = param_1 + 0x298;
      }
    }
    else {
      lVar1 = param_1 + 0x288;
    }
  }
  else {
    lVar1 = param_1 + 0x278;
  }
  return (ulong)*(byte *)(lVar1 + 8) << 8 | 1;
}


