/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0014cd00; name: FUN_0014cd00
 */


long FUN_0014cd00(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = FUN_0014a830();
  uVar2 = FUN_0014f6b0(param_1);
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  lVar3 = FUN_0014a850(param_1);
  return lVar3 + uVar2 + 0x400;
}


