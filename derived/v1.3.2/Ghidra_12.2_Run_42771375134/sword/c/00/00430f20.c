/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00430f20; name: FUN_00430f20
 */


int * FUN_00430f20(uint param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  size_t sVar5;
  void *__dest;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  puVar3 = PTR_DAT_02712a90;
  piVar4 = (int *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,param_1 << 5 | 8);
  if (piVar4 != (int *)0x0) {
    *piVar4 = 1;
    piVar4[1] = param_1;
    if (param_1 != 0) {
      lVar9 = 0;
      uVar8 = 0;
      do {
        puVar1 = (undefined8 *)(param_2 + lVar9);
        *(undefined8 *)((long)piVar4 + lVar9 + 0x20) = puVar1[3];
        *(undefined8 *)((long)piVar4 + lVar9 + 0x18) = puVar1[2];
        *(undefined8 *)((long)piVar4 + lVar9 + 0x10) = puVar1[1];
        *(undefined8 *)((long)piVar4 + lVar9 + 8) = *puVar1;
        if ((char *)puVar1[1] != (char *)0x0) {
          sVar5 = strlen((char *)puVar1[1]);
          uVar6 = (ulong)((int)sVar5 + 1);
          __dest = (void *)FUN_00404690(*(undefined4 *)puVar3,uVar6);
          *(void **)((long)piVar4 + lVar9 + 0x10) = __dest;
          if (__dest == (void *)0x0) {
            iVar2 = *piVar4;
            *piVar4 = iVar2 + -1;
            piVar4[1] = (int)uVar8;
            if (iVar2 + -1 == 0) {
              if ((int)uVar8 != 0) {
                uVar6 = 0;
                plVar7 = (long *)(piVar4 + 4);
                do {
                  if (*plVar7 != 0) {
                    FUN_00404870(*(undefined4 *)puVar3);
                    uVar8 = (ulong)(uint)piVar4[1];
                  }
                  uVar6 = uVar6 + 1;
                  plVar7 = plVar7 + 4;
                } while (uVar6 < (uVar8 & 0xffffffff));
              }
              FUN_00404870(*(undefined4 *)puVar3,piVar4);
            }
            return (int *)0x0;
          }
          memcpy(__dest,(void *)puVar1[1],uVar6);
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x20;
      } while (uVar8 < param_1);
    }
  }
  return piVar4;
}


