/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102d390; name: FUN_0102d390
 */


void FUN_0102d390(long param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_48;
  long local_38;
  
  if (*param_2 == 0) {
    local_38 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x102d638);
    (*pcVar1)();
  }
  FUN_0102e8a0(&local_38);
  FUN_0102e8a0(&local_48,*param_2);
  lVar3 = *(long *)(*(long *)(local_48 + 0x60) + 0x58);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  FUN_0102e8a0(&local_48,*param_2);
  lVar4 = *(long *)(*(long *)(local_48 + 0x60) + 0x60);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (lVar3 == 0) {
    local_48 = 0;
  }
  else {
    FUN_0102e8a0(&local_48,lVar3);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      FUN_0102e8a0(&local_48,lVar3);
      lVar5 = *(long *)(local_48 + 0x60);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      lVar2 = *(long *)(lVar5 + 0x60);
      *(long *)(lVar5 + 0x60) = lVar4;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      lVar5 = 0;
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
        lVar5 = local_48;
      }
      goto joined_r0x0102d4fc;
    }
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x148);
  *(long *)(param_1 + 0x148) = lVar4;
  lVar5 = local_48;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    lVar5 = local_48;
  }
joined_r0x0102d4fc:
  local_48 = lVar5;
  if (lVar4 == 0) {
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(param_1 + 0x150);
    *(long *)(param_1 + 0x150) = lVar3;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x60);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(lVar5 + 0x58);
    *(long *)(lVar5 + 0x58) = lVar3;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  FUN_0102e8a0(&local_48,*param_2);
  lVar5 = *(long *)(*(long *)(local_48 + 0x60) + 0x58);
  *(undefined8 *)(*(long *)(local_48 + 0x60) + 0x58) = 0;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  FUN_0102e8a0(&local_48,*param_2);
  lVar5 = *(long *)(*(long *)(local_48 + 0x60) + 0x60);
  *(undefined8 *)(*(long *)(local_48 + 0x60) + 0x60) = 0;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


