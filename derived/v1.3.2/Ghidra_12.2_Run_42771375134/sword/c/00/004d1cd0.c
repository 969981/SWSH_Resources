/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d1cd0; name: FUN_004d1cd0
 */


void FUN_004d1cd0(long param_1,ulong param_2,int *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  void *__s;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong __n;
  undefined4 *puVar12;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined2 local_68;
  
  param_2 = param_2 & 0xffffffff;
  lVar3 = param_1 + param_2 * 0x80;
  plVar7 = *(long **)(lVar3 + 0x130);
  plVar1 = (long *)(lVar3 + 0x130);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x10))(plVar7,PTR_PTR_02713088);
    *plVar1 = 0;
  }
  puVar10 = *(undefined8 **)(lVar3 + 0x138);
  plVar7 = (long *)(lVar3 + 0x138);
  if (puVar10 != (undefined8 *)0x0) {
    uVar4 = *(undefined4 *)PTR_DAT_02712e28;
    (**(code **)*puVar10)(puVar10);
    FUN_00404870(uVar4,puVar10);
    *plVar7 = 0;
  }
  plVar11 = (long *)(lVar3 + 200);
  puVar12 = (undefined4 *)(lVar3 + 0x128);
  *puVar12 = 0xffffffff;
  (**(code **)(*plVar11 + 0x28))(plVar11);
  lVar9 = param_1 + param_2 * 0x18;
  plVar2 = (long *)(lVar9 + 0x2c8);
  if (*(long *)(lVar9 + 0x2c8) != 0) {
    FUN_004047f0(*(undefined4 *)PTR_DAT_02712e28);
    lVar9 = param_1 + param_2 * 0x18;
    *plVar2 = 0;
    *(undefined4 *)(lVar9 + 0x2d8) = 0;
    *(undefined8 *)(lVar9 + 0x2d0) = 0x2b00000000;
  }
  local_70 = (long *)0x0;
  local_88 = *(undefined8 *)(param_1 + 0x70);
  local_80 = *(undefined8 *)(param_1 + 0x78);
  uStack_78 = 0;
  FUN_004ca560(&local_88);
  FUN_004ca3b0(&local_88,param_2,&local_70);
  if ((local_70 != (long *)0x0) && (*puVar12 = (int)local_70[6], local_70[7] != 0)) {
    local_90._0_4_ = param_3[2];
    local_98 = *(undefined8 *)param_3;
    local_a8 = 0;
    local_a0 = 1;
    local_9e = 0;
    lVar9 = FUN_00461800(plVar11,local_70,*(long *)(param_1 + 0x20) + 0x10,
                         *(long *)(param_1 + 0x20) + 0x50,1);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar3 + 0x140) = local_68;
      lVar9 = FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0x38);
      if (lVar9 == 0) {
        *plVar7 = 0;
      }
      else {
        FUN_004c9fa0(lVar9,param_1,param_2,(undefined8 *)(param_1 + 0x70));
        *plVar7 = lVar9;
        iVar6 = FUN_0045f0b0(*puVar12,plVar1,&local_a8);
        if (((iVar6 == 1) && (iVar6 = FUN_0045f330((int)local_70[6],3,&local_a8), iVar6 == 0)) &&
           (iVar6 = (**(code **)(*(long *)*plVar1 + 0x38))
                              ((long *)*plVar1,PTR_PTR_02713088,*plVar7,
                               *(undefined8 *)(lVar3 + 0xd0),&local_98), iVar6 == 1)) {
          if ((char)local_a0 == '\0') {
            uVar5 = *(uint *)PTR_DAT_02712ac0;
            *(undefined4 *)(param_1 + param_2 * 0x18 + 0x2d4) = 0x11;
            __n = (ulong)((uVar5 & 0xffff) * 4 * (uint)local_98._4_1_);
            __s = (void *)FUN_00404750(*(undefined4 *)PTR_DAT_02712e28,__n,0x10);
            if (__s != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              memset(__s,0,__n);
            }
          }
          else if ((((int)local_98 == *param_3) && (local_98._4_4_ == param_3[1])) &&
                  ((((*(uint3 *)(param_3 + 2) ^ local_90._0_3_) & 0x7ffff) == 0 &&
                   (iVar6 = (**(code **)(*(long *)*plVar1 + 0x18))(), iVar6 == 1)))) {
            if ((*(short *)(lVar3 + 0x140) == 0) && (*(short *)(param_1 + 0x340) == 0)) {
              *(undefined1 *)((long)param_3 + 10) = local_90[2];
              *(undefined2 *)(param_3 + 2) = local_90._0_2_;
              *(undefined8 *)param_3 = local_98;
              FUN_004ca500(&local_88);
              goto joined_r0x004d1fec;
            }
            goto LAB_004d1fe0;
          }
        }
      }
    }
    plVar8 = (long *)*plVar1;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,PTR_PTR_02713088);
      *plVar1 = 0;
    }
    puVar10 = (undefined8 *)*plVar7;
    if (puVar10 != (undefined8 *)0x0) {
      uVar4 = *(undefined4 *)PTR_DAT_02712e28;
      (**(code **)*puVar10)(puVar10);
      FUN_00404870(uVar4,puVar10);
      *plVar7 = 0;
    }
    *puVar12 = 0xffffffff;
    (**(code **)(*plVar11 + 0x28))(plVar11);
    if (*plVar2 != 0) {
      FUN_004047f0(*(undefined4 *)PTR_DAT_02712e28);
      param_1 = param_1 + param_2 * 0x18;
      *plVar2 = 0;
      *(undefined4 *)(param_1 + 0x2d8) = 0;
      *(undefined8 *)(param_1 + 0x2d0) = 0x2b00000000;
    }
  }
LAB_004d1fe0:
  FUN_004ca500(&local_88);
joined_r0x004d1fec:
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x18))();
  }
  return;
}


