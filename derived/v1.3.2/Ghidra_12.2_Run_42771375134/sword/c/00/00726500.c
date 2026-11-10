/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00726500; name: FUN_00726500
 */


void FUN_00726500(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long local_80 [3];
  long local_68;
  
  if ((0.0 <= *(float *)(param_1 + 0x4c4)) &&
     (lVar3 = *(long *)(param_1 + 0x328) - *(long *)(param_1 + 800), lVar3 != 0)) {
    uVar12 = 0;
    do {
      FUN_006cf0a0(local_80,&DAT_0260b880);
      lVar5 = *(long *)(*(long *)(param_1 + 0x218) + 0x290) + uVar12 * 0x4c0;
      plVar1 = *(long **)(lVar5 + 0xa8);
      plVar2 = *(long **)(lVar5 + 0xb0);
      plVar11 = plVar1;
      if (plVar1 == plVar2) {
        plVar10 = plVar2;
      }
      else {
        plVar10 = plVar1;
        if (*plVar1 != local_80[0]) {
          do {
            plVar10 = plVar10 + 4;
            if (plVar2 == plVar10) {
              plVar10 = plVar2;
              plVar11 = plVar2;
              goto LAB_007265f0;
            }
          } while (*plVar10 != local_80[0]);
          plVar11 = plVar10;
        }
      }
LAB_007265f0:
      iVar6 = (int)((ulong)((long)plVar11 - (long)plVar1) >> 5);
      if (plVar10 == plVar2) {
        iVar6 = -1;
      }
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      if (-1 < iVar6) {
        FUN_006cf0a0(local_80,&DAT_0260b898);
        lVar5 = *(long *)(*(long *)(param_1 + 0x218) + 0x290) + uVar12 * 0x4c0;
        plVar1 = *(long **)(lVar5 + 0xa8);
        plVar2 = *(long **)(lVar5 + 0xb0);
        plVar11 = plVar1;
        if (plVar1 == plVar2) {
          plVar10 = plVar2;
        }
        else {
          plVar10 = plVar1;
          if (*plVar1 != local_80[0]) {
            do {
              plVar10 = plVar10 + 4;
              if (plVar2 == plVar10) {
                plVar10 = plVar2;
                plVar11 = plVar2;
                goto LAB_00726690;
              }
            } while (*plVar10 != local_80[0]);
            plVar11 = plVar10;
          }
        }
LAB_00726690:
        iVar7 = (int)((ulong)((long)plVar11 - (long)plVar1) >> 5);
        if (plVar10 == plVar2) {
          iVar7 = -1;
        }
        if (local_68 != 0) {
          (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
          local_68 = 0;
        }
        lVar5 = *(long *)(param_1 + 800);
        uVar8 = (*(long *)(param_1 + 0x328) - lVar5 >> 3) * -0x70a3d70a3d70a3d7;
        if (-1 < iVar7) {
          if (uVar8 <= uVar12) goto LAB_00726764;
          lVar4 = lVar5 + uVar12 * 200;
          lVar9 = *(long *)(lVar4 + 0x50);
          if ((ulong)(*(long *)(lVar4 + 0x58) - lVar9 >> 2) <= (ulong)(long)iVar7)
          goto LAB_00726764;
          if (*(float *)(lVar9 + (long)iVar7 * 4) == 0.0) goto LAB_00726734;
        }
        if (uVar8 <= uVar12) {
LAB_00726764:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        lVar5 = lVar5 + uVar12 * 200;
        lVar4 = *(long *)(lVar5 + 0x50);
        if ((ulong)(*(long *)(lVar5 + 0x58) - lVar4 >> 2) <= (ulong)(long)iVar6) goto LAB_00726764;
        *(undefined4 *)(lVar4 + (long)iVar6 * 4) = *(undefined4 *)(param_1 + 0x4c4);
      }
LAB_00726734:
      uVar12 = uVar12 + 1;
    } while (uVar12 < (ulong)((lVar3 >> 3) * -0x70a3d70a3d70a3d7));
  }
  return;
}


