/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00155990; name: FUN_00155990
 */


void FUN_00155990(long param_1,long param_2,long param_3,int param_4,uint param_5)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  undefined4 local_58;
  undefined4 local_54;
  
  uVar5 = *(uint *)(param_1 + 0x1e8);
  uVar12 = (ulong)uVar5;
  iVar13 = (int)((ulong)(param_3 - param_2) >> 2);
  iVar2 = (param_4 - param_5) + iVar13;
  uVar3 = iVar2 + uVar5;
  plVar1 = (long *)(param_1 + 0x1e0);
  if ((*(uint *)(param_1 + 0x1ec) & 0x7fffffff) < uVar3) {
    FUN_00143b30(plVar1,uVar3);
  }
  uVar4 = uVar3;
  if (uVar3 <= uVar5) {
    uVar4 = uVar5;
  }
  local_54 = 0;
  FUN_00155ba0(plVar1,uVar4,&local_54);
  if (iVar2 == 0) goto LAB_00155b74;
  lVar6 = *plVar1;
  uVar4 = iVar13 + param_4;
  if (uVar4 < param_5 || uVar4 - param_5 == 0) {
    if (param_5 < uVar5) {
      uVar10 = (ulong)param_5;
      uVar8 = uVar10;
      uVar9 = uVar4;
      if ((uVar5 - param_5 & 1) != 0) {
        *(undefined4 *)(lVar6 + (ulong)uVar4 * 4) = *(undefined4 *)(lVar6 + uVar10 * 4);
        uVar8 = uVar10 + 1;
        uVar9 = uVar4 + 1;
      }
      if (uVar12 - 1 != uVar10) {
        lVar11 = uVar12 - uVar8;
        puVar7 = (undefined4 *)(lVar6 + uVar8 * 4 + 4);
        do {
          *(undefined4 *)(lVar6 + (ulong)uVar9 * 4) = puVar7[-1];
          uVar5 = uVar9 + 1;
          uVar9 = uVar9 + 2;
          lVar11 = lVar11 + -2;
          *(undefined4 *)(lVar6 + (ulong)uVar5 * 4) = *puVar7;
          puVar7 = puVar7 + 2;
        } while (lVar11 != 0);
      }
      goto LAB_00155afc;
    }
  }
  else {
    if (param_5 < uVar5) {
      uVar9 = uVar3;
      if ((uVar5 - param_5 & 1) != 0) {
        uVar12 = uVar12 - 1;
        uVar9 = uVar3 - 1;
        *(undefined4 *)(lVar6 + (ulong)uVar9 * 4) = *(undefined4 *)(lVar6 + (ulong)(uVar5 - 1) * 4);
      }
      if (uVar5 - 1 != param_5) {
        uVar8 = uVar12 + 0xffffffff;
        do {
          *(undefined4 *)(lVar6 + (ulong)(uVar9 - 1) * 4) =
               *(undefined4 *)(lVar6 + (uVar8 & 0xffffffff) * 4);
          uVar5 = (int)uVar12 - 2;
          uVar12 = (ulong)uVar5;
          uVar8 = uVar8 - 2;
          *(undefined4 *)(lVar6 + (ulong)(uVar9 - 2) * 4) = *(undefined4 *)(lVar6 + uVar12 * 4);
          uVar9 = uVar9 - 2;
        } while (param_5 < uVar5);
      }
LAB_00155afc:
      if (uVar4 <= param_5) goto LAB_00155b60;
    }
    uVar8 = (ulong)param_5;
    uVar12 = uVar8;
    if ((uVar4 - param_5 & 1) != 0) {
      uVar12 = uVar8 + 1;
      *(undefined4 *)(lVar6 + uVar8 * 4) = *(undefined4 *)(param_2 + (ulong)(param_5 - param_4) * 4)
      ;
    }
    if ((ulong)uVar4 - 1 != uVar8) {
      puVar7 = (undefined4 *)(lVar6 + uVar12 * 4 + 4);
      do {
        uVar8 = (uint)-param_4 + uVar12;
        uVar12 = uVar12 + 2;
        puVar7[-1] = *(undefined4 *)(param_2 + (uVar8 & 0xffffffff) * 4);
        *puVar7 = *(undefined4 *)(param_2 + (ulong)((int)uVar8 + 1) * 4);
        puVar7 = puVar7 + 2;
      } while (uVar4 != uVar12);
    }
  }
LAB_00155b60:
  local_58 = 0;
  FUN_00155ba0(plVar1,uVar3,&local_58);
LAB_00155b74:
  *(undefined4 *)(param_1 + 0x29c) = 0;
  return;
}


