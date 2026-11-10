/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048c640; name: FUN_0048c640
 */


void FUN_0048c640(long param_1,uint param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = (uint *)(param_1 + 0x26b);
  if ((*puVar1 >> 0xc & 1) == 0) {
    *(undefined1 *)(param_1 + 0x26f) = *(undefined1 *)(param_1 + 0x26f);
    *puVar1 = *puVar1 | 0x1000;
    if ((param_2 | 2) == 2) {
      if (*(long *)(param_1 + 0x1e0) != 0) {
        FUN_004be250(*(undefined8 *)PTR_DAT_02712b18,*(long *)(param_1 + 0x1e0),param_1 + 0x10);
        *(undefined8 *)(param_1 + 0x1e0) = 0;
      }
      if (*(long *)(param_1 + 0x1e8) != 0) {
        FUN_004be250(*(undefined8 *)PTR_DAT_02712b18,*(long *)(param_1 + 0x1e8),param_1 + 0x10);
        *(undefined8 *)(param_1 + 0x1e8) = 0;
      }
      lVar3 = *(long *)(param_1 + 0x118);
      if (lVar3 != 0) {
        if ((*(byte *)(lVar3 + 0x28) >> 1 & 1) != 0) {
          puVar2 = (undefined4 *)FUN_00488860(*(undefined8 *)(param_1 + 0x160));
          plVar4 = *(long **)(puVar2 + 2);
          if (plVar4 != (long *)0x0) {
            if (*(ushort *)(plVar4 + 2) - 1 == 0) {
              if (*plVar4 != 0) {
                *(undefined4 *)(plVar4 + 1) = 0;
                FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
                *plVar4 = 0;
                *(undefined4 *)((long)plVar4 + 0xc) = 0;
              }
              FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,plVar4);
            }
            else {
              *(short *)(plVar4 + 2) = (short)(*(ushort *)(plVar4 + 2) - 1);
            }
          }
          *(undefined8 *)(puVar2 + 2) = 0;
          *puVar2 = 0;
          lVar3 = *(long *)(param_1 + 0x118);
        }
        FUN_0048ac10(*(undefined8 *)PTR_DAT_02712dc8,lVar3,param_1 + 0x18);
        *(undefined8 *)(param_1 + 0x118) = 0;
        *(undefined4 *)(param_1 + 0x120) = 0;
      }
      if (((*puVar1 >> 0xe & 1) != 0) && (*(int *)(param_1 + 0x2b8) == 0)) {
        *(undefined4 *)(param_1 + 0x2b8) = 0xffffffff;
      }
      *(undefined1 *)(param_1 + 0x26f) = *(undefined1 *)(param_1 + 0x26f);
      *puVar1 = *puVar1 & 0xfffffeff | 0x400;
    }
  }
  return;
}


