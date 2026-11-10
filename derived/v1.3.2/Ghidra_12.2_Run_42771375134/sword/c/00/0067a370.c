/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0067a370; name: FUN_0067a370
 */


undefined8 FUN_0067a370(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005cae00();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN_0067d060();
  uVar2 = FUN_0067d350(uVar2,param_1);
  return uVar2;
}


