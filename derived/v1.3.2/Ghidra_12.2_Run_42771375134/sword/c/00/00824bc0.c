/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00824bc0; name: FUN_00824bc0
 */


undefined8 FUN_00824bc0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  void *local_68;
  void *local_60;
  undefined8 uStack_58;
  
  lVar3 = (**(code **)(*param_1 + 0xb8))();
  plVar4 = (long *)(**(code **)(*param_1 + 0xb0))(param_1);
  iVar2 = *(int *)(lVar3 + 0x2c);
  if (0 < iVar2) {
    lVar9 = 0;
    lVar11 = 0;
    do {
      if (*(int *)(*(long *)(lVar3 + 0x30) + lVar9 + 0x40) == 2) {
        uVar5 = (**(code **)(*plVar4 + 0x28))(plVar4,param_1);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        iVar2 = *(int *)(lVar3 + 0x2c);
      }
      lVar11 = lVar11 + 1;
      lVar9 = lVar9 + 0x90;
    } while (lVar11 < iVar2);
  }
  local_60 = (void *)0x0;
  uStack_58 = 0;
  local_68 = (void *)0x0;
  (**(code **)(*plVar4 + 0x80))(plVar4,param_1,&local_68);
  puVar1 = PTR_DAT_02716e20;
  if (local_60 != local_68) {
    uVar5 = 0;
    do {
      lVar3 = *(long *)((long)local_68 + uVar5 * 8);
      if (*(int *)(puVar1 + (ulong)*(uint *)(lVar3 + 0x3c) * 4) == 10) {
        if (*(int *)(lVar3 + 0x40) == 3) {
          iVar2 = (**(code **)(*plVar4 + 0x30))(plVar4,param_1,lVar3);
          if (0 < iVar2) {
            iVar10 = 0;
            do {
              plVar6 = (long *)(**(code **)(*plVar4 + 0x1a0))(plVar4,param_1,lVar3,iVar10);
              uVar7 = (**(code **)(*plVar6 + 0x40))();
              if ((uVar7 & 1) == 0) goto LAB_00824d68;
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar2);
          }
        }
        else {
          plVar6 = (long *)(**(code **)(*plVar4 + 0xd8))(plVar4,param_1,lVar3,0);
          uVar7 = (**(code **)(*plVar6 + 0x40))();
          if ((uVar7 & 1) == 0) {
LAB_00824d68:
            uVar8 = 0;
            if (local_68 == (void *)0x0) {
              return 0;
            }
            goto LAB_00824d74;
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulong)((long)local_60 - (long)local_68 >> 3));
  }
  uVar8 = 1;
  if (local_68 != (void *)0x0) {
LAB_00824d74:
    local_60 = local_68;
    operator_delete(local_68);
  }
  return uVar8;
}


