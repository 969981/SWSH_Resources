/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0079bf00; name: FUN_0079bf00
 */


ulong FUN_0079bf00(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x27;
  undefined8 uVar12;
  float fVar13;
  long local_b0;
  undefined1 local_a8;
  byte local_a7;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if (param_3 == 0) {
    uVar9 = 0xffffffff;
    goto LAB_0079c240;
  }
  nn::os::LockMutex((MutexType *)(param_3 + 0x168));
  FUN_019a5860(&local_a8);
  uStack_90 = *param_2;
  local_88 = param_2[1];
  uStack_80 = param_2[2];
  local_78 = param_2[3];
  uStack_70 = param_2[4];
  local_a8 = 1;
  local_a7 = local_a7 & 0xfe;
  local_a0 = param_1;
  local_98 = param_2;
  thunk_FUN_006fd800(&local_b0,&local_a8);
  lVar2 = local_b0;
  uVar9 = *(ulong *)(local_b0 + 0x58);
  local_b0 = 0;
  uVar10 = *(ulong *)(param_3 + 0xc0);
  plVar1 = (long *)(param_3 + 0xb8);
  iVar8 = (int)uVar9;
  uVar11 = (ulong)iVar8;
  if (uVar10 == 0) {
LAB_0079c05c:
    plVar4 = (long *)(**(code **)(**(long **)(param_3 + 0xe8) + 0x10))
                               (*(long **)(param_3 + 0xe8),0x20,8);
    if (plVar4 == (long *)0x0) {
      (**(code **)(**(long **)(param_3 + 0xe8) + 0xb8))();
    }
    uVar12 = *(undefined8 *)(param_3 + 0xe8);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar12;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    *(int *)(plVar4 + 2) = iVar8;
    plVar4[3] = lVar2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    *plVar4 = 0;
    plVar4[1] = uVar11;
    fVar13 = (float)(*(long *)(param_3 + 0x100) + 1);
    if ((uVar10 == 0) || (*(float *)(param_3 + 0x108) * (float)uVar10 < fVar13)) {
      if (uVar10 < 3) {
        uVar6 = 1;
      }
      else {
        uVar6 = (ulong)((uVar10 - 1 & uVar10) != 0);
      }
      uVar7 = (ulong)(fVar13 / *(float *)(param_3 + 0x108));
      uVar6 = uVar6 | uVar10 << 1;
      if (uVar7 <= uVar6) {
        uVar7 = uVar6;
      }
      FUN_0079db40(plVar1,uVar7);
      uVar10 = *(ulong *)(param_3 + 0xc0);
      if ((uVar10 - 1 & uVar10) == 0) {
        unaff_x27 = uVar10 - 1 & uVar11;
        plVar5 = *(long **)(*plVar1 + unaff_x27 * 8);
        goto joined_r0x0079c184;
      }
      if (uVar11 < uVar10) {
        plVar5 = *(long **)(*plVar1 + uVar11 * 8);
        unaff_x27 = uVar11;
        goto joined_r0x0079c184;
      }
      uVar6 = 0;
      if (uVar10 != 0) {
        uVar6 = uVar11 / uVar10;
      }
      unaff_x27 = uVar11 - uVar6 * uVar10;
      plVar5 = *(long **)(*plVar1 + unaff_x27 * 8);
      if (plVar5 == (long *)0x0) goto LAB_0079c19c;
LAB_0079c104:
      *plVar4 = *plVar5;
LAB_0079c204:
      *plVar5 = (long)plVar4;
    }
    else {
      plVar5 = *(long **)(*plVar1 + unaff_x27 * 8);
joined_r0x0079c184:
      if (plVar5 != (long *)0x0) goto LAB_0079c104;
LAB_0079c19c:
      plVar5 = (long *)(param_3 + 0xe0);
      *plVar4 = *plVar5;
      *plVar5 = (long)plVar4;
      *(long **)(*(long *)(param_3 + 0xb8) + unaff_x27 * 8) = plVar5;
      if (*plVar4 != 0) {
        uVar11 = *(ulong *)(*plVar4 + 8);
        if ((uVar10 - 1 & uVar10) == 0) {
          uVar11 = uVar11 & uVar10 - 1;
        }
        else if (uVar10 <= uVar11) {
          uVar6 = 0;
          if (uVar10 != 0) {
            uVar6 = uVar11 / uVar10;
          }
          uVar11 = uVar11 - uVar6 * uVar10;
        }
        plVar5 = (long *)(*plVar1 + uVar11 * 8);
        goto LAB_0079c204;
      }
    }
    *(long *)(param_3 + 0x100) = *(long *)(param_3 + 0x100) + 1;
  }
  else {
    uVar6 = uVar10 - 1;
    if ((uVar6 & uVar10) == 0) {
      unaff_x27 = uVar6 & uVar11;
      plVar4 = *(long **)(*plVar1 + unaff_x27 * 8);
      if (plVar4 != (long *)0x0) goto LAB_0079bfc8;
      goto LAB_0079c05c;
    }
    unaff_x27 = uVar11;
    if (uVar10 <= uVar11) {
      uVar7 = 0;
      if (uVar10 != 0) {
        uVar7 = uVar11 / uVar10;
      }
      unaff_x27 = uVar11 - uVar7 * uVar10;
    }
    plVar4 = *(long **)(*plVar1 + unaff_x27 * 8);
    if (plVar4 == (long *)0x0) goto LAB_0079c05c;
LAB_0079bfc8:
    if ((uVar6 & uVar10) == 0) {
      do {
        plVar4 = (long *)*plVar4;
        if ((plVar4 == (long *)0x0) || (plVar4[1] != uVar11 && (plVar4[1] & uVar6) != unaff_x27))
        goto LAB_0079c05c;
      } while ((int)plVar4[2] != iVar8);
    }
    else {
      do {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_0079c05c;
        uVar6 = plVar4[1];
        if (uVar6 != uVar11) {
          if (uVar10 <= uVar6) {
            uVar7 = 0;
            if (uVar10 != 0) {
              uVar7 = uVar6 / uVar10;
            }
            uVar6 = uVar6 - uVar7 * uVar10;
          }
          if (uVar6 != unaff_x27) goto LAB_0079c05c;
        }
      } while (*(int *)(plVar4 + 2) != iVar8);
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
  }
  local_a8 = 0;
  if (local_b0 != 0) {
    local_a8 = 0;
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    local_b0 = 0;
  }
  FUN_019a5880(&local_a8);
  nn::os::UnlockMutex((MutexType *)(param_3 + 0x168));
LAB_0079c240:
  return uVar9 & 0xffffffff;
}


