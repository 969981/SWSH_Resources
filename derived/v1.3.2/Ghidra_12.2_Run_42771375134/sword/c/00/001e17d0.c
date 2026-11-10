/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e17d0; name: FUN_001e17d0
 */


void FUN_001e17d0(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *local_50;
  char local_44 [4];
  
  lVar6 = *(long *)(param_1 + 8);
  if ((lVar6 != 0) && (uVar2 = *(uint *)(lVar6 + 0x50), uVar2 != 0)) {
    lVar6 = *(long *)(lVar6 + 0x48);
    uVar5 = 0;
    do {
      uVar1 = (int)uVar5 + 1;
      if (*(char *)(lVar6 + uVar5 * 0x10) == '\0') {
        plVar7 = *(long **)(lVar6 + uVar5 * 0x10 + 8);
        if (plVar7 == (long *)0x0) {
          return;
        }
        (**(code **)(*plVar7 + 0x48))(plVar7);
        lVar3 = FUN_001e0790(plVar7);
        if (lVar3 != 0) {
          local_50 = plVar7;
          puVar4 = (undefined8 *)FUN_001e0a50(lVar3 + 0x25b0,&local_50,local_44);
          if (local_44[0] == '\0') {
            *puVar4 = local_50;
          }
          FUN_001ce320(lVar3 + 0x10,plVar7 + 4);
        }
      }
      uVar5 = (ulong)uVar1;
    } while (uVar1 < uVar2);
  }
  return;
}


