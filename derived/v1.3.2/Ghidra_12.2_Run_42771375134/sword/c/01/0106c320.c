/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106c320; name: FUN_0106c320
 */


void FUN_0106c320(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  uint *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_2a0 [504];
  undefined1 auStack_a8 [24];
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  
  iVar3 = FUN_00735610(param_2 + 0x740);
  lVar5 = *(long *)(param_1 + 0x328) - *(long *)(param_1 + 800);
  if (lVar5 != 0) {
    uVar15 = (lVar5 >> 3) * -0x70a3d70a3d70a3d7;
    uVar16 = 0;
    uVar14 = 1L << ((ulong)param_3 & 0x3f);
    do {
      while( true ) {
        lVar5 = *(long *)(*(long *)(param_1 + 0x218) + 0x290);
        lVar9 = lVar5 + uVar16 * 0x4c0;
        plVar1 = *(long **)(lVar9 + 0x138);
        plVar2 = *(long **)(lVar9 + 0x140);
        if (plVar2 != plVar1) break;
LAB_0106c630:
        uVar16 = uVar16 + 1;
        if (uVar15 <= uVar16) {
          return;
        }
      }
      plVar12 = plVar1;
      if (*plVar1 != 0x71e945bedf983846) {
        do {
          plVar12 = plVar12 + 4;
          if (plVar2 == plVar12) goto LAB_0106c630;
        } while (*plVar12 != 0x71e945bedf983846);
      }
      uVar11 = (uint)((ulong)((long)plVar12 - (long)plVar1) >> 5);
      if (plVar12 == plVar2) {
        uVar11 = 0xffffffff;
      }
      if ((int)uVar11 < 0) goto LAB_0106c630;
      piVar6 = *(int **)(lVar5 + uVar16 * 0x4c0 + 0x40);
      puVar7 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (0x2c - (long)*piVar6)));
      piVar6 = (int *)((long)puVar7 + (ulong)*puVar7);
      puVar7 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (6 - (long)*piVar6)));
      puVar7 = (uint *)((long)puVar7 + (ulong)uVar11 * 4 + (ulong)*puVar7 + 4);
      piVar6 = (int *)((long)puVar7 + (ulong)*puVar7);
      if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 7) ||
         (uVar10 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3], uVar10 == 0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)((long)piVar6 + uVar10);
        if (iVar4 < 0) goto LAB_0106c630;
      }
      if ((iVar3 <= iVar4) || (lVar5 = FUN_00735620(param_2 + 0x740), lVar5 == 0))
      goto LAB_0106c630;
      if ((ulong)((*(long *)(param_1 + 0x328) - *(long *)(param_1 + 800) >> 3) * -0x70a3d70a3d70a3d7
                 ) <= uVar16) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      puVar8 = (undefined8 *)(*(long *)(param_1 + 800) + uVar16 * 200);
      local_88 = *puVar8;
      local_80 = puVar8[1];
      local_78 = puVar8[2];
      local_70 = puVar8[3];
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
      }
      FUN_006cf0a0(auStack_a8,PTR_DAT_02715bf8);
      FUN_00784060(auStack_2a0,*(undefined8 *)(lVar5 + 0xe0));
      lVar9 = *(long *)(param_1 + 0x368);
      lVar13 = *(long *)(param_1 + 0x370);
      if (lVar9 != lVar13) {
        if (0x1f < param_3) goto LAB_0106c65c;
        do {
          if ((*(ulong *)(lVar9 + 0x38) & uVar14) != 0) {
            FUN_0072f510(lVar9,&local_88,auStack_a8,auStack_2a0,1);
          }
          lVar9 = lVar9 + 0x48;
        } while (lVar13 != lVar9);
      }
      FUN_00784490(auStack_2a0);
      if (local_90 != 0) {
        (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
        local_90 = 0;
      }
      FUN_006cf0a0(auStack_a8,PTR_DAT_02715c00);
      FUN_00784060(auStack_2a0,*(undefined8 *)(lVar5 + 0xe8));
      lVar5 = *(long *)(param_1 + 0x368);
      lVar9 = *(long *)(param_1 + 0x370);
      if (lVar5 != lVar9) {
        if (0x1f < param_3) {
LAB_0106c65c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        do {
          if ((*(ulong *)(lVar5 + 0x38) & uVar14) != 0) {
            FUN_0072f510(lVar5,&local_88,auStack_a8,auStack_2a0,1);
          }
          lVar5 = lVar5 + 0x48;
        } while (lVar9 != lVar5);
      }
      FUN_00784490(auStack_2a0);
      if (local_90 != 0) {
        (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
        local_90 = 0;
      }
      if (local_70 == 0) goto LAB_0106c630;
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar15);
  }
  return;
}


