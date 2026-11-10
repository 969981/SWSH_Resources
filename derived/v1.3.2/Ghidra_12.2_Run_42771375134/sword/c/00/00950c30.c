/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00950c30; name: FUN_00950c30
 */


undefined8 FUN_00950c30(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  ulong uVar2;
  
  uVar2 = FUN_009426f0();
  if (((uVar2 & 1) != 0) && (uVar2 = FUN_00942710(param_1), (uVar2 & 1) != 0)) {
    return 0;
  }
  FUN_009424e0(param_1,param_2);
  uVar2 = FUN_0094f010();
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  FUN_009423f0(param_1);
  FUN_00942fe0();
  cVar1 = FUN_009432b0();
  if (cVar1 != '\0') {
    FUN_009423f0(param_1);
    FUN_00942fe0();
    cVar1 = FUN_009432b0();
    if (cVar1 != '\x01') {
      return 0;
    }
  }
  return 1;
}


