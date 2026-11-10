/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009475d0; name: FUN_009475d0
 */


void FUN_009475d0(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_88 [80];
  undefined8 local_38;
  undefined1 auStack_28 [8];
  
  FUN_0093b070(auStack_88);
  local_38 = auStack_88;
  FUN_00942450(param_1);
  uVar2 = FUN_00925910();
  FUN_00948da0(uVar2,auStack_28,&local_38);
  FUN_0093b2e0(auStack_88);
  lVar3 = FUN_0093b2f0(auStack_88);
  if (lVar3 != 0) {
    do {
      uVar4 = FUN_008e18d0(lVar3);
      if ((uVar4 & 1) != 0) {
        uVar1 = FUN_008e0a00(lVar3);
        local_38._0_2_ = CONCAT11(7,uVar1);
        FUN_00942450(param_1);
        uVar2 = FUN_00925140();
        FUN_00944c20(uVar2,auStack_28,&local_38);
      }
      lVar3 = FUN_0093b2f0(auStack_88);
    } while (lVar3 != 0);
  }
  return;
}


