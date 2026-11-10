/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e30be0; name: FUN_00e30be0
 */


uint FUN_00e30be0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(short *)(param_1 + 0x292) == 0x140) || (*(short *)(param_1 + 0x292) == 0xe0)) {
    uVar2 = param_2 >> 3;
  }
  else {
    uVar2 = param_2;
    if ((*(uint *)(param_1 + 0x2ac) & 2) != 0) {
      uVar2 = param_2 >> 3;
    }
    if ((*(uint *)(param_1 + 0x2ac) & 1) != 0) {
      uVar2 = param_2 << 1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x2a8);
  uVar3 = uVar2 >> (ulong)(uVar1 >> 5 & 1);
  if ((uVar1 & 0x40) != 0) {
    uVar3 = uVar2 / 5;
  }
  if (99 < uVar3) {
    uVar3 = 100;
  }
  if ((uVar1 & 0x14) != 0) {
    uVar3 = 0;
  }
  return uVar3;
}


