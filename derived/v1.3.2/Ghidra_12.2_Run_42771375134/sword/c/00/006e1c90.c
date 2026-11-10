/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e1c90; name: FUN_006e1c90
 */


undefined4 FUN_006e1c90(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long local_28;
  
  FUN_006e3110(&local_28,param_1 + 0x160);
  if (local_28 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x60);
    if (*(long *)(param_1 + 0x78) != 0) {
      puVar3 = (undefined8 *)(param_1 + 0x68);
    }
    lVar2 = FUN_006e2ec0(param_1 + 0x160,*puVar3);
    *(long *)(param_1 + 0x180) = lVar2;
    if (lVar2 != 0) {
      uVar1 = 0;
      *(undefined1 *)(param_1 + 0x171) = 1;
      goto joined_r0x006e1d48;
    }
    *(undefined1 *)(param_1 + 0x171) = 0;
  }
  if (*(long *)(param_1 + 0x78) == 0) {
    puVar3 = (undefined8 *)(param_1 + 0x70);
  }
  else {
    puVar3 = (undefined8 *)PTR_PTR_02710928;
    if (*(long *)(param_1 + 0x60) != 0) {
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x60) + 0x60);
    }
  }
  uVar1 = FUN_006e5730(param_1 + 0x90,*puVar3,1);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x90);
joined_r0x006e1d48:
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return uVar1;
}


