/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00634510; name: FUN_00634510
 */


void FUN_00634510(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  lVar1 = param_1 + 0x18;
  FUN_006966f0(auStack_60,lVar1,1);
  *(undefined1 *)(param_1 + 0x170) = 1;
  FUN_006966f0(auStack_50,lVar1,1);
  if (*(long *)(param_1 + 0xa0) == 0) {
    FUN_00696730(auStack_50);
  }
  else {
    plVar6 = *(long **)(*(long *)(param_1 + 0x90) + 0x20);
    FUN_00696730(auStack_50);
    if (plVar6 != (long *)0x0) {
      do {
        FUN_006966f0(auStack_50,lVar1,1);
        uVar3 = (**(code **)(*plVar6 + 0x38))(plVar6);
        uVar4 = *(ulong *)(param_1 + 0x158);
        uVar2 = 0;
        if (uVar4 != 0) {
          uVar2 = uVar3 / uVar4;
        }
        lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0xd0) + uVar2 * 8) + 0x38) +
                          (uVar3 - uVar2 * uVar4) * 0x28 + 8);
        if (lVar5 == 0) {
          plVar7 = (long *)0x0;
        }
        else {
          plVar7 = *(long **)(lVar5 + 0x20);
        }
        FUN_00696730(auStack_50);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        plVar6 = plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  *(undefined1 *)(param_1 + 0x170) = 0;
  FUN_00696730(auStack_60);
  return;
}


