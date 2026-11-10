/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0105b800; name: FUN_0105b800
 */


void FUN_0105b800(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  int iVar14;
  
  if (*(long *)(param_1 + 0x80) == 0) {
    plVar11 = *(long **)(param_1 + 8);
    puVar1 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x58,8);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar11;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    uVar3 = *(undefined8 *)(param_1 + 8);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1[2] = uVar3;
    puVar1[3] = 0;
    puVar1[7] = 0;
    puVar1[5] = 0;
    puVar1[6] = uVar3;
    *(undefined4 *)(puVar1 + 8) = 0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 10) = 0x3f800000;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    plVar12 = *(long **)(param_1 + 0x80);
    *(undefined8 **)(param_1 + 0x80) = puVar1;
    if (plVar12 != (long *)0x0) {
      plVar9 = (long *)plVar12[5];
      while (plVar9 != (long *)0x0) {
        lVar2 = *plVar9;
        if (plVar9[5] != 0) {
          (**(code **)(*(long *)(plVar9[5] + 0x48) + 0x18))();
          plVar9[5] = 0;
        }
        (**(code **)(*(long *)plVar12[6] + 0x18))((long *)plVar12[6],plVar9,0x150,8);
        plVar9 = (long *)lVar2;
      }
      lVar2 = *plVar12;
      *plVar12 = 0;
      if (lVar2 != 0) {
        (**(code **)(*(long *)plVar12[2] + 0x18))((long *)plVar12[2],lVar2,plVar12[1] << 3,8);
      }
      (**(code **)(**(long **)(param_1 + 0x88) + 0x18))
                (*(long **)(param_1 + 0x88),plVar12,*(undefined8 *)(param_1 + 0x90),
                 *(undefined8 *)(param_1 + 0x98));
    }
    *(long **)(param_1 + 0x88) = plVar11;
    *(undefined8 *)(param_1 + 0x90) = 0x58;
    *(undefined8 *)(param_1 + 0x98) = 8;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(lVar4 + 0x328) - *(long *)(lVar4 + 800);
  if (lVar2 != 0) {
    uVar13 = 0;
    uVar10 = 0;
    do {
      lVar8 = *(long *)(*(long *)(lVar4 + 0x218) + 0x290) + uVar13 * 0x4c0;
      plVar11 = *(long **)(lVar8 + 0x78);
      plVar12 = *(long **)(lVar8 + 0x80);
      if (plVar12 != plVar11) {
        plVar9 = plVar11;
        if (*plVar11 != *param_2) {
          do {
            plVar9 = plVar9 + 4;
            if (plVar12 == plVar9) goto LAB_0105ba9c;
          } while (*plVar9 != *param_2);
        }
        if (plVar9 != plVar12) {
          uVar7 = (long)plVar9 - (long)plVar11;
          iVar14 = (int)(uVar7 >> 5);
          if (iVar14 != -1) {
            if ((ulong)((*(long *)(lVar4 + 0x328) - *(long *)(lVar4 + 800) >> 3) *
                       -0x70a3d70a3d70a3d7) <= uVar13) {
LAB_0105bb10:
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            lVar4 = *(long *)(lVar4 + 800) + uVar13 * 200;
            uVar5 = (long)(uVar7 * 0x8000000) >> 0x20;
            if (*(ulong *)(lVar4 + 0x28) <= uVar5) goto LAB_0105bb10;
            uVar5 = *(ulong *)(*(long *)(lVar4 + 0x20) + (uVar5 >> 3 & 0x1ffffffffffffff8));
            lVar4 = FUN_0105bb20(*(undefined8 *)(param_1 + 0x80),param_2);
            puVar6 = (undefined4 *)(lVar4 + (long)(int)uVar10 * 0xc);
            uVar10 = uVar10 + 1;
            *puVar6 = (int)uVar13;
            puVar6[1] = iVar14;
            *(bool *)(puVar6 + 2) = (uVar5 & 1L << ((uVar7 & 0x1fffffffff) >> 5 & 0x3f)) != 0;
            if (0x17 < uVar10) {
              return;
            }
          }
        }
      }
LAB_0105ba9c:
      uVar13 = uVar13 + 1;
      if ((ulong)((lVar2 >> 3) * -0x70a3d70a3d70a3d7) <= uVar13) goto code_r0x0105baa8;
      lVar4 = *(long *)(param_1 + 0x10);
    } while( true );
  }
  uVar10 = 0;
LAB_0105bab8:
  lVar2 = (long)(int)uVar10 * 0xc;
  iVar14 = 0x18 - uVar10;
  do {
    lVar4 = FUN_0105bb20(*(undefined8 *)(param_1 + 0x80),param_2);
    puVar1 = (undefined8 *)(lVar4 + lVar2);
    lVar2 = lVar2 + 0xc;
    iVar14 = iVar14 + -1;
    *puVar1 = 0xffffffffffffffff;
    *(undefined1 *)(puVar1 + 1) = 0;
  } while (iVar14 != 0);
  return;
code_r0x0105baa8:
  if (0x17 < uVar10) {
    return;
  }
  goto LAB_0105bab8;
}


