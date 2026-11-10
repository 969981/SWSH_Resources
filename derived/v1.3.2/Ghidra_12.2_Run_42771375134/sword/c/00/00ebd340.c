/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ebd340; name: FUN_00ebd340
 */


uint FUN_00ebd340(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x140) == 0) {
    uVar1 = 1;
    lVar3 = *(long *)(param_1 + 0x178);
  }
  else {
    uVar1 = FUN_008d42a0(param_1 + 0x160,0);
    lVar3 = *(long *)(param_1 + 0x178);
  }
  if (lVar3 != 0) {
    uVar2 = FUN_008d42a0(param_1 + 0x198,0);
    uVar1 = uVar1 & uVar2;
  }
  if (*(long *)(param_1 + 0x1b0) != 0) {
    uVar2 = FUN_008d42a0(param_1 + 0x1d0,0);
    uVar1 = uVar1 & uVar2;
  }
  if (*(long *)(param_1 + 0x1e8) != 0) {
    uVar2 = FUN_008d42a0(param_1 + 0x208,0);
    uVar1 = uVar1 & uVar2;
  }
  if (*(long *)(param_1 + 0x220) != 0) {
    uVar2 = FUN_008d42a0(param_1 + 0x240,0);
    uVar1 = uVar1 & uVar2;
  }
  if (*(long *)(param_1 + 600) != 0) {
    uVar2 = FUN_008d42a0(param_1 + 0x278,0);
    uVar1 = uVar1 & uVar2;
  }
  if (*(long *)(param_1 + 0x290) != 0) {
    uVar2 = FUN_008d42a0(param_1 + 0x2b0,0);
    uVar1 = uVar1 & uVar2;
  }
  return uVar1 & 1;
}


