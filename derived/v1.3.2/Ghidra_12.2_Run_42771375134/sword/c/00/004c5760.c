/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c5760; name: FUN_004c5760
 */


void FUN_004c5760(int param_1)

{
  undefined *puVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_027134f8;
  uVar3 = *(uint *)(PTR_DAT_027134f8 + 8);
  if (uVar3 != 0) {
    plVar4 = *(long **)PTR_DAT_027134f8;
    plVar7 = plVar4;
    do {
      lVar6 = *(long *)(*plVar7 + 0x70);
      iVar5 = 0;
      if (lVar6 != 0) {
        iVar5 = *(int *)(lVar6 + 0x10);
      }
      if ((iVar5 == param_1) && (plVar2 = *(long **)(*plVar7 + 0x20), plVar2 != (long *)0x0)) {
        (**(code **)(*plVar2 + 0x18))(plVar2,0,5);
        plVar4 = *(long **)puVar1;
        uVar3 = *(uint *)(puVar1 + 8);
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar4 + uVar3);
  }
  return;
}


