/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006958c0; name: FUN_006958c0
 */


uint FUN_006958c0(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [16];
  
  uVar2 = FUN_005cae00();
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    FUN_006966f0(auStack_30,PTR_DAT_02714fe0,1);
    uVar3 = FUN_00695a10();
    uVar1 = FUN_00695cb0(uVar3,param_1);
    FUN_00696730(auStack_30);
  }
  return uVar1 & 1;
}


