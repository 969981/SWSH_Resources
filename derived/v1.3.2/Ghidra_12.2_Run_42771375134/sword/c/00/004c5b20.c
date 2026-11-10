/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c5b20; name: FUN_004c5b20
 */


void FUN_004c5b20(int param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_027134f8;
  uVar3 = (ulong)*(uint *)(PTR_DAT_027134f8 + 8);
  if (*(uint *)(PTR_DAT_027134f8 + 8) != 0) {
    plVar4 = *(long **)PTR_DAT_027134f8;
    plVar6 = plVar4;
    do {
      lVar2 = *plVar6;
      iVar5 = 0;
      if (*(long *)(lVar2 + 0x70) != 0) {
        iVar5 = *(int *)(*(long *)(lVar2 + 0x70) + 0x10);
      }
      if ((iVar5 == param_1) && (*(int *)(lVar2 + 0x348) != 2)) {
        FUN_004d46a0(lVar2,1 << (ulong)(param_2 & 0x1f));
        plVar4 = *(long **)puVar1;
        uVar3 = (ulong)*(uint *)(puVar1 + 8);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar4 + uVar3);
  }
  return;
}


