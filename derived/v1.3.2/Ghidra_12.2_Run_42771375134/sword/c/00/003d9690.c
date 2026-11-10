/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003d9690; name: FUN_003d9690
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_003d9690(long *param_1,undefined8 param_2,uint *param_3,undefined1 *param_4,uint param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 local_38 [8];
  
  if (*param_1 != 0) {
    uVar2 = FUN_003d9990();
    uVar1 = *param_3;
    if ((uVar1 & 1) != 0) {
      FUN_003fd7e0(uVar2,param_5 & 1);
      uVar1 = *param_3;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_003fcaa0(uVar2);
      uVar1 = *param_3;
    }
    if ((uVar1 >> 7 & 1) != 0) {
      FUN_003fca90(uVar2);
      uVar1 = *param_3;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_003fd7e0(uVar2,param_5 & 1);
      uVar1 = *param_3;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_003fca80(uVar2);
      uVar1 = *param_3;
    }
    if ((uVar1 >> 6 & 1) != 0) {
      local_38[0] = *param_4;
      FUN_003fcbf0(uVar2,local_38);
      uVar1 = *param_3;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_003fcac0(uVar2);
      uVar1 = *param_3;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_003fcab0(uVar2);
    }
  }
  return;
}


