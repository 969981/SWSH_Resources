/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d712e0; name: FUN_00d712e0
 */


undefined8 FUN_00d712e0(int *param_1,void *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auStack_b0 [8];
  undefined8 auStack_a8 [17];
  
  uVar1 = *param_1 - 2;
  if ((uVar1 < 9) && ((0x1c1U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    uVar1 = *(uint *)(&DAT_0215fdb0 + (long)(int)uVar1 * 4);
    memcpy(auStack_b0,param_2,0x90);
    FUN_00cc1760(auStack_b0,(ulong)uVar1);
    return auStack_a8[uVar1];
  }
  puVar2 = (undefined8 *)FUN_00cbd3c0();
  return *puVar2;
}


