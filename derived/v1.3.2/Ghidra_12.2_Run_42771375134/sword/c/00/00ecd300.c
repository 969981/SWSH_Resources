/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ecd300; name: FUN_00ecd300
 */


void FUN_00ecd300(long *param_1,uint param_2)

{
  ulong *puVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  ulong *puVar8;
  
  if ((param_2 < 10) &&
     (pcVar7 = (char *)((long)param_1 + (long)(int)param_2 * 0x70 + 0xb4), *pcVar7 != '\0')) {
    lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    plVar3 = param_1;
    if (lVar5 != 0) {
      plVar3 = (long *)(**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    puVar8 = *(ulong **)(*(long *)PTR_DAT_027194d8 + 0xb0);
    puVar1 = *(ulong **)(*(long *)PTR_DAT_027194d8 + 0xb8);
    if (puVar8 == puVar1) {
      bVar2 = false;
    }
    else {
      bVar2 = false;
      do {
        plVar3 = (long *)*puVar8;
        if (((*(byte *)((long)plVar3 + 0x38f) >> 2 & 1) != 0) &&
           (plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(), ((ulong)plVar3 & 1) == 0)) {
          uVar6 = *puVar8;
          plVar4 = (long *)(*(code *)**(undefined8 **)(uVar6 + 0x50))((undefined8 *)(uVar6 + 0x50));
          plVar3 = (long *)FUN_00ecd7b0();
          for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
            if (plVar4 == plVar3) {
              if ((*(int *)(uVar6 + 0x43c) - 1U < 2) && (*(uint *)(uVar6 + 0x438) == param_2)) {
                bVar2 = true;
              }
              break;
            }
          }
        }
        puVar8 = puVar8 + 1;
      } while (puVar8 != puVar1);
    }
    if (lVar5 != 0) {
      plVar3 = (long *)(**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    if (!bVar2) {
      plVar4 = param_1 + (long)(int)param_2 * 0xe + 10;
      FUN_00ecd480(plVar3,plVar4);
      lVar5 = *plVar4;
      *plVar4 = 0;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      param_1[(long)(int)param_2 * 0xe + 0x12] = 0;
      param_1[(long)(int)param_2 * 0xe + 0x13] = 0;
      param_1[(long)(int)param_2 * 0xe + 0x10] = 0;
      param_1[(long)(int)param_2 * 0xe + 0x11] = 0;
      *(undefined4 *)(param_1 + (long)(int)param_2 * 0xe + 0x14) = 0x461c4000;
      *pcVar7 = '\0';
    }
  }
  return;
}


