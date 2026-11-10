/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0105be00; name: FUN_0105be00
 */


void FUN_0105be00(long param_1,long *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  int iVar14;
  
  if (*(long *)(param_1 + 0xa0) == 0) {
    plVar11 = *(long **)(param_1 + 8);
    puVar3 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x58,8);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar11;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    uVar5 = *(undefined8 *)(param_1 + 8);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    puVar3[2] = uVar5;
    puVar3[3] = 0;
    puVar3[7] = 0;
    puVar3[5] = 0;
    puVar3[6] = uVar5;
    *(undefined4 *)(puVar3 + 8) = 0;
    puVar3[9] = 0;
    *(undefined4 *)(puVar3 + 10) = 0x3f800000;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    plVar12 = *(long **)(param_1 + 0xa0);
    *(undefined8 **)(param_1 + 0xa0) = puVar3;
    if (plVar12 != (long *)0x0) {
      plVar9 = (long *)plVar12[5];
      while (plVar9 != (long *)0x0) {
        lVar4 = *plVar9;
        if (plVar9[5] != 0) {
          (**(code **)(*(long *)(plVar9[5] + 0x48) + 0x18))();
          plVar9[5] = 0;
        }
        (**(code **)(*(long *)plVar12[6] + 0x18))((long *)plVar12[6],plVar9,0x150,8);
        plVar9 = (long *)lVar4;
      }
      lVar4 = *plVar12;
      *plVar12 = 0;
      if (lVar4 != 0) {
        (**(code **)(*(long *)plVar12[2] + 0x18))((long *)plVar12[2],lVar4,plVar12[1] << 3,8);
      }
      (**(code **)(**(long **)(param_1 + 0xa8) + 0x18))
                (*(long **)(param_1 + 0xa8),plVar12,*(undefined8 *)(param_1 + 0xb0),
                 *(undefined8 *)(param_1 + 0xb8));
    }
    *(long **)(param_1 + 0xa8) = plVar11;
    *(undefined8 *)(param_1 + 0xb0) = 0x58;
    *(undefined8 *)(param_1 + 0xb8) = 8;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(lVar6 + 0x328) - *(long *)(lVar6 + 800);
  if (lVar4 != 0) {
    uVar13 = 0;
    uVar10 = 0;
    do {
      lVar8 = *(long *)(*(long *)(lVar6 + 0x218) + 0x290) + uVar13 * 0x4c0;
      plVar11 = *(long **)(lVar8 + 0xa8);
      plVar12 = *(long **)(lVar8 + 0xb0);
      if (plVar12 != plVar11) {
        plVar9 = plVar11;
        if (*plVar11 != *param_2) {
          do {
            plVar9 = plVar9 + 4;
            if (plVar12 == plVar9) goto LAB_0105c080;
          } while (*plVar9 != *param_2);
        }
        if (plVar9 != plVar12) {
          iVar14 = (int)((ulong)((long)plVar9 - (long)plVar11) >> 5);
          if (iVar14 != -1) {
            if ((ulong)((*(long *)(lVar6 + 0x328) - *(long *)(lVar6 + 800) >> 3) *
                       -0x70a3d70a3d70a3d7) <= uVar13) {
LAB_0105c0f4:
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            lVar6 = *(long *)(lVar6 + 800) + uVar13 * 200;
            uVar2 = ((long)plVar9 - (long)plVar11) * 0x8000000 >> 0x20;
            lVar8 = *(long *)(lVar6 + 0x50);
            if ((ulong)(*(long *)(lVar6 + 0x58) - lVar8 >> 2) <= uVar2) goto LAB_0105c0f4;
            uVar1 = *(undefined4 *)(lVar8 + uVar2 * 4);
            lVar6 = FUN_0105c100(*(undefined8 *)(param_1 + 0xa0),param_2);
            puVar7 = (undefined4 *)(lVar6 + (long)(int)uVar10 * 0xc);
            uVar10 = uVar10 + 1;
            *puVar7 = (int)uVar13;
            puVar7[1] = iVar14;
            puVar7[2] = uVar1;
            if (0x17 < uVar10) {
              return;
            }
          }
        }
      }
LAB_0105c080:
      uVar13 = uVar13 + 1;
      if ((ulong)((lVar4 >> 3) * -0x70a3d70a3d70a3d7) <= uVar13) goto code_r0x0105c08c;
      lVar6 = *(long *)(param_1 + 0x10);
    } while( true );
  }
  uVar10 = 0;
LAB_0105c09c:
  lVar4 = (long)(int)uVar10 * 0xc;
  iVar14 = 0x18 - uVar10;
  do {
    lVar6 = FUN_0105c100(*(undefined8 *)(param_1 + 0xa0),param_2);
    puVar3 = (undefined8 *)(lVar6 + lVar4);
    lVar4 = lVar4 + 0xc;
    iVar14 = iVar14 + -1;
    *puVar3 = 0xffffffffffffffff;
    *(undefined4 *)(puVar3 + 1) = 0;
  } while (iVar14 != 0);
  return;
code_r0x0105c08c:
  if (0x17 < uVar10) {
    return;
  }
  goto LAB_0105c09c;
}


