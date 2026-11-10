/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c5980; name: FUN_004c5980
 */


void FUN_004c5980(undefined8 param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_027134f8;
  uVar2 = (ulong)*(uint *)(PTR_DAT_027134f8 + 8);
  if (*(uint *)(PTR_DAT_027134f8 + 8) != 0) {
    plVar3 = *(long **)PTR_DAT_027134f8;
    plVar6 = plVar3;
    do {
      lVar5 = *(long *)(*plVar6 + 0x70);
      iVar4 = 0;
      if (lVar5 != 0) {
        iVar4 = *(int *)(lVar5 + 0x10);
      }
      if ((iVar4 == param_2) && (lVar5 = *(long *)(*plVar6 + 0x20), lVar5 != 0)) {
        FUN_0044f860(param_1,lVar5,param_3);
        plVar3 = *(long **)puVar1;
        uVar2 = (ulong)*(uint *)(puVar1 + 8);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar3 + uVar2);
  }
  return;
}


