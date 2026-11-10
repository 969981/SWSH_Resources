/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01461620; name: FUN_01461620
 */


undefined8 FUN_01461620(long param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  
  uVar1 = FUN_01020290(param_2,0x1000000000000);
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_01020290(param_2,0x2000000000000);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    pcVar2 = *(code **)(param_1 + 0x660);
    if (pcVar2 == (code *)0x0) {
      return 0;
    }
    param_1 = param_1 + 0x680;
  }
  else {
    pcVar2 = *(code **)(param_1 + 0x5e0);
    if (pcVar2 == (code *)0x0) {
      return 0;
    }
    param_1 = param_1 + 0x600;
  }
  (*pcVar2)(param_1);
  return 1;
}


