/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c80d0; name: FUN_005c80d0
 */


long FUN_005c80d0(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  
  uVar9 = *(ulong *)(param_2 + 0x10);
  if (uVar9 == 0) {
    if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
      **(undefined1 **)(param_1 + 8) = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    return param_1;
  }
  if (*(ulong *)(param_1 + 0x20) < uVar9 + 1) {
    FUN_005c5e00(param_1,uVar9 + 1,1);
    uVar9 = *(ulong *)(param_2 + 0x10);
    if (uVar9 == 0) {
      if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
        **(undefined1 **)(param_1 + 8) = 0;
      }
      *(undefined8 *)(param_1 + 0x10) = 0;
      goto LAB_005c8240;
    }
  }
  if (*(ulong *)(param_1 + 0x20) <= uVar9) {
    uVar1 = uVar9 + 1;
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar5 = *(ulong *)(param_1 + 0x20) * 2;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
    }
    else {
      uVar1 = *(long *)(param_1 + 0x18) + uVar1;
    }
    FUN_005c5e00(param_1,uVar1,0);
  }
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_2 + 8);
  uVar1 = uVar9;
  if ((long)uVar9 < 0) {
    if (lVar3 != 0) {
      uVar5 = 0;
      do {
        uVar1 = uVar5;
        uVar5 = uVar1 + 1;
      } while (*(char *)(lVar3 + uVar1) != '\0');
      goto joined_r0x005c81c8;
    }
  }
  else {
joined_r0x005c81c8:
    if ((lVar2 != 0) && (0 < (long)uVar1)) {
      uVar5 = uVar1 & 3;
      if (uVar1 - 1 < 3) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        do {
          puVar4 = (undefined1 *)(lVar3 + 1 + lVar7);
          puVar8 = (undefined1 *)(lVar2 + 1 + lVar7);
          lVar7 = lVar7 + 4;
          puVar8[-1] = puVar4[-1];
          *puVar8 = *puVar4;
          puVar8[1] = puVar4[1];
          puVar8[2] = puVar4[2];
        } while (uVar1 - uVar5 != lVar7);
      }
      if (uVar5 != 0) {
        lVar6 = -uVar5;
        puVar4 = (undefined1 *)(lVar3 + lVar7);
        puVar8 = (undefined1 *)(lVar2 + lVar7);
        do {
          lVar6 = lVar6 + 1;
          *puVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar6 != 0);
      }
      *(undefined1 *)(lVar2 + uVar1) = 0;
    }
  }
  *(ulong *)(param_1 + 0x10) = uVar9;
LAB_005c8240:
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}


