/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0082b610; name: FUN_0082b610
 */


undefined8 FUN_0082b610(long *param_1)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_02717150;
  plVar6 = (long *)*param_1;
  do {
    if (plVar6 == param_1 + 1) {
      return 1;
    }
    if (*(int *)(puVar1 + (ulong)*(byte *)(plVar6 + 6) * 4) == 10) {
      if (*(char *)((long)plVar6 + 0x31) == '\0') {
        if ((*(byte *)((long)plVar6 + 0x32) & 1) == 0) {
          if ((*(byte *)((long)plVar6 + 0x32) >> 4 & 1) == 0) {
            uVar3 = (**(code **)(*(long *)plVar6[5] + 0x40))();
            if ((uVar3 & 1) == 0) {
              return 0;
            }
          }
          else {
            uVar3 = (**(code **)(*(long *)plVar6[5] + 0x48))();
            if ((uVar3 & 1) == 0) {
              return 0;
            }
          }
        }
      }
      else {
        lVar4 = plVar6[5];
        if (0 < *(int *)(lVar4 + 8)) {
          lVar7 = 0;
          do {
            uVar3 = (**(code **)(**(long **)(*(long *)(lVar4 + 0x10) + lVar7 * 8 + 8) + 0x40))();
            if ((uVar3 & 1) == 0) {
              return 0;
            }
            lVar4 = plVar6[5];
            lVar7 = lVar7 + 1;
          } while (lVar7 < *(int *)(lVar4 + 8));
        }
      }
    }
    plVar5 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      plVar5 = plVar6 + 2;
      bVar2 = (long *)*(long *)*plVar5 != plVar6;
      plVar6 = (long *)*plVar5;
      if (bVar2) {
        do {
          lVar4 = *plVar5;
          plVar5 = (long *)(lVar4 + 0x10);
          plVar6 = (long *)*plVar5;
        } while (*plVar6 != lVar4);
      }
    }
    else {
      do {
        plVar6 = plVar5;
        plVar5 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  } while( true );
}


