/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077dad0; name: FUN_0077dad0
 */


short * FUN_0077dad0(short *param_1,int param_2)

{
  short sVar1;
  
  do {
    if (param_2 == 0) {
      return param_1;
    }
    while( true ) {
      for (; sVar1 = *param_1, sVar1 == 0x10; param_1 = param_1 + (ulong)(ushort)param_1[1] + 2) {
      }
      if (sVar1 == 0) {
        if (param_2 == 0) {
          return param_1;
        }
        return (short *)0x0;
      }
      if (sVar1 == 10) break;
      param_1 = param_1 + 1;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while( true );
}


