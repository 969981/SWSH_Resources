/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e1440; name: FUN_001e1440
 */


void FUN_001e1440(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 != 0) {
    uVar3 = *(uint *)(lVar4 + 0x50);
    lVar5 = *(long *)(lVar4 + 0x48);
    if (uVar3 == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = 0;
      plVar7 = (long *)(lVar5 + 8);
      do {
        if ((*(byte *)(plVar7 + -1) == param_3) && (*plVar7 == param_4)) goto LAB_001e14a4;
        uVar6 = uVar6 + 1;
        plVar7 = plVar7 + 2;
      } while (uVar6 < uVar3);
      uVar6 = 0xffffffff;
    }
LAB_001e14a4:
    *(uint *)(lVar4 + 0x50) = uVar3 - 1;
    puVar1 = (undefined8 *)(lVar5 + (ulong)(uVar3 - 1) * 0x10);
    puVar2 = (undefined8 *)(lVar5 + uVar6 * 0x10);
    puVar2[1] = puVar1[1];
    *puVar2 = *puVar1;
    if (*(int *)(*(long *)(param_1 + 8) + 0x50) == 0) {
      if (-1 < *(int *)(*(long *)(param_1 + 8) + 0x54)) {
        FUN_001b9ad0(*(undefined8 *)PTR_DAT_02711048);
      }
      *(undefined8 *)(param_1 + 8) = 0;
      return;
    }
  }
  return;
}


