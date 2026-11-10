/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0105c3e0; name: FUN_0105c3e0
 */


void FUN_0105c3e0(long param_1,long *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 local_78;
  
  if (*(long *)(param_1 + 0xc0) == 0) {
    plVar11 = *(long **)(param_1 + 8);
    puVar4 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x58,8);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar11;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    uVar6 = *(undefined8 *)(param_1 + 8);
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 4) = 0;
    puVar4[2] = uVar6;
    puVar4[3] = 0;
    puVar4[7] = 0;
    puVar4[5] = 0;
    puVar4[6] = uVar6;
    *(undefined4 *)(puVar4 + 8) = 0;
    puVar4[9] = 0;
    *(undefined4 *)(puVar4 + 10) = 0x3f800000;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    plVar13 = *(long **)(param_1 + 0xc0);
    *(undefined8 **)(param_1 + 0xc0) = puVar4;
    if (plVar13 != (long *)0x0) {
      plVar9 = (long *)plVar13[5];
      while (plVar9 != (long *)0x0) {
        lVar5 = *plVar9;
        if (plVar9[5] != 0) {
          (**(code **)(*(long *)(plVar9[5] + 0x48) + 0x18))();
          plVar9[5] = 0;
        }
        (**(code **)(*(long *)plVar13[6] + 0x18))((long *)plVar13[6],plVar9,0x330,0x10);
        plVar9 = (long *)lVar5;
      }
      lVar5 = *plVar13;
      *plVar13 = 0;
      if (lVar5 != 0) {
        (**(code **)(*(long *)plVar13[2] + 0x18))((long *)plVar13[2],lVar5,plVar13[1] << 3,0x10);
      }
      (**(code **)(**(long **)(param_1 + 200) + 0x18))
                (*(long **)(param_1 + 200),plVar13,*(undefined8 *)(param_1 + 0xd0),
                 *(undefined8 *)(param_1 + 0xd8));
    }
    *(long **)(param_1 + 200) = plVar11;
    *(undefined8 *)(param_1 + 0xd0) = 0x58;
    *(undefined8 *)(param_1 + 0xd8) = 8;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar7 + 0x328) - *(long *)(lVar7 + 800);
  if (lVar5 != 0) {
    uVar14 = 0;
    uVar12 = 0;
    do {
      lVar8 = *(long *)(*(long *)(lVar7 + 0x218) + 0x290) + uVar14 * 0x4c0;
      plVar11 = *(long **)(lVar8 + 0xd8);
      plVar13 = *(long **)(lVar8 + 0xe0);
      if (plVar13 != plVar11) {
        plVar9 = plVar11;
        if (*plVar11 != *param_2) {
          do {
            plVar9 = plVar9 + 4;
            if (plVar13 == plVar9) goto LAB_0105c66c;
          } while (*plVar9 != *param_2);
        }
        if (plVar9 != plVar13) {
          iVar15 = (int)((ulong)((long)plVar9 - (long)plVar11) >> 5);
          if (iVar15 != -1) {
            if ((ulong)((*(long *)(lVar7 + 0x328) - *(long *)(lVar7 + 800) >> 3) *
                       -0x70a3d70a3d70a3d7) <= uVar14) {
LAB_0105c6f4:
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            lVar7 = *(long *)(lVar7 + 800) + uVar14 * 200;
            lVar8 = *(long *)(lVar7 + 0x80);
            uVar3 = ((long)plVar9 - (long)plVar11) * 0x8000000 >> 0x20;
            if ((ulong)(*(long *)(lVar7 + 0x88) - lVar8 >> 4) <= uVar3) goto LAB_0105c6f4;
            puVar4 = (undefined8 *)(lVar8 + uVar3 * 0x10);
            uVar16 = puVar4[1];
            uVar6 = *puVar4;
            lVar7 = FUN_0105c700(*(undefined8 *)(param_1 + 0xc0),param_2);
            iVar10 = (int)uVar12;
            uVar1 = iVar10 + 1;
            uVar12 = (ulong)uVar1;
            puVar2 = (undefined4 *)(lVar7 + (long)iVar10 * 0x20);
            *puVar2 = (int)uVar14;
            puVar2[1] = iVar15;
            *(undefined8 *)(puVar2 + 6) = uVar16;
            *(undefined8 *)(puVar2 + 4) = uVar6;
            if (0x17 < uVar1) {
              return;
            }
          }
        }
      }
LAB_0105c66c:
      uVar14 = uVar14 + 1;
      if ((ulong)((lVar5 >> 3) * -0x70a3d70a3d70a3d7) <= uVar14) goto code_r0x0105c678;
      lVar7 = *(long *)(param_1 + 0x10);
    } while( true );
  }
  uVar12 = 0;
LAB_0105c688:
  uVar14 = -(uVar12 >> 0x1f) & 0xffffffe000000000 | uVar12 << 5;
  iVar15 = 0x18 - (int)uVar12;
  do {
    lVar5 = FUN_0105c700(*(undefined8 *)(param_1 + 0xc0),param_2);
    puVar4 = (undefined8 *)(lVar5 + uVar14);
    uVar14 = uVar14 + 0x20;
    iVar15 = iVar15 + -1;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = 0xffffffffffffffff;
    puVar4[1] = local_78;
  } while (iVar15 != 0);
  return;
code_r0x0105c678:
  if (0x17 < (uint)uVar12) {
    return;
  }
  goto LAB_0105c688;
}


