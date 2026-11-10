/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010a80b0; name: FUN_010a80b0
 */


void FUN_010a80b0(long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long local_48;
  
  if ((*(int *)(param_2 + 0x18) != -1) && (*(int *)(param_2 + 0x1c) != -1)) {
    lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x220);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    uVar1 = *(undefined4 *)(param_2 + 0x18);
    uVar2 = *(undefined4 *)(param_2 + 0x1c);
    local_48 = *(long *)(param_2 + 0x10);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    uVar3 = FUN_01505da0(lVar5,uVar2,uVar1,&local_48,0);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(param_2 + 0x10);
      *param_1 = lVar4;
      if (lVar4 == 0) {
        return;
      }
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      return;
    }
  }
  *param_1 = 0;
  return;
}


