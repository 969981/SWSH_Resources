/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e21b0; name: FUN_003e21b0
 */


void FUN_003e21b0(long param_1)

{
  long lVar1;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  
  lVar1 = *(long *)(param_1 + 0x720);
  local_2c = 0;
  FUN_0011e630(lVar1,&local_24,&local_28,0);
  *(undefined4 *)(param_1 + 0x11b0) = 0;
  if ((*(uint *)(param_1 + 0x11b4) & 0x7fffffff) < local_24) {
    FUN_003f4b80(param_1 + 0x11a8);
  }
  *(uint *)(param_1 + 0x11b0) = local_24;
  *(undefined4 *)(param_1 + 0x11c0) = 0;
  if ((*(uint *)(param_1 + 0x11c4) & 0x7fffffff) < local_28) {
    FUN_003f4b80(param_1 + 0x11b8);
  }
  *(uint *)(param_1 + 0x11c0) = local_28;
  FUN_0011e660(lVar1,*(undefined8 *)(param_1 + 0x11a8),&local_24,*(undefined8 *)(param_1 + 0x11b8),
               &local_28,0,&local_2c);
  *(uint *)(param_1 + 0x11b0) = local_24;
  *(uint *)(param_1 + 0x11c0) = local_28;
  *(uint *)(lVar1 + 0xa34) = local_24;
  *(uint *)(lVar1 + 0xa38) = local_28;
  return;
}


