/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bdeaf0; name: FUN_00bdeaf0
 */


void FUN_00bdeaf0(char *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  param_2 = (undefined8 *)*param_2;
  if (*param_1 == '\0') {
    if (param_2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 8) = *param_2;
      lVar2 = param_2[1];
      *(long *)(param_1 + 0x10) = lVar2;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      *(undefined8 *)(param_1 + 0x18) = param_2[2];
      lVar2 = param_2[3];
      *(long *)(param_1 + 0x20) = lVar2;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      memcpy(param_1 + 0x28,param_2 + 4,0x136);
      *param_1 = '\x01';
    }
    return;
  }
  if (param_2 == (undefined8 *)0x0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x20) + 0x48) + 0x18))();
      param_1[0x20] = '\0';
      param_1[0x21] = '\0';
      param_1[0x22] = '\0';
      param_1[0x23] = '\0';
      param_1[0x24] = '\0';
      param_1[0x25] = '\0';
      param_1[0x26] = '\0';
      param_1[0x27] = '\0';
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x18))();
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
    }
    *param_1 = '\0';
    return;
  }
  *(undefined8 *)(param_1 + 8) = *param_2;
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x18) = param_2[2];
  lVar2 = param_2[3];
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  memcpy(param_1 + 0x28,param_2 + 4,0x136);
  return;
}


