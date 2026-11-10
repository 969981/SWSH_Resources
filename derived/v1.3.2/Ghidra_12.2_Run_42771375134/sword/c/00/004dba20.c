/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004dba20; name: FUN_004dba20
 */


/* WARNING: Removing unreachable block (ram,0x004dbda4) */

void FUN_004dba20(long *param_1,uint param_2)

{
  long *plVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 local_98;
  undefined2 local_90;
  undefined1 local_8e;
  long *local_88;
  long *local_80 [2];
  undefined8 local_70;
  undefined4 local_68;
  
  if (param_2 == 0xffffffff) {
    return;
  }
  iVar6 = param_2 + 1;
  if (3 < iVar6) {
    bVar3 = false;
    plVar12 = param_1 + 0x34;
    uVar4 = param_2 - 1;
    plVar9 = (long *)param_1[(long)(int)uVar4 + 0x6a];
    goto joined_r0x004dbaa0;
  }
  lVar11 = (long)iVar6 + 0x6a;
  do {
    plVar9 = (long *)param_1[lVar11];
    if (plVar9 != (long *)0x0) {
      bVar3 = true;
      goto LAB_004dbab0;
    }
    lVar10 = lVar11 + -0x6a;
    lVar11 = lVar11 + 1;
  } while (lVar10 < 3);
  bVar3 = false;
  plVar9 = (long *)0x0;
LAB_004dbab0:
  plVar12 = param_1 + 0x34;
  uVar4 = param_2;
  if (plVar9 != (long *)0x0) {
    plVar12 = plVar9;
  }
  do {
    uVar4 = uVar4 - 1;
    if ((int)uVar4 < 0) {
      bVar8 = false;
      plVar9 = (long *)0x0;
      goto LAB_004dbae8;
    }
    plVar9 = (long *)param_1[(long)(int)uVar4 + 0x6a];
joined_r0x004dbaa0:
  } while (plVar9 == (long *)0x0);
  bVar8 = true;
LAB_004dbae8:
  plVar1 = param_1 + 0x14;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9;
  }
  lVar10 = *(long *)(param_1[0xe] + 0x18);
  local_68 = *(uint *)(lVar10 + 0x210);
  lVar11 = *(long *)(lVar10 + 0x208);
  if (bVar8) {
    local_70 = lVar11;
    uVar4 = (**(code **)(*plVar1 + 0x88))(plVar1);
    local_70 = (ulong)uVar4 << 0x20;
  }
  else {
    local_70._4_4_ = (uint)((ulong)lVar11 >> 0x20);
    uVar4 = local_70._4_4_;
    local_70 = lVar11;
  }
  local_70 = CONCAT44(local_70._4_4_,(int)param_1[0x12]);
  local_68 = CONCAT13(local_68._3_1_,
                      (uint3)((local_68 >> 0x10 & 0xf8) << 0x10) | (uint3)((uVar4 & 0xff) << 8)) |
             0x50020;
  plVar9 = (long *)param_1[(ulong)param_2 + 0x6a];
  uVar5 = uVar4;
  if (plVar9 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar9 + 0x88))(plVar9);
    if ((int)param_2 < 4) {
      lVar11 = 0;
      do {
        if ((((long *)param_1[(long)(int)param_2 + lVar11 + 0x6a] != (long *)0x0) &&
            (uVar7 = (**(code **)(*(long *)param_1[(long)(int)param_2 + lVar11 + 0x6a] + 0x68))(),
            (int)lVar11 != 0)) && ((uVar7 & 1) != 0)) break;
        lVar11 = lVar11 + 1;
      } while ((long)(int)param_2 + -1 + lVar11 < 3);
    }
    FUN_004d6200(plVar12);
    (**(code **)(*plVar9 + 0x58))(plVar9);
    uVar2 = *(undefined4 *)PTR_DAT_02712e28;
    (**(code **)*plVar9)(plVar9);
    FUN_00404870(uVar2,plVar9);
    param_1[(ulong)param_2 + 0x6a] = 0;
  }
  local_80[0] = (long *)0x0;
  (**(code **)(**(long **)(lVar10 + 0x160) + 0x1c8))
            (*(long **)(lVar10 + 0x160),param_2,local_80,*(undefined8 *)(lVar10 + 0x28));
  if (local_80[0] == (long *)0x0) {
    if (uVar4 != uVar5) {
      if (bVar3) {
        (**(code **)(*param_1 + 200))(param_1,iVar6);
        goto joined_r0x004dbdb4;
      }
      FUN_004cd520(param_1 + 0x36);
      FUN_004cd3e0(param_1 + 0x36,uVar4);
      *(uint *)((long)param_1 + 0x94) = uVar4;
    }
    (**(code **)(*plVar12 + 0x48))(plVar12,plVar1);
    goto joined_r0x004dbdb4;
  }
  local_88 = (long *)0x0;
  local_98 = 0;
  local_90 = 1;
  local_8e = 0;
  iVar6 = FUN_0045f0b0((int)local_80[0][6],&local_88,&local_98);
  if (iVar6 == 1) {
    iVar6 = FUN_0045f330((int)local_80[0][6],3,&local_98);
    if (iVar6 == 0) {
      if ((char)local_90 == '\0') {
        lVar11 = FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0x138);
        if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
          memset((void *)(lVar11 + 8),0,0x130);
        }
      }
      else {
        if (local_90._1_1_ != '\0') goto LAB_004dbc90;
        lVar11 = FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0xb0);
        if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
          memset((void *)(lVar11 + 8),0,0xa8);
        }
      }
    }
    else {
LAB_004dbc90:
      (**(code **)(*local_88 + 0x10))(local_88,PTR_PTR_02713088);
    }
  }
  (**(code **)(*plVar12 + 0x48))(plVar12,plVar1);
joined_r0x004dbdb4:
  if (local_80[0] != (long *)0x0) {
    (**(code **)(*local_80[0] + 0x18))();
  }
  return;
}


