/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e82cf0; name: FUN_00e82cf0
 */


long FUN_00e82cf0(long param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  ulong *puVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined4 local_a8 [2];
  long local_a0;
  undefined4 *local_98;
  undefined4 *local_90;
  long *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  uVar13 = FUN_00e84680(0,0,0,0,0,0,0x3f800000,0x3f800000,*(undefined8 *)(param_1 + 0x78),*param_2,
                        0xcbf29ce484222645,0);
  puVar10 = PTR_DAT_02710860;
  local_88 = *(long **)(param_1 + 8);
  local_98 = (undefined4 *)0x0;
  local_90 = (undefined4 *)0x0;
  local_a0 = 0;
  local_78 = 0;
  uStack_80 = 0;
  lVar18 = param_2[4];
  if (param_2[5] != lVar18) {
    uVar23 = 0;
    uVar22 = 1;
    do {
      puVar9 = (ulong *)(lVar18 + uVar23 * 0x10);
      uVar24 = puVar9[1];
      uVar23 = *puVar9;
      lVar18 = *(long *)(param_1 + 0x78);
      iVar6 = *(int *)(lVar18 + 0x20);
      *(undefined1 *)(lVar18 + 0x46) = 1;
      iVar5 = *(int *)(lVar18 + 0x30);
      iVar4 = *(int *)(lVar18 + 0x28);
      FUN_00dae220(uVar24 & 0xffffffff,0,lVar18,8);
      FUN_00dae220(uVar23 >> 0x20,0,lVar18,6);
      FUN_00dae220(uVar23,0,lVar18,4);
      local_a8[0] = FUN_00dae710(lVar18,(iVar6 - iVar5) + iVar4);
      plVar12 = local_88;
      puVar11 = local_98;
      if (local_98 == local_90) {
        FUN_00e84e90(&local_a0,local_a8);
      }
      else {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)puVar10);
        if (0xf < *(ulong *)(lVar18 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar12;
        *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
        *puVar11 = local_a8[0];
        *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
        local_98 = local_98 + 1;
      }
      lVar18 = param_2[4];
      bVar1 = uVar22 < (ulong)(param_2[5] - lVar18 >> 4);
      uVar23 = uVar22;
      uVar22 = (ulong)((int)uVar22 + 1);
    } while (bVar1);
  }
  lVar18 = local_a0;
  uVar19 = param_2[1];
  lVar21 = *(long *)(param_1 + 0x78);
  uVar24 = (long)local_98 - local_a0;
  cVar7 = *(char *)(param_2 + 3);
  uVar23 = (long)uVar24 >> 2;
  uVar2 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined4 *)((long)param_2 + 0x14);
  FUN_00daf4a0(lVar21,uVar23,4);
  uVar22 = uVar24;
  do {
    if (uVar22 == 0) {
      *(undefined1 *)(lVar21 + 0x46) = 0;
      uVar14 = FUN_00daec30(lVar21,uVar24 >> 2);
      uVar23 = FUN_00e84c40(lVar21,uVar13,uVar19,uVar2,uVar3,cVar7 != '\0',uVar14);
      lVar18 = *(long *)(param_1 + 0x78);
      lVar21 = *(long *)(lVar18 + 0x30);
      iVar6 = *(int *)(lVar18 + 0x20);
      iVar5 = *(int *)(lVar18 + 0x28);
      if (local_a0 != 0) {
        local_98 = (undefined4 *)local_a0;
        (**(code **)(*local_88 + 0x18))(local_88,local_a0,(long)local_90 - local_a0,4);
      }
      return (lVar21 + (ulong)(uint)((iVar6 - (int)lVar21) + iVar5)) - (uVar23 & 0xffffffff);
    }
    uVar23 = uVar23 - 1;
    iVar6 = *(int *)(lVar18 + uVar23 * 4);
    if (*(ulong *)(lVar21 + 0x48) < 4) {
      *(undefined8 *)(lVar21 + 0x48) = 4;
    }
    lVar17 = *(long *)(lVar21 + 0x30);
    uVar8 = -((*(int *)(lVar21 + 0x20) - (int)lVar17) + *(int *)(lVar21 + 0x28));
    uVar22 = (ulong)uVar8 & 3;
    if ((ulong)(lVar17 - *(long *)(lVar21 + 0x38)) < uVar22) {
      FUN_00dae400(lVar21,uVar22);
      puVar15 = (undefined1 *)(*(long *)(lVar21 + 0x30) - uVar22);
      *(undefined1 **)(lVar21 + 0x30) = puVar15;
      *puVar15 = 0;
joined_r0x00e82f5c:
      if (uVar22 != 1) {
        uVar8 = (int)uVar22 - 1;
        uVar16 = (ulong)uVar8 & 7;
        if (uVar22 - 2 < 7) {
          lVar20 = 1;
        }
        else {
          lVar17 = 8;
          do {
            lVar20 = lVar17;
            *(undefined1 *)(*(long *)(lVar21 + 0x30) + lVar20 + -7) = 0;
            *(undefined1 *)(*(long *)(lVar21 + 0x30) + lVar20 + -6) = 0;
            *(undefined1 *)(*(long *)(lVar21 + 0x30) + lVar20 + -5) = 0;
            *(undefined1 *)(*(long *)(lVar21 + 0x30) + lVar20 + -4) = 0;
            *(undefined1 *)(*(long *)(lVar21 + 0x30) + lVar20 + -3) = 0;
            *(undefined1 *)(*(long *)(lVar21 + 0x30) + lVar20 + -2) = 0;
            *(undefined1 *)(*(long *)(lVar21 + 0x30) + lVar20 + -1) = 0;
            *(undefined1 *)(*(long *)(lVar21 + 0x30) + lVar20) = 0;
            lVar17 = lVar20 + 8;
          } while (((uVar16 + 1) - uVar22) + lVar20 + 8 != 8);
          lVar20 = lVar20 + 1;
        }
        if ((uVar8 & 7) != 0) {
          lVar17 = -uVar16;
          do {
            *(undefined1 *)(*(long *)(lVar21 + 0x30) + lVar20) = 0;
            lVar20 = lVar20 + 1;
            lVar17 = lVar17 + 1;
          } while (lVar17 != 0);
        }
      }
    }
    else {
      *(undefined1 **)(lVar21 + 0x30) = (undefined1 *)(lVar17 - uVar22);
      if ((uVar8 & 3) != 0) {
        *(undefined1 *)(lVar17 - uVar22) = 0;
        goto joined_r0x00e82f5c;
      }
    }
    FUN_00daec30(lVar21,(4 - iVar6) +
                        (*(int *)(lVar21 + 0x20) - *(int *)(lVar21 + 0x30)) +
                        *(int *)(lVar21 + 0x28));
    uVar22 = uVar23;
  } while( true );
}


