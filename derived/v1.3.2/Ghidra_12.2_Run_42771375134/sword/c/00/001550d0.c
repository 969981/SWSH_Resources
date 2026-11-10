/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001550d0; name: FUN_001550d0
 */


void FUN_001550d0(long param_1,undefined8 *param_2,long param_3,uint param_4,uint param_5)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 local_58;
  
  uVar4 = *(uint *)(param_1 + 0x1b8);
  uVar11 = (ulong)uVar4;
  uVar12 = (uint)((ulong)(param_3 - (long)param_2) >> 3) & 0x7fffffff;
  iVar2 = (param_4 - param_5) + uVar12;
  uVar3 = iVar2 + uVar4;
  plVar1 = (long *)(param_1 + 0x1b0);
  if ((*(uint *)(param_1 + 0x1bc) & 0x7fffffff) < uVar3) {
    FUN_001591b0(plVar1,uVar3);
  }
  uVar8 = uVar3;
  if (uVar3 <= uVar4) {
    uVar8 = uVar4;
  }
  local_58 = 0;
  FUN_00155350(plVar1,uVar8,&local_58);
  if (iVar2 == 0) goto LAB_001552c0;
  lVar5 = *plVar1;
  uVar12 = uVar12 + param_4;
  if (uVar12 < param_5 || uVar12 - param_5 == 0) {
    if (param_5 < uVar4) {
      uVar9 = (ulong)param_5;
      uVar7 = uVar9;
      uVar8 = uVar12;
      if ((uVar4 - param_5 & 1) != 0) {
        *(undefined8 *)(lVar5 + (ulong)uVar12 * 8) = *(undefined8 *)(lVar5 + uVar9 * 8);
        uVar7 = uVar9 + 1;
        uVar8 = uVar12 + 1;
      }
      if (uVar11 - 1 != uVar9) {
        lVar10 = uVar11 - uVar7;
        puVar6 = (undefined8 *)(lVar5 + uVar7 * 8 + 8);
        do {
          *(undefined8 *)(lVar5 + (ulong)uVar8 * 8) = puVar6[-1];
          uVar4 = uVar8 + 1;
          uVar8 = uVar8 + 2;
          lVar10 = lVar10 + -2;
          *(undefined8 *)(lVar5 + (ulong)uVar4 * 8) = *puVar6;
          puVar6 = puVar6 + 2;
        } while (lVar10 != 0);
      }
      goto LAB_0015523c;
    }
  }
  else {
    if (param_5 < uVar4) {
      uVar8 = uVar3;
      if ((uVar4 - param_5 & 1) != 0) {
        uVar11 = uVar11 - 1;
        uVar8 = uVar3 - 1;
        *(undefined8 *)(lVar5 + (ulong)uVar8 * 8) = *(undefined8 *)(lVar5 + (ulong)(uVar4 - 1) * 8);
      }
      if (uVar4 - 1 != param_5) {
        uVar7 = uVar11 + 0xffffffff;
        do {
          *(undefined8 *)(lVar5 + (ulong)(uVar8 - 1) * 8) =
               *(undefined8 *)(lVar5 + (uVar7 & 0xffffffff) * 8);
          uVar4 = (int)uVar11 - 2;
          uVar11 = (ulong)uVar4;
          uVar7 = uVar7 - 2;
          *(undefined8 *)(lVar5 + (ulong)(uVar8 - 2) * 8) = *(undefined8 *)(lVar5 + uVar11 * 8);
          uVar8 = uVar8 - 2;
        } while (param_5 < uVar4);
      }
LAB_0015523c:
      if (uVar12 <= param_5) goto LAB_001552ac;
    }
    uVar7 = (ulong)param_5;
    uVar11 = uVar7;
    if ((uVar12 - param_5 & 1) != 0) {
      *(undefined8 *)(*plVar1 + uVar7 * 8) = param_2[param_5 - param_4];
      uVar11 = uVar7 + 1;
    }
    if ((ulong)uVar12 - 1 != uVar7) {
      do {
        uVar7 = -param_4 + uVar11;
        lVar5 = uVar11 * 8;
        *(undefined8 *)(*plVar1 + lVar5) = param_2[uVar7 & 0xffffffff];
        uVar11 = uVar11 + 2;
        *(undefined8 *)(*plVar1 + lVar5 + 8) = param_2[(int)uVar7 + 1];
      } while (uVar12 != uVar11);
    }
  }
LAB_001552ac:
  local_58 = 0;
  FUN_00155350(plVar1,uVar3,&local_58);
LAB_001552c0:
  if (param_4 < param_5) {
    uVar7 = (ulong)param_4;
    uVar11 = uVar7;
    if ((param_5 - param_4 & 1) != 0) {
      *(undefined8 *)(*plVar1 + uVar7 * 8) = *param_2;
      uVar11 = uVar7 + 1;
    }
    if ((ulong)param_5 - 1 != uVar7) {
      puVar6 = param_2 + ((uVar11 + 1) - uVar7);
      do {
        lVar5 = uVar11 * 8;
        uVar11 = uVar11 + 2;
        *(undefined8 *)(*plVar1 + lVar5) = puVar6[-1];
        *(undefined8 *)(*plVar1 + lVar5 + 8) = *puVar6;
        puVar6 = puVar6 + 2;
      } while (param_5 != uVar11);
    }
  }
  *(undefined4 *)(param_1 + 0x29c) = 0;
  return;
}


