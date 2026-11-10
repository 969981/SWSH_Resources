/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102e5c0; name: FUN_0102e5c0
 */


void FUN_0102e5c0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_38;
  
  if (*(long *)(param_1 + 0x148) == 0) {
    lVar2 = *param_2;
    if (lVar2 == 0) {
      *(undefined8 *)(param_1 + 0x148) = 0;
    }
    else {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      lVar3 = *(long *)(param_1 + 0x148);
      *(long *)(param_1 + 0x148) = lVar2;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      }
    }
    (**(code **)(*(long *)*param_2 + 0x10))(&local_38);
    if (*(long *)(param_1 + 0x150) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x150) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x150) = 0;
    }
    *(long *)(param_1 + 0x150) = local_38;
    lVar2 = *(long *)(*(long *)(*param_2 + 0x60) + 0x58);
    *(undefined8 *)(*(long *)(*param_2 + 0x60) + 0x58) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    lVar2 = *(long *)(*(long *)(*param_2 + 0x60) + 0x60);
    *(undefined8 *)(*(long *)(*param_2 + 0x60) + 0x60) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  else {
    FUN_0102e8a0(&local_38,*(undefined8 *)(param_1 + 0x150));
    lVar2 = *(long *)(local_38 + 0x60);
    lVar3 = *param_2;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar1 = *(long *)(lVar2 + 0x60);
    *(long *)(lVar2 + 0x60) = lVar3;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    lVar2 = *(long *)(*param_2 + 0x60);
    lVar3 = *(long *)(param_1 + 0x150);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar1 = *(long *)(lVar2 + 0x58);
    *(long *)(lVar2 + 0x58) = lVar3;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar2 = *(long *)(*(long *)(*param_2 + 0x60) + 0x60);
    *(undefined8 *)(*(long *)(*param_2 + 0x60) + 0x60) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    (**(code **)(*(long *)*param_2 + 0x10))(&local_38);
    if (*(long *)(param_1 + 0x150) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x150) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x150) = 0;
    }
    *(long *)(param_1 + 0x150) = local_38;
  }
  return;
}


