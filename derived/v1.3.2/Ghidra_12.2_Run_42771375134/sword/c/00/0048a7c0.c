/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048a7c0; name: FUN_0048a7c0
 */


undefined8 FUN_0048a7c0(long *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = 0xff;
  if (param_2 != 0) {
    uVar1 = param_2;
  }
  *(uint *)(param_1 + 2) = uVar1;
  lVar2 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar1 << 3);
  *param_1 = lVar2;
  if (lVar2 == 0) {
    return 0x34;
  }
  *(uint *)((long)param_1 + 0xc) = uVar1;
  return 1;
}


