/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bc5b0; name: FUN_003bc5b0
 */


void FUN_003bc5b0(long param_1,uint param_2,undefined4 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x30) != 0) {
    uVar2 = 0;
    do {
      uVar1 = uVar2 + 1;
      if (uVar1 < uVar3) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x28) + uVar2 * 8 + 8);
        Hint_Prefetch(lVar4,0,0,0);
        Hint_Prefetch(lVar4 + 0x80,0,0,0);
      }
      FUN_003bf100(*(undefined8 *)(*(long *)(param_1 + 0x28) + uVar2 * 8),param_2 & 1,param_3);
      uVar3 = (ulong)*(uint *)(param_1 + 0x30);
      uVar2 = uVar1;
    } while (uVar1 < uVar3);
  }
  return;
}


