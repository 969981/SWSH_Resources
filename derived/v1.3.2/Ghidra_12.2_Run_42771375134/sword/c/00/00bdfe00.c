/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bdfe00; name: FUN_00bdfe00
 */


undefined8 FUN_00bdfe00(long param_1,long *param_2,long *param_3,byte param_4)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x68) == 5) {
    return 0;
  }
  if (*(char *)(param_1 + 0x90) != '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    *(undefined4 *)(param_1 + 0x68) = 1;
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_00bdfe9c;
LAB_00bdfe64:
    lVar2 = *param_2;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar1 = *(long *)(param_1 + 0x78);
    *(long *)(param_1 + 0x78) = lVar2;
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) goto LAB_00bdfe64;
LAB_00bdfe9c:
    lVar2 = *param_2;
    if (lVar2 == 0) {
      *(undefined8 *)(param_1 + 0x70) = 0;
      lVar2 = *param_3;
      goto joined_r0x00bdfed4;
    }
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    lVar1 = *(long *)(param_1 + 0x70);
    *(long *)(param_1 + 0x70) = lVar2;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar2 = *param_3;
joined_r0x00bdfed4:
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x80);
  *(long *)(param_1 + 0x80) = lVar2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(byte *)(param_1 + 0x91) = param_4 & 1;
  *(undefined1 *)(param_1 + 0x92) = 0;
  return 1;
}


