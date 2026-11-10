/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a41a0; name: FUN_009a41a0
 */


void FUN_009a41a0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_80 [80];
  undefined1 auStack_30 [8];
  undefined1 *local_28;
  
  FUN_0093b070(auStack_80);
  local_28 = auStack_80;
  FUN_00942450(param_1);
  uVar1 = FUN_00925910();
  FUN_00948da0(uVar1,auStack_30,&local_28);
  FUN_0093b2e0(auStack_80);
  lVar2 = FUN_0093b2f0(auStack_80);
  if (lVar2 != 0) {
    do {
      FUN_009a4930(param_1,lVar2);
      lVar2 = FUN_0093b2f0(auStack_80);
    } while (lVar2 != 0);
  }
  return;
}


