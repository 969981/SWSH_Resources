/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f1e80; name: FUN_010f1e80
 */


void FUN_010f1e80(long param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4 != (undefined8 *)0x0) {
    plVar5 = (long *)*puVar4;
    plVar6 = (long *)puVar4[1];
    uVar2 = (long)plVar6 - (long)plVar5 >> 3;
    if (param_2 < uVar2 && (long)plVar6 - (long)plVar5 != 0) {
      uVar3 = 0;
      do {
        if (param_2 == uVar3) {
          if (plVar5 + 1 == plVar6) goto LAB_010f1f38;
          plVar7 = plVar5;
          do {
            if (*plVar7 != 0) {
              (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
              *plVar7 = 0;
            }
            plVar5 = plVar7 + 1;
            lVar1 = *plVar5;
            *plVar5 = 0;
            *plVar7 = lVar1;
            plVar7 = plVar5;
          } while (plVar6 + -1 != plVar5);
          plVar6 = (long *)puVar4[1];
          if (plVar6 != plVar5) {
LAB_010f1f38:
            do {
              plVar7 = plVar6 + -1;
              if (*plVar7 != 0) {
                (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
                plVar6[-1] = 0;
              }
              plVar6 = plVar7;
            } while (plVar5 != plVar7);
          }
          puVar4[1] = plVar5;
          return;
        }
        uVar3 = uVar3 + 1;
        plVar5 = plVar5 + 1;
      } while ((uVar3 & 0xffffffff) < uVar2);
    }
  }
  return;
}


