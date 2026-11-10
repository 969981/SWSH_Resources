/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a4650; name: FUN_009a4650
 */


void FUN_009a4650(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_88 [80];
  undefined1 auStack_38 [8];
  undefined1 *local_28;
  
  FUN_0093b070(auStack_88);
  local_28 = auStack_88;
  FUN_00942450(param_1);
  uVar2 = FUN_00925910();
  FUN_00948da0(uVar2,auStack_38,&local_28);
  FUN_0093b2e0(auStack_88);
  lVar3 = FUN_0093b2f0(auStack_88);
  if (lVar3 != 0) {
    do {
      uVar2 = FUN_009423b0(param_1);
      uVar1 = FUN_008e0a00(lVar3);
      FUN_009387e0(uVar2,uVar1);
      lVar3 = FUN_0093b2f0(auStack_88);
    } while (lVar3 != 0);
  }
  return;
}


