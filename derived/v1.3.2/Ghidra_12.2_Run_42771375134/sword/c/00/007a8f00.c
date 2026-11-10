/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a8f00; name: FUN_007a8f00
 */


void FUN_007a8f00(undefined8 param_1,char param_2)

{
  if (param_2 == '\0') {
    FUN_0189d340(*(undefined8 *)PTR_DAT_02716730);
    FUN_0189d2a0();
    FUN_018900a0();
    return;
  }
  if (param_2 == '\x03') {
    FUN_01876520();
    FUN_01876760();
    FUN_018764c0();
    FUN_01875d10();
    return;
  }
  if (param_2 == '\x02') {
    FUN_018da5e0();
    FUN_018d84c0();
    return;
  }
  return;
}


