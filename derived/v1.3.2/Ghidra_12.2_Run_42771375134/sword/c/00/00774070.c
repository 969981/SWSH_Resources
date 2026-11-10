/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00774070; name: FUN_00774070
 */


undefined8 FUN_00774070(long param_1)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 100) = 4;
  lVar1 = *(long *)(param_1 + 0x108);
  if ((lVar1 == 0) && (*(long *)(param_1 + 0x68) == 0)) {
    *(undefined4 *)(param_1 + 100) = 0;
    return 0;
  }
  if (*(char *)(param_1 + 0x60) == '\0') {
    return 4;
  }
  if (lVar1 != 0) {
    (**(code **)(**(long **)(*(long *)(param_1 + 0x100) + lVar1 * 8 + -8) + 0x60))();
  }
  FUN_00774630(param_1 + 0xc0,param_1 + 0x68);
  *(undefined2 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 3;
  return 3;
}


