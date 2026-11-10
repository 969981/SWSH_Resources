/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c5890; name: FUN_004c5890
 */


void FUN_004c5890(int param_1,undefined4 param_2,undefined4 param_3,long param_4)

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
    if (param_4 == 0) {
      plVar6 = plVar4;
      do {
        lVar2 = *(long *)(*plVar6 + 0x70);
        iVar5 = 0;
        if (lVar2 != 0) {
          iVar5 = *(int *)(lVar2 + 0x10);
        }
        if (iVar5 == param_1) {
          FUN_004d2340(*plVar6,param_2,param_3);
          plVar4 = *(long **)puVar1;
          uVar3 = (ulong)*(uint *)(puVar1 + 8);
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar4 + uVar3);
    }
    else {
      plVar6 = plVar4;
      do {
        lVar2 = *plVar6;
        iVar5 = 0;
        if (*(long *)(lVar2 + 0x70) != 0) {
          iVar5 = *(int *)(*(long *)(lVar2 + 0x70) + 0x10);
        }
        if ((iVar5 == param_1) && (*(long *)(lVar2 + 0x78) == *(long *)(param_4 + 0x48))) {
          FUN_004d2340(lVar2,param_2,param_3);
          plVar4 = *(long **)puVar1;
          uVar3 = (ulong)*(uint *)(puVar1 + 8);
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar4 + uVar3);
    }
  }
  return;
}


