/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bdc720; name: FUN_00bdc720
 */


void FUN_00bdc720(undefined1 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  if (*(char *)(param_2 + 0x1a40) != '\0') {
    lVar1 = *(long *)(param_2 + 0x1a48);
    *(long *)(param_1 + 8) = lVar1;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x1a50);
    param_1[0x14] = 0;
    if (*(char *)(param_2 + 0x1a54) != '\0') {
      *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x1a56);
      param_1[0x14] = 1;
    }
    param_1[0x1e] = 0;
    if (*(char *)(param_2 + 0x1a5e) != '\0') {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x1a60);
      param_1[0x1e] = 1;
    }
    param_1[0x28] = 0;
    if (*(char *)(param_2 + 0x1a68) != '\0') {
      *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x1a6a);
      param_1[0x28] = 1;
    }
    uVar2 = *(undefined8 *)(param_2 + 0x1a74);
    *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)(param_2 + 0x1a7c);
    *(undefined8 *)(param_1 + 0x34) = uVar2;
    *param_1 = 1;
  }
  return;
}


