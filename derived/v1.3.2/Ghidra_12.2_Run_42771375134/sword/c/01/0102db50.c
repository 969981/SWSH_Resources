/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102db50; name: FUN_0102db50
 */


void FUN_0102db50(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_38;
  
  if (*(long *)(param_1 + 0x188) == 0) {
    local_38 = 0;
  }
  else {
    FUN_0102e8a0(&local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      FUN_0102e8a0(&local_38,*(undefined8 *)(param_1 + 400));
      lVar2 = *(long *)(local_38 + 0x60);
      lVar3 = *param_2;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      lVar1 = *(long *)(lVar2 + 0x98);
      *(long *)(lVar2 + 0x98) = lVar3;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      FUN_0102e8a0(&local_38,*param_2);
      lVar2 = *(long *)(local_38 + 0x60);
      lVar3 = *(long *)(param_1 + 400);
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      lVar1 = *(long *)(lVar2 + 0x90);
      *(long *)(lVar2 + 0x90) = lVar3;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      FUN_0102e8a0(&local_38,*param_2);
      lVar2 = *(long *)(*(long *)(local_38 + 0x60) + 0x98);
      *(undefined8 *)(*(long *)(local_38 + 0x60) + 0x98) = 0;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      lVar2 = *param_2;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      lVar3 = *(long *)(param_1 + 400);
      *(long *)(param_1 + 400) = lVar2;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      }
      goto LAB_0102ddac;
    }
  }
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0x188);
  *(long *)(param_1 + 0x188) = lVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 400);
  *(long *)(param_1 + 400) = lVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  FUN_0102e8a0(&local_38,*param_2);
  lVar2 = *(long *)(*(long *)(local_38 + 0x60) + 0x90);
  *(undefined8 *)(*(long *)(local_38 + 0x60) + 0x90) = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN_0102e8a0(&local_38,*param_2);
  lVar2 = *(long *)(*(long *)(local_38 + 0x60) + 0x98);
  *(undefined8 *)(*(long *)(local_38 + 0x60) + 0x98) = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
LAB_0102ddac:
  FUN_0102e8a0(&local_38,*param_2);
  lVar2 = *(long *)(*(long *)(local_38 + 0x60) + 0x88);
  *(undefined8 *)(*(long *)(local_38 + 0x60) + 0x88) = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


