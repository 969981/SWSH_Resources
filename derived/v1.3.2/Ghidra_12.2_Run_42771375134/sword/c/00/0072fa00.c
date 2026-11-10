/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072fa00; name: FUN_0072fa00
 */


/* WARNING: Removing unreachable block (ram,0x0072fd9c) */

void FUN_0072fa00(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  int iVar16;
  ulong uVar17;
  long local_68;
  
  param_1[7] = 0;
  puVar2 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar2 = PTR_DAT_02715bd0;
  if (lVar3 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar6 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = lVar6;
  param_1[9] = (long)(puVar2 + 0x48);
  lVar6 = param_2[4];
  param_1[0xc] = (long)(PTR_DAT_02715af8 + 0x10);
  lVar3 = *(long *)(lVar6 + 0xa8);
  param_1[0xd] = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  if (*(code **)(lVar6 + 0xc0) != (code *)0x0) {
    (**(code **)(lVar6 + 0xc0))(lVar6 + 0xd0,param_1 + 0x12);
    lVar3 = *(long *)(lVar6 + 0xb0);
    lVar4 = *(long *)(lVar6 + 0xb8);
    lVar13 = *(long *)(lVar6 + 200);
    param_1[0x10] = *(long *)(lVar6 + 0xc0);
    param_1[0x11] = lVar13;
    param_1[0xe] = lVar3;
    param_1[0xf] = lVar4;
  }
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  if (*(code **)(lVar6 + 0x140) != (code *)0x0) {
    (**(code **)(lVar6 + 0x140))(lVar6 + 0x150,param_1 + 0x22);
    lVar3 = *(long *)(lVar6 + 0x130);
    lVar4 = *(long *)(lVar6 + 0x138);
    lVar13 = *(long *)(lVar6 + 0x148);
    param_1[0x20] = *(long *)(lVar6 + 0x140);
    param_1[0x21] = lVar13;
    param_1[0x1e] = lVar3;
    param_1[0x1f] = lVar4;
  }
  puVar2 = PTR_DAT_02715b00;
  param_1[0x2e] = 0;
  param_1[0xc] = (long)(puVar2 + 0x10);
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  lVar6 = param_1[0xd];
  param_1[0x31] = lVar3;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  lVar3 = *(long *)(lVar6 + 0x298) - *(long *)(lVar6 + 0x290);
  uVar14 = (lVar3 >> 6) * -0x79435e50d79435e5;
  FUN_0072fde0(param_1 + 0x2e,uVar14);
  if (lVar3 != 0) {
    uVar17 = 0;
    do {
      lVar3 = *(long *)(lVar6 + 0x290);
      (**(code **)(*param_2 + 0x28))(&local_68,param_2,lVar3 + uVar17 * 0x4c0);
      iVar16 = (int)uVar17;
      if (local_68 != 0) {
        puVar1 = (undefined8 *)param_1[0x2f];
        if (puVar1 < (undefined8 *)param_1[0x30]) {
          lVar13 = param_1[0x31];
          lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar13;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined4 *)((long)puVar1 + 0xc) = 0xffffffff;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
          plVar7 = (long *)param_1[0x2f];
          plVar15 = plVar7 + 2;
          param_1[0x2f] = (long)plVar15;
          lVar4 = *plVar7;
        }
        else {
          FUN_007303c0(param_1 + 0x2e);
          plVar15 = (long *)param_1[0x2f];
          lVar4 = plVar15[-2];
        }
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
          plVar15[-2] = 0;
        }
        lVar4 = local_68;
        local_68 = 0;
        plVar15[-2] = lVar4;
        piVar8 = *(int **)(lVar3 + uVar17 * 0x4c0 + 0x40);
        if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 0xf) ||
           (uVar17 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[7], uVar17 == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined4 *)((long)piVar8 + uVar17);
        }
        *(undefined4 *)(plVar15 + -1) = uVar5;
        lVar3 = *(long *)(*(long *)(param_2[7] + 8) + 0x290);
        lVar4 = lVar3 + (long)iVar16 * 0x4c0;
        plVar11 = *(long **)(lVar4 + 0x138);
        plVar7 = *(long **)(lVar4 + 0x140);
        if (plVar7 != plVar11) {
          plVar12 = plVar11;
          if (*plVar11 != 0x71e945bedf983846) {
            do {
              plVar12 = plVar12 + 4;
              if (plVar7 == plVar12) goto LAB_0072fdac;
            } while (*plVar12 != 0x71e945bedf983846);
          }
          uVar10 = (uint)((ulong)((long)plVar12 - (long)plVar11) >> 5);
          if (plVar12 == plVar7) {
            uVar10 = 0xffffffff;
          }
          if (-1 < (int)uVar10) {
            piVar8 = *(int **)(lVar3 + (long)iVar16 * 0x4c0 + 0x40);
            puVar9 = (uint *)((long)piVar8 +
                             (ulong)*(ushort *)((long)piVar8 + (0x2c - (long)*piVar8)));
            piVar8 = (int *)((long)puVar9 + (ulong)*puVar9);
            puVar9 = (uint *)((long)piVar8 + (ulong)*(ushort *)((long)piVar8 + (6 - (long)*piVar8)))
            ;
            puVar9 = (uint *)((long)puVar9 + (ulong)uVar10 * 4 + (ulong)*puVar9 + 4);
            piVar8 = (int *)((long)puVar9 + (ulong)*puVar9);
            if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 7) ||
               (uVar17 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[3], uVar17 == 0)) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(undefined4 *)((long)piVar8 + uVar17);
            }
            *(undefined4 *)((long)plVar15 + -4) = uVar5;
          }
        }
      }
LAB_0072fdac:
      uVar17 = (ulong)(iVar16 + 1);
    } while (uVar17 < uVar14);
  }
  return;
}


