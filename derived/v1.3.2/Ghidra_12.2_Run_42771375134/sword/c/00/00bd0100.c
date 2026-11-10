/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd0100; name: FUN_00bd0100
 */


void FUN_00bd0100(long param_1,byte *param_2,uint param_3)

{
  ulong uVar1;
  
  if (param_3 != 0) {
    uVar1 = (ulong)param_3;
    do {
      if ((ulong)*param_2 < 0x60) {
        FUN_0167b9b0(*(undefined8 *)(param_1 + 0x58),param_1 + (ulong)*param_2 * 0x10 + 0x68,0);
      }
      param_2 = param_2 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}


