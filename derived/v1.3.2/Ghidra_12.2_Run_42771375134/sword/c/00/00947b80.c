/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00947b80; name: FUN_00947b80
 */


void FUN_00947b80(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_80 [80];
  undefined1 auStack_30 [8];
  undefined1 *local_28;
  
  FUN_00942390();
  uVar2 = FUN_00931930();
  iVar1 = FUN_00932f00(uVar2,9);
  if (iVar1 == 1) {
    FUN_0093b070(auStack_80);
    uVar3 = FUN_00947c30(param_1,auStack_80);
    if ((uVar3 & 1) != 0) {
      local_28 = auStack_80;
      FUN_00942450(param_1);
      uVar2 = FUN_00925c10();
      FUN_00943cc0(uVar2,auStack_30,&local_28);
      FUN_0093b2e0(auStack_80);
      local_28 = (undefined1 *)FUN_0093b2f0(auStack_80);
      while (local_28 != (undefined1 *)0x0) {
        FUN_00942450(param_1);
        uVar2 = FUN_00925c60();
        FUN_00944960(uVar2,auStack_30,&local_28);
        local_28 = (undefined1 *)FUN_0093b2f0(auStack_80);
      }
    }
  }
  return;
}


