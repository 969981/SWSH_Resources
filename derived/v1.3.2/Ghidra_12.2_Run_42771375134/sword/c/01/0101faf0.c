/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0101faf0; name: FUN_0101faf0
 */


void FUN_0101faf0(undefined4 param_1,undefined4 param_2,long param_3,uint param_4,uint param_5)

{
  uint uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = param_1;
  uStack_14 = param_2;
  uVar1 = FUN_0101fb90(*(undefined4 *)(param_3 + 0x2c),*(undefined4 *)(param_3 + 0x30),(int)param_3,
                       &local_18,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10),
                       param_4 & 1,param_5 & 1,*(undefined1 *)(param_3 + 0x35));
  if ((uVar1 >> 0xd & 1) != 0) {
    *(ulong *)(param_3 + 8) = *(ulong *)(param_3 + 8) | 0x10000000;
  }
  if ((uVar1 >> 0xf & 1) != 0) {
    *(ulong *)(param_3 + 8) = *(ulong *)(param_3 + 8) | 0x40000000;
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    *(ulong *)(param_3 + 8) = *(ulong *)(param_3 + 8) | 0x80000000;
  }
  if ((uVar1 >> 0xe & 1) == 0) {
    return;
  }
  *(ulong *)(param_3 + 8) = *(ulong *)(param_3 + 8) | 0x20000000;
  return;
}


