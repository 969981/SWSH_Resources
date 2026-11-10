/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00634a40; name: FUN_00634a40
 */


void FUN_00634a40(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  lVar1 = param_1 + 0x18;
  FUN_006966f0(auStack_50,lVar1,1);
  FUN_006966f0(auStack_40,lVar1,1);
  if (*(long *)(param_1 + 0xa0) == 0) {
    FUN_00696730(auStack_40);
  }
  else {
    plVar6 = *(long **)(*(long *)(param_1 + 0x90) + 0x20);
    FUN_00696730(auStack_40);
    if (plVar6 != (long *)0x0) {
      do {
        (**(code **)(*plVar6 + 0x48))(plVar6);
        FUN_006966f0(auStack_40,lVar1,1);
        uVar3 = (**(code **)(*plVar6 + 0x38))(plVar6);
        uVar4 = *(ulong *)(param_1 + 0x158);
        uVar2 = 0;
        if (uVar4 != 0) {
          uVar2 = uVar3 / uVar4;
        }
        lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0xd0) + uVar2 * 8) + 0x38) +
                          (uVar3 - uVar2 * uVar4) * 0x28 + 8);
        if (lVar5 == 0) {
          FUN_00696730(auStack_40);
          break;
        }
        plVar6 = *(long **)(lVar5 + 0x20);
        FUN_00696730(auStack_40);
      } while (plVar6 != (long *)0x0);
    }
  }
  FUN_00696730(auStack_50);
  return;
}


