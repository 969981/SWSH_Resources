/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00824db0; name: FUN_00824db0
 */


void FUN_00824db0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  void *local_68;
  void *local_60;
  undefined8 uStack_58;
  
  plVar3 = (long *)(**(code **)(*param_1 + 0xb0))();
  plVar4 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,param_1);
  if (*plVar4 != 0) {
    FUN_0080f500();
  }
  local_60 = (void *)0x0;
  uStack_58 = 0;
  local_68 = (void *)0x0;
  (**(code **)(*plVar3 + 0x80))(plVar3,param_1,&local_68);
  puVar1 = PTR_DAT_02716e20;
  if (local_60 != local_68) {
    uVar7 = 0;
    do {
      lVar5 = *(long *)((long)local_68 + uVar7 * 8);
      if (*(int *)(puVar1 + (ulong)*(uint *)(lVar5 + 0x3c) * 4) == 10) {
        if (*(int *)(lVar5 + 0x40) == 3) {
          iVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,param_1,lVar5);
          if (0 < iVar2) {
            iVar6 = 0;
            do {
              plVar4 = (long *)(**(code **)(*plVar3 + 0x200))(plVar3,param_1,lVar5,iVar6);
              (**(code **)(*plVar4 + 0x98))();
              iVar6 = iVar6 + 1;
            } while (iVar2 != iVar6);
          }
        }
        else {
          plVar4 = (long *)(**(code **)(*plVar3 + 0x138))(plVar3,param_1,lVar5,0);
          (**(code **)(*plVar4 + 0x98))();
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulong)((long)local_60 - (long)local_68 >> 3));
  }
  if (local_68 != (void *)0x0) {
    local_60 = local_68;
    operator_delete(local_68);
  }
  return;
}


