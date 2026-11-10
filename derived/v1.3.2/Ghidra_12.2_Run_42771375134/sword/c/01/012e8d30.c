/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e8d30; name: FUN_012e8d30
 */


void FUN_012e8d30(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long local_40;
  long local_38;
  
  iVar4 = *(int *)(param_1 + 0x84c);
  if (iVar4 == 0) {
    return;
  }
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    iVar4 = *(int *)(param_1 + 0x84c);
  }
  local_38 = param_1;
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
  uVar1 = FUN_012f2a10(&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if ((uVar1 & 1) == 0) {
    *(int *)(param_1 + 0x848) = iVar4;
    local_40 = lVar2;
    if (lVar2 == 0) {
      FUN_012e71f0(param_1,&local_40);
      goto LAB_012e8e10;
    }
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_012e71f0(param_1,&local_40);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  else {
    *(int *)(param_1 + 0x84c) = iVar4;
    if (lVar2 == 0) goto LAB_012e8e10;
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
LAB_012e8e10:
  *(undefined4 *)(param_1 + 0x84c) = 0;
  return;
}


