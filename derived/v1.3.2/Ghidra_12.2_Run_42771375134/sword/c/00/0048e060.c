/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048e060; name: FUN_0048e060
 */


void FUN_0048e060(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 local_20;
  undefined1 local_18;
  
  uVar1 = *(uint *)(param_1 + 0x26b);
  if ((uVar1 >> 0x10 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x26f) = *(undefined1 *)(param_1 + 0x26f);
    *(uint *)(param_1 + 0x26b) = uVar1 & 0xfff1ffff | (param_2 & 7) << 0x11 | 0x10000;
  }
  local_20 = 0x400000000;
  local_18 = 0;
  FUN_0048c100(param_1,&local_20,1);
  return;
}


