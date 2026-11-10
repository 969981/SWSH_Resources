/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd3130; name: FUN_00bd3130
 */


void FUN_00bd3130(long param_1,int param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  
  if (param_2 == 1) {
    lVar1 = 0x2dc2;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    lVar1 = 0x2d68;
  }
  FUN_0167ba30(*(undefined8 *)(param_1 + 0x58),
               param_1 + (ulong)*(byte *)(param_1 + lVar1 + (ulong)param_4) * 0x78 + 0xd8);
  return;
}


