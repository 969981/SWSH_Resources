/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042edb0; name: FUN_0042edb0
 */


void FUN_0042edb0(int param_1)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  long lVar7;
  
  uVar4 = 0xffffffff;
  do {
    uVar4 = uVar4 + 1;
  } while (1 << (ulong)(uVar4 & 0x1f) < param_1);
  uVar5 = *(uint *)(PTR_DAT_02712d68 + (ulong)uVar4 * 0x10 + 8);
  if (0 < (int)uVar5) {
    plVar2 = (long *)(PTR_DAT_02712d68 + (ulong)uVar4 * 0x10);
    lVar7 = (ulong)uVar5 + 1;
    puVar1 = PTR_DAT_02712d70 + 0x10;
    do {
      uVar5 = uVar5 - 1;
      pcVar6 = *(code **)(*plVar2 + (ulong)uVar5 * 0x10);
      if ((DAT_02737d80 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_02737d80);
        if (iVar3 != 0) {
          DAT_02737d78 = puVar1;
          __cxa_guard_release(&DAT_02737d80);
        }
      }
      (*pcVar6)(&DAT_02737d78,param_1,*(undefined8 *)(*plVar2 + (ulong)uVar5 * 0x10 + 8));
      lVar7 = lVar7 + -1;
    } while (1 < lVar7);
  }
  return;
}


