/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00824f20; name: FUN_00824f20
 */


void FUN_00824f20(long *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  byte local_90 [16];
  void *local_80;
  void *local_78;
  void *local_70;
  void *local_68;
  
  lVar4 = (**(code **)(*param_1 + 0xb8))();
  plVar5 = (long *)(**(code **)(*param_1 + 0xb0))(param_1);
  if (0 < *(int *)(lVar4 + 0x2c)) {
    lVar8 = 0;
    lVar9 = 0;
    do {
      if ((*(int *)(*(long *)(lVar4 + 0x30) + lVar8 + 0x40) == 2) &&
         (uVar6 = (**(code **)(*plVar5 + 0x28))(plVar5,param_1), (uVar6 & 1) == 0)) {
        FUN_00807080(&local_78,param_2,*(undefined8 *)(*(long *)(lVar4 + 0x30) + lVar8));
        puVar1 = *(ulong **)(param_3 + 8);
        if (puVar1 < *(ulong **)(param_3 + 0x10)) {
          puVar1[1] = (ulong)local_70;
          puVar1[2] = (ulong)local_68;
          *puVar1 = (ulong)local_78;
          local_70 = (void *)0x0;
          local_68 = (void *)0x0;
          local_78 = (void *)0x0;
          *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 0x18;
        }
        else {
          FUN_007f85f0(param_3,&local_78);
          if (((ulong)local_78 & 1) != 0) {
            operator_delete(local_68);
          }
        }
      }
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x90;
    } while (lVar9 < *(int *)(lVar4 + 0x2c));
  }
  local_70 = (void *)0x0;
  local_68 = (void *)0x0;
  local_78 = (void *)0x0;
  (**(code **)(*plVar5 + 0x80))(plVar5,param_1,&local_78);
  puVar2 = PTR_DAT_02716e20;
  if (local_70 != local_78) {
    uVar6 = 0;
    do {
      lVar4 = *(long *)((long)local_78 + uVar6 * 8);
      if (*(int *)(puVar2 + (ulong)*(uint *)(lVar4 + 0x3c) * 4) == 10) {
        if (*(int *)(lVar4 + 0x40) == 3) {
          iVar3 = (**(code **)(*plVar5 + 0x30))(plVar5,param_1,lVar4);
          if (0 < iVar3) {
            iVar10 = 0;
            do {
              uVar7 = (**(code **)(*plVar5 + 0x1a0))(plVar5,param_1,lVar4,iVar10);
              FUN_008251b0(local_90,param_2,lVar4,iVar10);
              FUN_00824f20(uVar7,local_90,param_3);
              if ((local_90[0] & 1) != 0) {
                operator_delete(local_80);
              }
              iVar10 = iVar10 + 1;
            } while (iVar3 != iVar10);
          }
        }
        else {
          uVar7 = (**(code **)(*plVar5 + 0xd8))(plVar5,param_1,lVar4,0);
          FUN_008251b0(local_90,param_2,lVar4,0xffffffff);
          FUN_00824f20(uVar7,local_90,param_3);
          if ((local_90[0] & 1) != 0) {
            operator_delete(local_80);
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulong)((long)local_70 - (long)local_78 >> 3));
  }
  if (local_78 != (void *)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
  return;
}


