/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a46f0; name: FUN_009a46f0
 */


void FUN_009a46f0(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  
  FUN_009423f0();
  uVar1 = FUN_00943000();
  uVar3 = 0;
  do {
    uVar2 = FUN_00942250(uVar1,uVar3);
    if ((uVar2 & 1) != 0) {
      uVar1 = FUN_009423b0(param_1);
      FUN_009378a0(uVar1,uVar3);
    }
    uVar3 = uVar3 + 1;
    FUN_009423f0(param_1);
    uVar1 = FUN_00943000();
  } while ((uVar3 & 0xff) < 0x1e);
  FUN_00942200();
  return;
}


