/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102cdf0; name: FUN_0102cdf0
 */


void FUN_0102cdf0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_38;
  
  FUN_0102e8a0(&local_38,*param_2);
  lVar2 = *(long *)(*(long *)(local_38 + 0x60) + 0x68);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN_0102e8a0(&local_38,*param_2);
  lVar3 = *(long *)(*(long *)(local_38 + 0x60) + 0x70);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar2 == 0) {
    local_38 = 0;
LAB_0102cf1c:
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)(param_1 + 0x158);
    *(long *)(param_1 + 0x158) = lVar3;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
LAB_0102cf48:
    if (lVar3 == 0) goto LAB_0102cfc8;
LAB_0102cf4c:
    FUN_0102e8a0(&local_38,lVar3);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      FUN_0102e8a0(&local_38,lVar3);
      lVar4 = *(long *)(local_38 + 0x60);
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      lVar1 = *(long *)(lVar4 + 0x68);
      *(long *)(lVar4 + 0x68) = lVar2;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      goto LAB_0102cff8;
    }
  }
  else {
    FUN_0102e8a0(&local_38,lVar2);
    if (local_38 == 0) goto LAB_0102cf1c;
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    FUN_0102e8a0(&local_38,lVar2);
    lVar4 = *(long *)(local_38 + 0x60);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar1 = *(long *)(lVar4 + 0x70);
    *(long *)(lVar4 + 0x70) = lVar3;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    if (local_38 == 0) goto LAB_0102cf48;
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
    if (lVar3 != 0) goto LAB_0102cf4c;
LAB_0102cfc8:
    local_38 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(param_1 + 0x160);
  *(long *)(param_1 + 0x160) = lVar2;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
LAB_0102cff8:
  FUN_0102e8a0(&local_38,*param_2);
  lVar4 = *(long *)(*(long *)(local_38 + 0x60) + 0x68);
  *(undefined8 *)(*(long *)(local_38 + 0x60) + 0x68) = 0;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN_0102e8a0(&local_38,*param_2);
  lVar4 = *(long *)(*(long *)(local_38 + 0x60) + 0x70);
  *(undefined8 *)(*(long *)(local_38 + 0x60) + 0x70) = 0;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


