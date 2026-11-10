/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c9c090; name: FUN_00c9c090
 */


undefined8 FUN_00c9c090(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_48;
  long local_38;
  
  if ((*(int *)(param_1 + 0x94) == 5) && (*(long *)(param_1 + 0x118) == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x108);
    local_48 = *(undefined8 *)(param_1 + 0x110);
    lVar2 = FUN_00adc750(&local_38,param_2,&local_48);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    local_38 = lVar2;
    FUN_006d9640(uVar1,&local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar3 = *(long *)(param_1 + 0x118);
    *(long *)(param_1 + 0x118) = lVar2;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    if (param_3 != 0) {
      FUN_0069ae40(*(undefined8 *)(param_1 + 0x118),param_2,param_3,*(undefined1 *)(param_1 + 0x2d4)
                  );
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


