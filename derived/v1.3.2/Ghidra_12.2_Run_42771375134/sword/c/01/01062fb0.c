/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01062fb0; name: FUN_01062fb0
 */


void FUN_01062fb0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long local_98 [3];
  long local_80;
  undefined8 local_78;
  char *local_70;
  undefined8 local_68;
  
  local_78 = 0xa999e2634468c405;
  local_70 = "OnGameColor";
  local_68 = 0xb;
  iVar4 = (int)(*(long *)(param_1 + 0x328) - *(long *)(param_1 + 800) >> 3) * -0x3d70a3d7;
  if (0 < iVar4) {
    uVar10 = 0;
    do {
      FUN_006cf0a0(local_98,&local_78);
      lVar5 = *(long *)(*(long *)(param_1 + 0x218) + 0x290) + uVar10 * 0x4c0;
      plVar1 = *(long **)(lVar5 + 0xd8);
      plVar2 = *(long **)(lVar5 + 0xe0);
      plVar9 = plVar1;
      if (plVar1 == plVar2) {
        plVar8 = plVar2;
      }
      else {
        plVar8 = plVar1;
        if (*plVar1 != local_98[0]) {
          do {
            plVar8 = plVar8 + 4;
            if (plVar2 == plVar8) {
              plVar8 = plVar2;
              plVar9 = plVar2;
              goto LAB_010630b0;
            }
          } while (*plVar8 != local_98[0]);
          plVar9 = plVar8;
        }
      }
LAB_010630b0:
      iVar7 = (int)((ulong)((long)plVar9 - (long)plVar1) >> 5);
      if (plVar8 == plVar2) {
        iVar7 = -1;
      }
      if (local_80 != 0) {
        (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
        local_80 = 0;
      }
      if (iVar7 != -1) {
        if ((ulong)((*(long *)(param_1 + 0x328) - *(long *)(param_1 + 800) >> 3) *
                   -0x70a3d70a3d70a3d7) <= uVar10) {
LAB_01063154:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        lVar5 = *(long *)(param_1 + 800) + uVar10 * 200;
        uVar11 = *param_2;
        lVar6 = *(long *)(lVar5 + 0x80);
        if ((ulong)(*(long *)(lVar5 + 0x88) - lVar6 >> 4) <= (ulong)(long)iVar7) goto LAB_01063154;
        puVar3 = (undefined8 *)(lVar6 + (long)iVar7 * 0x10);
        puVar3[1] = param_2[1];
        *puVar3 = uVar11;
      }
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)iVar4);
  }
  return;
}


