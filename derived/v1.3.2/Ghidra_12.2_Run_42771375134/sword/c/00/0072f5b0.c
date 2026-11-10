/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072f5b0; name: FUN_0072f5b0
 */


void FUN_0072f5b0(long *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar9;
  undefined8 *puVar8;
  
  if ((char)param_1[8] != '\0') {
    FUN_007301e0(param_1[6]);
    puVar2 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)*param_1;
    if ((undefined8 *)*param_1 != puVar2) {
      do {
        puVar9 = puVar8 + 1;
        (**(code **)(*(long *)*puVar8 + 0x78))();
        puVar8 = puVar9;
      } while (puVar2 != puVar9);
      plVar5 = (long *)*param_1;
      plVar3 = (long *)param_1[1];
      if (plVar5 != plVar3) {
        uVar6 = (long)plVar3 + (-8 - (long)plVar5);
        uVar1 = ((uint)(uVar6 >> 3) & 0x1fffffff) + 1;
        if ((uVar1 & 3) != 0) {
          lVar7 = -((ulong)uVar1 & 3);
          plVar4 = plVar5;
          do {
            plVar5 = plVar4 + 1;
            lVar7 = lVar7 + 1;
            *(undefined1 *)(*plVar4 + 0x1d8) = 1;
            plVar4 = plVar5;
          } while (lVar7 != 0);
        }
        if (0x17 < uVar6) {
          do {
            *(undefined1 *)(*plVar5 + 0x1d8) = 1;
            *(undefined1 *)(plVar5[1] + 0x1d8) = 1;
            *(undefined1 *)(plVar5[2] + 0x1d8) = 1;
            plVar4 = plVar5 + 3;
            plVar5 = plVar5 + 4;
            *(undefined1 *)(*plVar4 + 0x1d8) = 1;
          } while (plVar5 != plVar3);
        }
      }
    }
  }
  return;
}


