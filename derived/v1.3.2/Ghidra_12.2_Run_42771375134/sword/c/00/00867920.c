/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00867920; name: FUN_00867920
 */


void FUN_00867920(long param_1,long param_2,long param_3)

{
  undefined2 uVar1;
  
  *(long *)(param_1 + 8) = param_3;
  *(long *)(param_1 + 0x10) = param_2;
  *(undefined2 *)(param_1 + 0x18) = 0;
  if (param_2 != 0) {
    uVar1 = FUN_00867720(param_2 + 8,0x140);
    *(undefined2 *)(*(long *)(param_1 + 0x10) + 6) = uVar1;
    FUN_008677c0(*(undefined4 **)(param_1 + 0x10) + 2,0x140,**(undefined4 **)(param_1 + 0x10));
    param_3 = *(long *)(param_1 + 8);
  }
  if ((param_3 != 0) && (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0)) {
    FUN_008677c0(param_3,0x10,**(undefined4 **)(param_1 + 0x10));
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}


