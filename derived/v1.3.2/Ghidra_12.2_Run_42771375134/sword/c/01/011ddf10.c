/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ddf10; name: FUN_011ddf10
 */


void FUN_011ddf10(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  
  if (*(long *)(param_1 + 0x358) != 0) {
    plVar7 = *(long **)(param_1 + 0x350);
    do {
      plVar1 = plVar7 + 4;
      while( true ) {
        uVar3 = (**(code **)*plVar7)((undefined8 *)*plVar7 + 4);
        plVar2 = (long *)(*(long *)(param_1 + 0x350) + *(long *)(param_1 + 0x358) * 0x20);
        if ((uVar3 & 1) == 0) break;
        plVar8 = plVar1;
        if (plVar1 != plVar2) {
          plVar8 = plVar7;
          do {
            lVar4 = plVar8[4];
            puVar6 = (undefined8 *)*plVar8;
            plVar8[4] = 0;
            *plVar8 = lVar4;
            if (puVar6 != (undefined8 *)0x0) {
              pcVar5 = (code *)puVar6[1];
              if (pcVar5 != (code *)0x0) {
                puVar6[2] = 0;
                puVar6[3] = 0;
                *puVar6 = 0;
                puVar6[1] = 0;
                (*pcVar5)(puVar6 + 4);
              }
              (**(code **)(*(long *)plVar8[1] + 0x18))((long *)plVar8[1],puVar6,plVar8[2],plVar8[3])
              ;
            }
            plVar8[2] = plVar8[6];
            plVar8[3] = plVar8[7];
            plVar8[1] = plVar8[5];
            plVar8 = plVar8 + 4;
          } while (plVar2 + -4 != plVar8);
          plVar8 = (long *)(*(long *)(param_1 + 0x350) + *(long *)(param_1 + 0x358) * 0x20);
        }
        puVar6 = (undefined8 *)plVar8[-4];
        plVar8[-4] = 0;
        if (puVar6 != (undefined8 *)0x0) {
          pcVar5 = (code *)puVar6[1];
          if (pcVar5 != (code *)0x0) {
            puVar6[2] = 0;
            puVar6[3] = 0;
            *puVar6 = 0;
            puVar6[1] = 0;
            (*pcVar5)(puVar6 + 4);
          }
          (**(code **)(*(long *)plVar8[-3] + 0x18))((long *)plVar8[-3],puVar6,plVar8[-2],plVar8[-1])
          ;
        }
        lVar4 = *(long *)(param_1 + 0x358) + -1;
        *(long *)(param_1 + 0x358) = lVar4;
        if ((long *)(*(long *)(param_1 + 0x350) + lVar4 * 0x20) == plVar7) {
          return;
        }
      }
      plVar7 = plVar1;
    } while (plVar2 != plVar1);
  }
  return;
}


