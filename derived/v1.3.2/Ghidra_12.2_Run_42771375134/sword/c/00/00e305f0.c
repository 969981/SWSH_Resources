/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e305f0; name: FUN_00e305f0
 */


void FUN_00e305f0(long param_1,undefined4 param_2,long *param_3)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  
  lVar16 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  puVar4 = PTR_DAT_02710798;
  lVar14 = *(long *)PTR_DAT_02710798;
  lVar17 = *(long *)(lVar14 + 0x1e8);
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
    lVar14 = *(long *)puVar4;
  }
  lVar14 = *(long *)(lVar14 + 0x1d8);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  FUN_00e30330(param_1);
  lVar15 = *param_3;
  *(undefined4 *)(param_1 + 0x278) = param_2;
  *(long *)(param_1 + 0x270) = lVar15;
  uVar8 = FUN_01524d00(lVar17);
  uVar3 = *(uint *)(param_1 + 0x2a8);
  puVar1 = (uint *)(param_1 + 0x2a8);
  uVar9 = uVar3 & 0xfffffffd;
  *(undefined4 *)(param_1 + 0x2a0) = uVar8;
  *(uint *)(param_1 + 0x2a8) = uVar9;
  switch(*(undefined4 *)(param_1 + 0x278)) {
  case 0:
    lVar15 = *param_3;
    if (lVar15 < 0x50d7a1fbfcab977) {
      if (lVar15 == -0x739a02edf556a738) {
        uVar13 = 0x17f858ce49e01859;
      }
      else {
LAB_00e308c0:
        uVar13 = 0x48232cc4d6902eac;
      }
    }
    else if (lVar15 == 0x50d7a1fbfcab977) {
      uVar13 = 0xa78f27f77647bfb2;
    }
    else {
      if (lVar15 != 0x2979e3f7bf8a664f) goto LAB_00e308c0;
      uVar13 = 0x77d0f3d808a739c7;
    }
    break;
  case 1:
    *(undefined8 *)(param_1 + 0x288) = 0xa681cf4b2c30d013;
    uVar9 = uVar3 | 2;
    *(uint *)(param_1 + 0x2a8) = uVar9;
    goto switchD_00e306cc_default;
  case 2:
  case 3:
    uVar13 = 0xd83d0eed33ab2e05;
    break;
  default:
    goto switchD_00e306cc_default;
  }
  *(undefined8 *)(param_1 + 0x288) = uVar13;
switchD_00e306cc_default:
  *puVar1 = uVar9 & 0xfffffffe;
  uVar9 = FUN_00eced50();
  *puVar1 = *puVar1 & 0xfffffff8 | *puVar1 & 3 | (uVar9 & 1) << 2;
  uVar11 = FUN_01520ef0(lVar14,0x278,1);
  if ((uVar11 & 1) != 0) {
    *puVar1 = *puVar1 | 8;
  }
  uVar11 = FUN_01520ef0(lVar14,0x635,1);
  if ((uVar11 & 1) != 0) {
    *puVar1 = *puVar1 | 0x80;
  }
  plVar18 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar2 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (plVar18 == plVar2) {
      lVar15 = 0;
      uVar11 = FUN_00ea0740(0);
joined_r0x00e3081c:
      if ((uVar11 & 1) == 0) {
        uVar9 = FUN_00ea07b0(lVar15);
        uVar9 = (uVar9 & 1) << 4;
      }
      else {
        uVar9 = 0x10;
      }
      *puVar1 = *puVar1 & 0xffffffef | uVar9;
      uVar9 = thunk_FUN_00e46320(lVar15);
      *puVar1 = *puVar1 & 0xffffffc0 | *puVar1 & 0x1f | (uVar9 & 1) << 5;
      puVar5 = PTR_DAT_0271ed40;
      puVar4 = PTR_DAT_0271ed38;
      if ((uVar9 & 1) != 0) {
        plVar2 = *(long **)(lVar15 + 0x1f0);
        for (plVar18 = *(long **)(lVar15 + 0x1e8); plVar18 != plVar2; plVar18 = plVar18 + 1) {
          lVar15 = *plVar18;
          puVar19 = (undefined8 *)(lVar15 + 0x50);
          plVar12 = (long *)(**(code **)*puVar19)(puVar19);
          if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
            uVar13 = FUN_00e32f80();
            *(undefined8 *)puVar5 = uVar13;
            __cxa_guard_release(puVar4);
          }
          for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
            if (plVar12 == (long *)puVar5) {
              uVar11 = FUN_00debee0(lVar15);
              if ((uVar11 & 1) != 0) {
                *puVar1 = *puVar1 | 0x40;
              }
              goto LAB_00e30988;
            }
          }
        }
      }
LAB_00e30988:
      plVar18 = *(long **)(lVar16 + 0x58);
      if (plVar18 != (long *)0x0) {
        (**(code **)(plVar18[9] + 0x10))();
      }
      iVar10 = FUN_008849b0(plVar18,1);
      if (iVar10 != 6) {
        uVar13 = (**(code **)(*plVar18 + 0x50))(plVar18,iVar10);
        uVar7 = FUN_008783b0();
        *(undefined2 *)(param_1 + 0x290) = uVar7;
        uVar7 = FUN_008787f0(uVar13);
        *(undefined2 *)(param_1 + 0x292) = uVar7;
        uVar8 = FUN_0087ccf0(uVar13);
        *(undefined4 *)(param_1 + 0x298) = uVar8;
        uVar6 = FUN_0087cdb0(uVar13);
        *(undefined1 *)(param_1 + 0x294) = uVar6;
        uVar13 = FUN_0087cd00(uVar13);
        *(char *)(param_1 + 0x29c) = (char)uVar13;
        FUN_00e30a80(uVar13,puVar1,param_1 + 0x290);
      }
      if (plVar18 != (long *)0x0) {
        (**(code **)(plVar18[9] + 0x18))(plVar18 + 9);
      }
      if (lVar14 != 0) {
        (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
      }
      if (lVar17 != 0) {
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
      }
                    /* WARNING: Could not recover jumptable at 0x00e30a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
      return;
    }
    lVar15 = *plVar18;
    uVar11 = FUN_015b5320(lVar15 + 0x50);
    if (((uVar11 & 1) != 0) &&
       (uVar11 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar11 & 1) == 0)) {
      uVar11 = FUN_00ea0740(lVar15);
      goto joined_r0x00e3081c;
    }
    plVar18 = plVar18 + 1;
  } while( true );
}


