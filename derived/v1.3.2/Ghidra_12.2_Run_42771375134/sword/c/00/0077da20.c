/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077da20; name: FUN_0077da20
 */


ulong FUN_0077da20(short *param_1,int param_2)

{
  short *psVar1;
  short sVar2;
  
  if (param_2 == 0) {
LAB_0077da74:
    if (param_1 == (short *)0x0) {
      return 0;
    }
  }
  else {
    do {
      while( true ) {
        for (; sVar2 = *param_1, sVar2 == 0x10; param_1 = param_1 + (ulong)(ushort)param_1[1] + 2) {
        }
        if (sVar2 == 0) {
          if (param_2 != 0) {
            return 0;
          }
          goto LAB_0077da74;
        }
        if (sVar2 == 10) break;
        param_1 = param_1 + 1;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  sVar2 = *param_1;
  psVar1 = param_1;
  while( true ) {
    while (sVar2 == 0x10) {
      sVar2 = psVar1[(ulong)(ushort)psVar1[1] + 2];
      psVar1 = psVar1 + (ulong)(ushort)psVar1[1] + 2;
    }
    if ((sVar2 == 0) || (sVar2 == 10)) break;
    psVar1 = psVar1 + 1;
    sVar2 = *psVar1;
  }
  return (ulong)((long)psVar1 - (long)param_1) >> 1;
}


