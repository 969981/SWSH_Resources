/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00492580; name: FUN_00492580
 */


/* WARNING: Removing unreachable block (ram,0x0049262c) */

undefined8 FUN_00492580(long param_1,long param_2,undefined4 param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  short sVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  long lVar11;
  undefined2 *puVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  
  if (*(short *)(param_1 + 0xfa) == 0) {
LAB_004927fc:
    uVar9 = 1;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0x20);
    uVar16 = *(uint *)(param_2 + 0x24);
    plVar15 = *(long **)(param_1 + 200);
    *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + -1;
    puVar5 = PTR_DAT_02712a90;
    if (uVar2 < uVar16) {
LAB_0049269c:
      if (uVar2 < uVar16) {
        puVar8 = (undefined2 *)(*(long *)(param_2 + 0x18) + (ulong)*(uint *)(param_2 + 0x20) * 2);
        *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) + 1;
        if (puVar8 != (undefined2 *)0x0) {
          *puVar8 = (short)param_3;
          FUN_00494820(param_2,param_3);
          iVar7 = (**(code **)(*plVar15 + 0x58))(plVar15,param_3);
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar7;
          sVar6 = (**(code **)(**(long **)(param_1 + 200) + 0x20))();
          uVar1 = *(ushort *)(param_1 + 0xfa);
          if ((ushort)(sVar6 - 1U) <= *(ushort *)(param_1 + 0xfa)) {
            uVar1 = sVar6 - 1U;
          }
          if ((uint)uVar1 < *(uint *)(param_2 + 0x20)) {
            uVar4 = **(undefined2 **)(param_2 + 0x18);
            FUN_00494850(param_2,uVar4);
            iVar7 = (**(code **)(*plVar15 + 0x58))(plVar15,uVar4);
            *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + iVar7;
            puVar8 = *(undefined2 **)(param_2 + 0x18);
            uVar16 = *(uint *)(param_2 + 0x20);
            *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + 1;
            puVar10 = puVar8 + ((ulong)uVar16 - 1);
            if (puVar8 < puVar10) {
              uVar13 = (ulong)uVar16 * 2 - 3;
              uVar16 = ((uint)(uVar13 >> 1) & 0x7fffffff) + 1;
              if ((uVar16 & 3) != 0) {
                lVar14 = -((ulong)uVar16 & 3);
                puVar12 = puVar8;
                do {
                  puVar8 = puVar12 + 1;
                  *puVar12 = *puVar8;
                  lVar14 = lVar14 + 1;
                  puVar12 = puVar8;
                } while (lVar14 != 0);
              }
              if (5 < uVar13) {
                do {
                  *puVar8 = puVar8[1];
                  *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar8 + 2);
                  puVar12 = puVar8 + 4;
                  puVar8[3] = *puVar12;
                  puVar8 = puVar12;
                } while (puVar12 < puVar10);
              }
              uVar16 = *(uint *)(param_2 + 0x20);
            }
            *(uint *)(param_2 + 0x20) = uVar16 - 1;
          }
          goto LAB_004927fc;
        }
      }
    }
    else {
      uVar16 = uVar16 + 1;
      puVar8 = (undefined2 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar16 << 1);
      if (puVar8 != (undefined2 *)0x0) {
        puVar10 = *(undefined2 **)(param_2 + 0x18);
        if ((puVar10 != (undefined2 *)0x0) && (puVar10 != puVar8)) {
          uVar3 = *(uint *)(param_2 + 0x20);
          if (uVar3 != 0) {
            *puVar8 = *puVar10;
            if (uVar3 != 1) {
              if (uVar3 == 2) {
                lVar11 = 1;
              }
              else {
                lVar14 = 0;
                do {
                  lVar11 = lVar14;
                  puVar8[lVar11 + 1] = *(undefined2 *)(*(long *)(param_2 + 0x18) + lVar11 * 2 + 2);
                  puVar8[lVar11 + 2] = *(undefined2 *)(*(long *)(param_2 + 0x18) + lVar11 * 2 + 4);
                  lVar14 = lVar11 + 2;
                } while (((ulong)uVar3 - 1) - (ulong)(~uVar3 & 1) != lVar11 + 2);
                lVar11 = lVar11 + 3;
                if ((~uVar3 & 1) == 0) goto LAB_00492688;
              }
              puVar8[lVar11] = *(undefined2 *)(*(long *)(param_2 + 0x18) + lVar11 * 2);
            }
LAB_00492688:
            puVar10 = *(undefined2 **)(param_2 + 0x18);
          }
          FUN_00404870(*(undefined4 *)puVar5,puVar10);
        }
        *(undefined2 **)(param_2 + 0x18) = puVar8;
        *(uint *)(param_2 + 0x24) = uVar16;
        goto LAB_0049269c;
      }
    }
    *(undefined2 *)(param_2 + 0x12) = 0;
    uVar9 = 2;
  }
  return uVar9;
}


