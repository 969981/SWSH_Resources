/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004172f0; name: FUN_004172f0
 */


undefined8 FUN_004172f0(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  short sVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  char cVar10;
  char local_34 [4];
  
  uVar7 = (ulong)*(uint *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (*(uint *)(param_1 + 0x18) != 0) {
    lVar8 = *(long *)(param_1 + 0x10);
    plVar9 = *(long **)(lVar8 + uVar7 * 0x18 + -0x18);
    local_34[0] = '\x01';
    if (plVar9 != (long *)0x0) {
      do {
        uVar3 = FUN_00416e00(param_1,lVar8 + uVar7 * 0x18 + -0x18,local_34);
        cVar10 = local_34[0];
        if (local_34[0] == '\0') {
          plVar9 = *(long **)(plVar9[4] + (ulong)(uVar3 & 0xffff) * 8);
          uVar7 = (**(code **)(*plVar9 + 0x10))(plVar9);
          if ((uVar7 & 1) != 0) {
LAB_00417460:
            if (plVar9 == (long *)0x0) {
              return 2;
            }
            lVar8 = plVar9[4];
            *(int *)(param_1 + 0x20) = (int)lVar8;
            *(bool *)(param_1 + 0x28) = (int)lVar8 != 0;
            *(int *)(param_1 + 0x24) = (int)plVar9[2];
            sVar6 = *(short *)((long)plVar9 + 0x14);
            if (sVar6 == 0) {
              sVar6 = 0;
            }
            else if ((short)plVar9[3] != 0 || *(short *)((long)plVar9 + 0x16) != 0) {
              iVar4 = (int)*(short *)((long)plVar9 + 0x16) + (int)sVar6;
              iVar1 = (int)(short)iVar4;
              iVar2 = (int)(short)((short)plVar9[3] + sVar6);
              if (iVar4 < 1) {
                iVar1 = 1;
              }
              if (iVar2 != iVar1) {
                lVar8 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
                *(long *)PTR_DAT_02712b80 = lVar8;
                iVar2 = (1 - iVar1) + iVar2;
                sVar6 = 0;
                uVar7 = (ulong)lVar8 >> 0x21;
                if (iVar2 != 0) {
                  sVar6 = (short)((int)(uint)uVar7 / iVar2);
                }
                sVar6 = ((short)uVar7 - sVar6 * (short)iVar2) + (short)iVar1;
              }
            }
            *(short *)(param_1 + 0x42) = sVar6;
            return 1;
          }
          iVar4 = FUN_00416b70(param_1,plVar9);
          if (iVar4 != 1) {
            FUN_00416d00(param_1);
            return 2;
          }
          cVar10 = '\x01';
          local_34[0] = '\x01';
        }
        else {
          uVar3 = *(uint *)(param_1 + 0x18);
          lVar8 = *(long *)(param_1 + 0x10) + (ulong)uVar3 * 0x18;
          plVar9 = (long *)plVar9[1];
          if (((*(uint *)(*(long *)(lVar8 + -0x18) + 0x30) | 2) == 2) &&
             (plVar5 = *(long **)(lVar8 + -8), plVar5 != (long *)0x0)) {
            (**(code **)(*plVar5 + 0x10))();
            uVar3 = *(uint *)(param_1 + 0x18);
          }
          uVar3 = uVar3 - 1;
          *(uint *)(param_1 + 0x18) = uVar3;
          while( true ) {
            if (plVar9 == (long *)0x0) {
              return 2;
            }
            if ((*(uint *)(plVar9 + 6) | 2) == 2) goto joined_r0x00417448;
            lVar8 = *(long *)(param_1 + 0x10) + (ulong)uVar3 * 0x18;
            sVar6 = *(short *)(lVar8 + -0x10);
            if (sVar6 == 0) goto joined_r0x00417448;
            if (1 < sVar6) break;
            plVar9 = (long *)plVar9[1];
            if (((*(uint *)(*(long *)(lVar8 + -0x18) + 0x30) | 2) == 2) &&
               (*(long **)(lVar8 + -8) != (long *)0x0)) {
              (**(code **)(**(long **)(lVar8 + -8) + 0x10))();
              uVar3 = *(uint *)(param_1 + 0x18);
            }
            uVar3 = uVar3 - 1;
            *(uint *)(param_1 + 0x18) = uVar3;
          }
          *(short *)(lVar8 + -0x10) = sVar6 + -1;
        }
joined_r0x00417448:
        if ((plVar9 == (long *)0x0) || (cVar10 == '\0')) goto LAB_00417460;
        lVar8 = *(long *)(param_1 + 0x10);
        uVar7 = (ulong)*(uint *)(param_1 + 0x18);
      } while( true );
    }
  }
  return 2;
}


