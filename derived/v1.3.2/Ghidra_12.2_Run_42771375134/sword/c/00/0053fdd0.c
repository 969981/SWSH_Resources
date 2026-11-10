/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053fdd0; name: FUN_0053fdd0
 */


undefined8
FUN_0053fdd0(long param_1,undefined4 param_2,uint param_3,void *param_4,void *param_5,void *param_6)

{
  *(undefined4 *)(param_1 + 0x14de8) = param_2;
  *(uint *)(param_1 + 0x14dec) = param_3;
  if (param_4 != (void *)0x0) {
    memcpy((void *)(param_1 + 0x14df0),param_4,(ulong)param_3 << 3);
  }
  if (param_5 != (void *)0x0) {
    memcpy((void *)(param_1 + 0x14e70),param_5,(ulong)param_3 << 2);
  }
  if (param_6 != (void *)0x0) {
    memcpy((void *)(param_1 + 0x14eb0),param_6,(ulong)param_3 << 2);
  }
  return 0;
}


