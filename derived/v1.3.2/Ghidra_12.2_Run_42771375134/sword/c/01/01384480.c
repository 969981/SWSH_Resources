/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01384480; name: FUN_01384480
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01384480(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined1 local_70 [16];
  long local_58;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar15 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar15 == (undefined8 *)0x0)) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)(**(code **)*puVar15)(puVar15);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_02715078), iVar3 != 0)) {
      uVar7 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar7;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar5 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      do {
        if (puVar4 == (undefined8 *)PTR_DAT_02715080) {
          puVar5 = puVar15 + -10;
          goto LAB_01384500;
        }
        puVar4 = (undefined8 *)*puVar4;
      } while (puVar4 != (undefined8 *)0x0);
      puVar5 = (undefined8 *)0x0;
    }
  }
LAB_01384500:
  lVar6 = FUN_00adc640(puVar5,*(undefined8 *)(param_1 + 8),param_2);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  local_70._0_8_ = 8;
  FUN_00727220(lVar6,*param_3,local_70);
  local_70._0_8_ = 0;
  FUN_007273c0(lVar6,1,local_70);
  local_70._8_8_ = uRam0000000002a70be8;
  local_70._0_8_ = _DAT_02a70be0;
  FUN_0075e340(lVar6 + 0xc0,local_70);
  *(undefined1 *)(lVar6 + 0xf0) = 1;
  lVar8 = (long)*(int *)(param_1 + 0x7c) * 0x10;
  local_70 = FUN_00a92cd0(*(undefined8 *)(&DAT_02a70c60 + lVar8),
                          (int)((ulong)*(undefined8 *)(&DAT_02a70c60 + lVar8) >> 0x20),
                          (int)*(undefined8 *)(lVar8 + 0x2a70c68));
  FUN_0075e320(lVar6 + 0xc0,local_70);
  *(undefined1 *)(lVar6 + 0xf0) = 1;
  uVar2 = *param_4;
  *(undefined1 *)(param_1 + 0x1f0) = *(undefined1 *)(param_4 + 1);
  *(undefined4 *)(param_1 + 0x1ec) = uVar2;
  puVar1 = &DAT_02697728;
  if (*(char *)(param_4 + 1) != '\0') {
    puVar1 = &DAT_02697740;
  }
  FUN_006cf0a0(local_70,puVar1);
  iVar3 = FUN_0072c700(lVar6 + 0x210,local_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (iVar3 != -1) {
    FUN_006cf0a0(local_70,&DAT_02697758);
    lVar8 = *(long *)(*(long *)(lVar6 + 0x218) + 0x290) + (long)iVar3 * 0x4c0;
    plVar12 = *(long **)(lVar8 + 0xd8);
    plVar9 = *(long **)(lVar8 + 0xe0);
    plVar14 = plVar12;
    if (plVar12 == plVar9) {
      plVar13 = plVar9;
    }
    else {
      plVar13 = plVar12;
      if (*plVar12 != local_70._0_8_) {
        do {
          plVar13 = plVar13 + 4;
          if (plVar9 == plVar13) {
            plVar13 = plVar9;
            plVar14 = plVar9;
            goto LAB_01384690;
          }
        } while (*plVar13 != local_70._0_8_);
        plVar14 = plVar13;
      }
    }
LAB_01384690:
    iVar11 = (int)((ulong)((long)plVar14 - (long)plVar12) >> 5);
    if (plVar13 == plVar9) {
      iVar11 = -1;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (iVar11 != -1) {
      uVar16 = (ulong)iVar3;
      auVar17 = FUN_00ecedd0(*param_4);
      if ((ulong)((*(long *)(lVar6 + 0x328) - *(long *)(lVar6 + 800) >> 3) * -0x70a3d70a3d70a3d7) <=
          uVar16) goto LAB_013849f0;
      lVar8 = *(long *)(lVar6 + 800) + uVar16 * 200;
      lVar10 = *(long *)(lVar8 + 0x80);
      if ((ulong)(*(long *)(lVar8 + 0x88) - lVar10 >> 4) <= (ulong)(long)iVar11) goto LAB_013849f0;
      *(undefined1 (*) [16])(lVar10 + (long)iVar11 * 0x10) = auVar17;
      FUN_006cf0a0(local_70,&DAT_02697770);
      lVar8 = *(long *)(*(long *)(lVar6 + 0x218) + 0x290) + uVar16 * 0x4c0;
      plVar14 = *(long **)(lVar8 + 0xa8);
      plVar9 = *(long **)(lVar8 + 0xb0);
      plVar12 = plVar14;
      if (plVar14 == plVar9) {
        plVar13 = plVar9;
      }
      else {
        plVar13 = plVar14;
        if (*plVar14 != local_70._0_8_) {
          do {
            plVar13 = plVar13 + 4;
            if (plVar9 == plVar13) {
              plVar13 = plVar9;
              plVar12 = plVar9;
              goto LAB_013847a0;
            }
          } while (*plVar13 != local_70._0_8_);
          plVar12 = plVar13;
        }
      }
LAB_013847a0:
      iVar3 = (int)((ulong)((long)plVar12 - (long)plVar14) >> 5);
      if (plVar13 == plVar9) {
        iVar3 = -1;
      }
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      if (iVar3 != -1) {
        if ((ulong)((*(long *)(lVar6 + 0x328) - *(long *)(lVar6 + 800) >> 3) * -0x70a3d70a3d70a3d7)
            <= uVar16) goto LAB_013849f0;
        lVar8 = *(long *)(lVar6 + 800) + uVar16 * 200;
        lVar10 = *(long *)(lVar8 + 0x50);
        if ((ulong)(*(long *)(lVar8 + 0x58) - lVar10 >> 2) <= (ulong)(long)iVar3) goto LAB_013849f0;
        *(undefined4 *)(lVar10 + (long)iVar3 * 4) = 0x3e800000;
      }
    }
  }
  puVar1 = &DAT_02697788;
  if (*(char *)(param_4 + 1) != '\0') {
    puVar1 = &DAT_026977a0;
  }
  FUN_006cf0a0(local_70,puVar1);
  iVar3 = FUN_0072c700(lVar6 + 0x210,local_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (iVar3 != -1) {
    FUN_006cf0a0(local_70,&DAT_02697770);
    lVar8 = *(long *)(*(long *)(lVar6 + 0x218) + 0x290) + (long)iVar3 * 0x4c0;
    plVar12 = *(long **)(lVar8 + 0xa8);
    plVar9 = *(long **)(lVar8 + 0xb0);
    plVar14 = plVar12;
    if (plVar12 == plVar9) {
      plVar13 = plVar9;
    }
    else {
      plVar13 = plVar12;
      if (*plVar12 != local_70._0_8_) {
        do {
          plVar13 = plVar13 + 4;
          if (plVar9 == plVar13) {
            plVar13 = plVar9;
            plVar14 = plVar9;
            goto LAB_013848e8;
          }
        } while (*plVar13 != local_70._0_8_);
        plVar14 = plVar13;
      }
    }
LAB_013848e8:
    iVar11 = (int)((ulong)((long)plVar14 - (long)plVar12) >> 5);
    if (plVar13 == plVar9) {
      iVar11 = -1;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (iVar11 != -1) {
      if ((ulong)((*(long *)(lVar6 + 0x328) - *(long *)(lVar6 + 800) >> 3) * -0x70a3d70a3d70a3d7) <=
          (ulong)(long)iVar3) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar8 = *(long *)(lVar6 + 800) + (long)iVar3 * 200;
      lVar10 = *(long *)(lVar8 + 0x50);
      if ((ulong)(*(long *)(lVar8 + 0x58) - lVar10 >> 2) <= (ulong)(long)iVar11) {
LAB_013849f0:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      *(undefined4 *)(lVar10 + (long)iVar11 * 4) = 0x3e800000;
    }
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  return;
}


