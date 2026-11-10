/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cba0c0; name: FUN_00cba0c0
 */


byte FUN_00cba0c0(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  long local_48;
  long local_40;
  long local_38;
  
  if ((*(long *)(param_1 + 0xa0) == 0) || (*(int *)(*(long *)(param_1 + 0xa0) + 0x54) == 0)) {
    bVar4 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x80) == 0) {
      local_40 = *(long *)(param_1 + 0xa0);
      lVar1 = 0;
    }
    else {
      FUN_00c62ba0(&local_38);
      local_40 = *(long *)(param_1 + 0xa0);
      lVar1 = local_38;
    }
    local_38 = lVar1;
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
    }
    bVar4 = FUN_00cae840(lVar1,&local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
  }
  lVar6 = 0;
  lVar1 = param_1 + 0xa8;
  do {
    while (bVar5 = bVar4, *(long *)(lVar1 + lVar6) == 0) {
LAB_00cba230:
      lVar6 = lVar6 + 8;
      bVar4 = bVar5;
      if (lVar6 == 0x40) goto LAB_00cba23c;
    }
    iVar2 = *(int *)(*(long *)(lVar1 + lVar6) + 0x54);
    bVar5 = bVar4 & iVar2 == 0;
    if (iVar2 != 0) {
      if (((bVar4 ^ 1) & 1) == 0) {
        if (*(long *)(param_1 + 0x80) == 0) {
          local_48 = *(long *)(lVar1 + lVar6);
          lVar3 = 0;
        }
        else {
          FUN_00c62ba0(&local_38);
          local_48 = *(long *)(lVar1 + lVar6);
          lVar3 = local_38;
        }
        local_38 = lVar3;
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
        }
        bVar5 = FUN_00cae840(lVar3,&local_48);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
          local_38 = 0;
        }
      }
      goto LAB_00cba230;
    }
    lVar6 = lVar6 + 8;
    bVar4 = bVar5;
  } while (lVar6 != 0x40);
LAB_00cba23c:
  return bVar5 & 1;
}


