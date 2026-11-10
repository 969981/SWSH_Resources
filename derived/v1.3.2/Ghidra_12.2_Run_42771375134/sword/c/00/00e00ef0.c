/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e00ef0; name: FUN_00e00ef0
 */


void FUN_00e00ef0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x288);
  *(undefined8 *)(param_1 + 0x288) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  FUN_006c6ee0(param_1 + 0x170);
  lVar1 = *(long *)(param_1 + 0x68);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x170) != '\0')) {
    FUN_006e2100(lVar1,param_1 + 0x60);
    lVar1 = *(long *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  *(undefined8 *)(param_1 + 0x298) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x2a0) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x2a8) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x2b0) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x2b8) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x2c0) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x2c8) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x2d0) = 0xcbf29ce484222645;
  *(undefined2 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x2e0);
  return;
}


