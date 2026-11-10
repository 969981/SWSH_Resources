/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072f3c0; name: FUN_0072f3c0
 */


void FUN_0072f3c0(undefined8 param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar3 = param_2[6];
  uVar6 = *(long *)(lVar3 + 0x178) - *(long *)(lVar3 + 0x170);
  if ((int)(uVar6 >> 4) != 0) {
    uVar7 = 0;
    while( true ) {
      lVar8 = *(long *)(*(long *)(lVar3 + 0x170) + uVar7 * 0x10);
      lVar3 = *(long *)(lVar8 + 0x758) - *(long *)(lVar8 + 0x750);
      if (lVar3 != 0) {
        uVar9 = (lVar3 >> 4) * -0x1084210842108421;
        FUN_006fc6d0(param_1);
        if (1 < uVar9) {
          lVar3 = 0x1f0;
          uVar10 = 1;
          do {
            FUN_006fc6d0(param_1,*(long *)(lVar8 + 0x750) + lVar3);
            uVar10 = uVar10 + 1;
            lVar3 = lVar3 + 0x1f0;
          } while (uVar10 < uVar9);
        }
      }
      uVar7 = uVar7 + 1;
      if (uVar7 == (uVar6 >> 4 & 0xffffffff)) break;
      lVar3 = param_2[6];
    }
  }
  plVar5 = (long *)*param_2;
  plVar2 = (long *)param_2[1];
  if (plVar5 != plVar2) {
    uVar6 = (long)plVar2 + (-8 - (long)plVar5);
    uVar1 = ((uint)(uVar6 >> 3) & 0x1fffffff) + 1;
    if ((uVar1 & 3) != 0) {
      lVar3 = -((ulong)uVar1 & 3);
      plVar4 = plVar5;
      do {
        plVar5 = plVar4 + 1;
        lVar3 = lVar3 + 1;
        *(undefined1 *)(*plVar4 + 0x1d8) = 1;
        plVar4 = plVar5;
      } while (lVar3 != 0);
    }
    if (0x17 < uVar6) {
      do {
        *(undefined1 *)(*plVar5 + 0x1d8) = 1;
        *(undefined1 *)(plVar5[1] + 0x1d8) = 1;
        *(undefined1 *)(plVar5[2] + 0x1d8) = 1;
        plVar4 = plVar5 + 3;
        plVar5 = plVar5 + 4;
        *(undefined1 *)(*plVar4 + 0x1d8) = 1;
      } while (plVar5 != plVar2);
    }
  }
  return;
}


