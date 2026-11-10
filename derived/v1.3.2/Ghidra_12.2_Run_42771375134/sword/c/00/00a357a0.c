/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a357a0; name: FUN_00a357a0
 */


void FUN_00a357a0(long param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  code *pcVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined4 uVar12;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long local_a0;
  long *plStack_98;
  undefined4 local_90;
  long local_38;
  
  switch(param_2) {
  case 0:
    lVar9 = *(long *)(param_1 + 0x5d0);
    break;
  case 1:
    lVar9 = *(long *)(param_1 + 0x5d0) + 0x400;
    break;
  case 2:
    lVar9 = *(long *)(param_1 + 0x5d0) + 0xa00;
    break;
  case 3:
    uVar7 = FUN_00a1a880(*(long *)(param_1 + 0x5d0) + 0x600,param_3);
    if ((uVar7 & 1) != 0) {
      uVar4 = *(uint *)(param_1 + 0x5f4);
      uVar1 = uVar4 + 1;
      if (uVar1 < 3) {
        lVar9 = (long)(int)uVar1;
        bVar5 = param_3 <= *(uint *)(&DAT_021547a0 + (long)(int)uVar1 * 0x30);
        if (uVar1 != 2) {
          bVar5 = *(uint *)(&DAT_021547a0 + (long)(int)uVar1 * 0x30) == param_3;
        }
        lVar2 = lVar9 + 1;
        uVar8 = uVar1;
        if (!bVar5) {
          uVar8 = uVar4;
        }
        if ((uint)lVar2 < 3) {
          bVar5 = param_3 <= *(uint *)(&DAT_021547a0 + lVar2 * 0x30);
          if (lVar2 != 2) {
            bVar5 = *(uint *)(&DAT_021547a0 + lVar2 * 0x30) == param_3;
          }
          uVar3 = (uint)lVar2;
          if (!bVar5) {
            uVar3 = uVar8;
          }
          uVar10 = (uint)(lVar9 + 2);
          uVar8 = uVar3;
          if (uVar10 < 3) {
            bVar5 = param_3 <= *(uint *)(&DAT_021547a0 + (lVar9 + 2) * 0x30);
            if (uVar1 != 0) {
              bVar5 = *(uint *)(&DAT_021547a0 + (lVar9 + 2) * 0x30) == param_3;
            }
            lVar9 = lVar9 + 3;
            if (!bVar5) {
              uVar10 = uVar3;
            }
            uVar8 = uVar10;
            if ((uint)lVar9 < 3) {
              bVar5 = param_3 <= *(uint *)(&DAT_021547a0 + lVar9 * 0x30);
              if (lVar9 != 2) {
                bVar5 = *(uint *)(&DAT_021547a0 + lVar9 * 0x30) == param_3;
              }
              uVar8 = (uint)lVar9;
              if (!bVar5) {
                uVar8 = uVar10;
              }
            }
          }
        }
        if (uVar4 != uVar8) {
          lVar2 = (long)(int)uVar8 * 0x30;
          *(uint *)(param_1 + 0x5f4) = uVar8;
          lVar11 = *(long *)(&DAT_021547b8 + lVar2);
          uVar12 = NEON_ucvtf(*(undefined4 *)(&DAT_021547b0 + lVar2));
          local_c0 = *(undefined1 **)(&DAT_021547a8 + lVar2);
          lVar9 = param_1 + 0x100;
          FUN_00ffd510(uVar12,lVar9,&local_c0);
          if (lVar11 != 0) {
            local_c0 = &LAB_00a362e0;
            local_b8 = FUN_00a363a0;
            local_b0 = &LAB_00a363b0;
            local_90 = 0;
            local_a8 = &LAB_00a363d0;
            local_a0 = lVar9;
            plStack_98 = (long *)(&DAT_021547b8 + lVar2);
            local_38 = lVar11;
            FUN_00ffd120(lVar9,&local_38,&local_c0);
            pcVar6 = local_b8;
            if (local_b8 != (code *)0x0) {
              local_b0 = (undefined1 *)0x0;
              local_a8 = (undefined1 *)0x0;
              local_c0 = (undefined1 *)0x0;
              local_b8 = (code *)0x0;
              (*pcVar6)(&local_a0);
            }
          }
        }
      }
      FUN_00ffd840(param_1 + 0x100,*(undefined8 *)(param_1 + 0x5f8));
    }
  default:
    return;
  }
  FUN_00a1a880(lVar9,param_3);
  return;
}


