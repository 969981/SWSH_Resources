/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006bd3e0; name: FUN_006bd3e0
 */


void FUN_006bd3e0(long *param_1,long *param_2,long param_3,int *param_4)

{
  uint *puVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined4 uVar19;
  
  if (*(ushort *)((long)param_4 - (long)*param_4) < 5) {
    lVar4 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2];
    lVar4 = 0;
    if (uVar7 != 0) {
      puVar1 = (uint *)((long)param_4 + uVar7);
      lVar4 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  FUN_006bbe00(param_1,lVar4 + 4);
  *param_1 = (long)(PTR_DAT_02715200 + 0x10);
  param_1[5] = (long)param_4;
  param_1[6] = param_3;
  plVar15 = param_1 + 7;
  *plVar15 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
     (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) {
    lVar4 = FUN_0075ecb0();
  }
  piVar8 = (int *)param_1[5];
  param_1[10] = lVar4;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar7 = (ulong)*(ushort *)((long)piVar8 + (8 - (long)*piVar8));
  puVar1 = (uint *)((long)piVar8 + uVar7);
  uVar9 = (ulong)*puVar1;
  uVar10 = (ulong)*(uint *)((long)puVar1 + uVar9);
  if (uVar10 != 0) {
    lVar2 = uVar7 + uVar9;
    lVar4 = 0;
    do {
      uVar7 = (ulong)*(uint *)((long)piVar8 + lVar4 + lVar2 + 4);
      lVar11 = lVar4 + (uVar7 - (long)*(int *)((long)piVar8 + lVar4 + uVar7 + lVar2 + 4)) + lVar2;
      uVar3 = *(ushort *)((long)piVar8 + lVar11 + 4);
      if (uVar3 < 5) {
        lVar14 = 0;
        uVar19 = 0;
        puVar16 = (undefined8 *)param_1[8];
        if ((undefined8 *)param_1[9] <= puVar16) goto LAB_006bd610;
LAB_006bd590:
        lVar18 = param_1[10];
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_006bd75c;
        *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar18;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        *puVar16 = 0;
        puVar16[3] = 0;
        puVar16[4] = 0;
        puVar16[1] = 0;
        puVar16[2] = 0;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        lVar11 = param_1[8];
        param_1[8] = lVar11 + 0x28;
        lVar18 = *plVar15;
        lVar11 = (lVar11 + 0x28) - lVar18;
      }
      else {
        uVar9 = (ulong)*(ushort *)((long)piVar8 + lVar11 + 8);
        if (uVar9 == 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = uVar7 + uVar9;
          lVar14 = (long)piVar8 +
                   lVar4 + lVar14 + (ulong)*(uint *)((long)piVar8 + lVar4 + lVar14 + lVar2 + 4) +
                   lVar2 + 4;
        }
        if ((6 < uVar3) && (uVar9 = (ulong)*(ushort *)((long)piVar8 + lVar11 + 10), uVar9 != 0)) {
          uVar19 = *(undefined4 *)((long)piVar8 + lVar4 + uVar7 + uVar9 + lVar2 + 4);
          puVar16 = (undefined8 *)param_1[8];
          if ((undefined8 *)param_1[9] <= puVar16) goto LAB_006bd610;
          goto LAB_006bd590;
        }
        uVar19 = 0;
        puVar16 = (undefined8 *)param_1[8];
        if (puVar16 < (undefined8 *)param_1[9]) goto LAB_006bd590;
LAB_006bd610:
        FUN_006bdc60(plVar15);
        lVar18 = *plVar15;
        lVar11 = param_1[8] - lVar18;
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar5 = (**(code **)(*param_2 + 0x10))(param_2,0x28,8);
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_006bd75c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      lVar11 = (lVar11 >> 3) * -0x3333333333333333 + -1;
      plVar12 = (long *)(lVar18 + lVar11 * 0x28);
      FUN_006be770(lVar5,lVar14);
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      lVar14 = *plVar12;
      *plVar12 = lVar5;
      if (lVar14 == 0) {
        lVar14 = lVar18 + lVar11 * 0x28;
        puVar16 = (undefined8 *)(lVar14 + 8);
        puVar17 = (undefined8 *)(lVar14 + 0x10);
        puVar13 = (undefined8 *)(lVar14 + 0x18);
      }
      else {
        if (*(long *)(lVar14 + 0x20) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar14 + 0x20) + 0x48) + 0x18))();
          *(undefined8 *)(lVar14 + 0x20) = 0;
        }
        lVar5 = lVar18 + lVar11 * 0x28;
        puVar16 = (undefined8 *)(lVar5 + 8);
        puVar17 = (undefined8 *)(lVar5 + 0x10);
        puVar13 = (undefined8 *)(lVar5 + 0x18);
        (**(code **)(*(long *)*puVar16 + 0x18))((long *)*puVar16,lVar14,*puVar17,*puVar13);
      }
      *puVar16 = param_2;
      *puVar17 = 0x28;
      *puVar13 = 8;
      *(undefined4 *)(lVar18 + lVar11 * 0x28 + 0x20) = uVar19;
      lVar4 = lVar4 + 4;
    } while (uVar10 << 2 != lVar4);
  }
  return;
}


