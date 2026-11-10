/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ba250; name: FUN_014ba250
 */


void FUN_014ba250(undefined8 *param_1,undefined8 param_2,int param_3,int param_4)

{
  if (param_4 == 10) {
    param_4 = FUN_014bf840();
  }
  FUN_0077d660(*param_1);
  FUN_0077d5c0(*param_1,param_3 + 0x11);
  FUN_0077d560(*param_1,param_2);
  FUN_0077d5c0(*param_1,param_4 + 0x11);
  return;
}


