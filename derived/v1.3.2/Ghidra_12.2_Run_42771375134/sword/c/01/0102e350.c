/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102e350; name: FUN_0102e350
 */


void FUN_0102e350(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_38;
  
  if (*(long *)(param_1 + 0x168) == 0) {
    local_38 = 0;
  }
  else {
    FUN_0102e8a0(&local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      FUN_0102e8a0(&local_38,*(undefined8 *)(param_1 + 0x170));
      lVar2 = *(long *)(local_38 + 0x60);
      lVar3 = *param_2;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      lVar1 = *(long *)(lVar2 + 0x80);
      *(long *)(lVar2 + 0x80) = lVar3;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      FUN_0102e8a0(&local_38,*param_2);
      lVar2 = *(long *)(local_38 + 0x60);
      lVar3 = *(long *)(param_1 + 0x170);
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      lVar1 = *(long *)(lVar2 + 0x78);
      *(long *)(lVar2 + 0x78) = lVar3;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      FUN_0102e8a0(&local_38,*param_2);
      lVar2 = *(long *)(*(long *)(local_38 + 0x60) + 0x80);
      *(undefined8 *)(*(long *)(local_38 + 0x60) + 0x80) = 0;
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
      lVar3 = *(long *)(param_1 + 0x170);
      *(long *)(param_1 + 0x170) = lVar2;
      if (lVar3 == 0) {
        return;
      }
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      return;
    }
  }
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0x168);
  *(long *)(param_1 + 0x168) = lVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0x170);
  *(long *)(param_1 + 0x170) = lVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  FUN_0102e8a0(&local_38,*param_2);
  lVar2 = *(long *)(*(long *)(local_38 + 0x60) + 0x78);
  *(undefined8 *)(*(long *)(local_38 + 0x60) + 0x78) = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN_0102e8a0(&local_38,*param_2);
  lVar2 = *(long *)(*(long *)(local_38 + 0x60) + 0x80);
  *(undefined8 *)(*(long *)(local_38 + 0x60) + 0x80) = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


