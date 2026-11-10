/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047fc80; name: FUN_0047fc80
 */


uint FUN_0047fc80(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 auStack_48 [4];
  undefined2 local_44 [2];
  
  lVar4 = *(long *)(param_2 + 0x88);
  if ((lVar4 == 0) || (plVar7 = *(long **)(lVar4 + 0x18), plVar7 == (long *)0x0)) {
    uVar3 = 2;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x38);
    if (iVar1 == 0) {
      uVar3 = *(uint *)(plVar7 + 1);
    }
    else {
      iVar2 = -iVar1;
      uVar8 = (ulong)(iVar1 - 1);
      do {
        if (((uint)uVar8 < 0x20) && ((1L << (uVar8 & 0x3f) & (ulong)*(uint *)(param_2 + 0x7c)) != 0)
           ) break;
        *(uint *)(param_2 + 0x38) = (uint)uVar8;
        iVar2 = iVar2 + 1;
        uVar8 = uVar8 - 1;
      } while (iVar2 != 0);
      plVar7 = *(long **)(lVar4 + 0x18);
      uVar3 = *(uint *)(plVar7 + 1);
    }
    local_44[0] = 0;
    if (uVar3 != 0) {
      local_44[0] = 0;
      puVar5 = (undefined8 *)(lVar4 + 0x18);
      do {
        while( true ) {
          lVar4 = *plVar7 + (ulong)uVar3 * 0x28;
          puVar9 = (undefined8 *)(lVar4 + -0x28);
          if (*(long *)(lVar4 + -0x10) != 0) break;
          plVar7 = (long *)FUN_00492d30(*puVar9,*(undefined8 *)(param_2 + 0x10),local_44,auStack_48,
                                        lVar4 + -0x20,lVar4 + -0x18);
          if (plVar7 != (long *)0x0) {
            *(undefined2 *)(param_2 + 0x38 + (ulong)(*(int *)(param_2 + 0x38) - 1) * 2 + 4) =
                 local_44[0];
            lVar4 = plVar7[2];
            (**(code **)(*plVar7 + 0x18))();
            iVar1 = FUN_00493320(*puVar9);
            local_80 = *(undefined8 *)(param_2 + 0x10);
            local_78 = *(undefined4 *)(param_2 + 0x34);
            local_70 = 0;
            local_68 = 0xff;
            local_60 = 0xff;
            local_58 = 0;
            fVar10 = (float)FUN_00493330(*puVar9,&local_80);
            if (((int)lVar4 != 0) &&
               (plVar7 = (long *)FUN_0047f2d0(*(undefined8 *)(param_2 + 0x88),param_2,(int)lVar4),
               plVar7 != (long *)0x0)) {
              iVar2 = FUN_0047f560(param_1);
              if (iVar2 == 2) {
                uVar6 = 1;
              }
              else {
                uVar8 = FUN_004881d0(param_1);
                uVar6 = 2;
                if ((uVar8 & 1) == 0) {
                  uVar6 = 0;
                }
              }
              FUN_00441c50(plVar7,uVar6,*(undefined8 *)(param_2 + 0xa0),param_2 + 0x98);
              FUN_00441d30(plVar7,*(long *)(param_2 + 0x88) + 0x28);
              iVar2 = (uint)*(ushort *)PTR_DAT_02712ac0 * 10;
              if ((iVar1 == 5) || (iVar1 == 3)) {
                dVar11 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_02712b38);
                dVar11 = (double)fVar10 * DAT_01cd5288 * dVar11;
                dVar12 = 0.5;
                if (dVar11 <= 0.0) {
                  dVar12 = -0.5;
                }
                iVar1 = (int)(dVar12 + dVar11);
                if (iVar2 <= iVar1) {
                  iVar2 = iVar1;
                }
              }
              uVar3 = FUN_0047f3f0(*(undefined8 *)(param_2 + 0x88),param_2,iVar2,plVar7);
              (**(code **)(*plVar7 + 0x18))(plVar7);
              if ((uVar3 | 2) == 3) goto LAB_0047fef4;
              goto LAB_0047fee0;
            }
            goto LAB_0047fed0;
          }
          iVar1 = *(int *)(param_2 + 0x38);
          *(int *)(param_2 + 0x38) = iVar1 + -1;
          if (iVar1 + -1 != 0) {
            uVar8 = (ulong)(iVar1 - 2);
            iVar1 = 1 - iVar1;
            do {
              if (((uint)uVar8 < 0x20) &&
                 ((1L << (uVar8 & 0x3f) & (ulong)*(uint *)(param_2 + 0x7c)) != 0)) break;
              *(uint *)(param_2 + 0x38) = (uint)uVar8;
              uVar8 = uVar8 - 1;
              iVar1 = iVar1 + 1;
            } while (iVar1 != 0);
          }
          plVar7 = *(long **)(*(long *)(param_2 + 0x88) + 0x18);
          FUN_0045b3e0(*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x28 + -0x28);
          *(int *)(plVar7 + 1) = (int)plVar7[1] + -1;
          puVar5 = (undefined8 *)(*(long *)(param_2 + 0x88) + 0x18);
          plVar7 = (long *)*puVar5;
          uVar3 = *(uint *)(plVar7 + 1);
          if (uVar3 == 0) goto LAB_0047fed0;
        }
        FUN_0047a310(*(long *)(lVar4 + -0x10),*(undefined8 *)(lVar4 + -8),puVar5);
        plVar7 = *(long **)(*(long *)(param_2 + 0x88) + 0x18);
        FUN_0045b3e0(*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x28 + -0x28);
        *(int *)(plVar7 + 1) = (int)plVar7[1] + -1;
        if (*(long *)(*(long *)(param_2 + 0x88) + 0x18) == 0) {
          uVar3 = 3;
          goto LAB_0047fef4;
        }
        puVar5 = (undefined8 *)(*(long *)(param_2 + 0x88) + 0x18);
        plVar7 = (long *)*puVar5;
        uVar3 = *(uint *)(plVar7 + 1);
      } while (uVar3 != 0);
    }
LAB_0047fed0:
    uVar3 = 2;
LAB_0047fee0:
    if (*(long *)(*(long *)(param_2 + 0x88) + 0x18) != 0) {
      *(undefined8 *)(*(long *)(param_2 + 0x88) + 0x18) = 0;
      FUN_0045b680();
    }
LAB_0047fef4:
    if (uVar3 == 3) {
      uVar3 = 1;
    }
  }
  return uVar3;
}


