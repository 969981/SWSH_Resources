/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a8ab0; name: FUN_003a8ab0
 */


void FUN_003a8ab0(long param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  
  lVar2 = *(long *)(param_1 + 0x1ee0);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    local_70 = 0;
    uStack_68 = 0x3f80000000000000;
    local_60 = 0;
    local_58 = 0;
    FUN_00218620(param_2,&local_70);
    FUN_00218580(param_2,param_3);
    FUN_003a8bc0(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x10),param_2);
  }
  uVar1 = (ulong)*(uint *)(param_1 + 0x1f18);
  if (*(uint *)(param_1 + 0x1f18) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0x1f10) + lVar2);
      if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
        local_60 = 0;
        local_70 = 0;
        uStack_68 = 0x3f80000000000000;
        local_58 = 0;
        FUN_00218620(param_2,&local_70);
        FUN_00218580(param_2,param_3);
        FUN_003a8bc0(*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x10),param_2);
        uVar1 = (ulong)*(uint *)(param_1 + 0x1f18);
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while (uVar3 < uVar1);
  }
  FUN_003a5610(param_1 + 0x10,param_2,param_3);
  return;
}


