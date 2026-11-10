/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f8c50; name: FUN_004f8c50
 */


void FUN_004f8c50(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = PTR_DAT_027137e0;
  uVar3 = (ulong)*(uint *)(PTR_DAT_027137e0 + 8);
  if (*(uint *)(PTR_DAT_027137e0 + 8) != 0) {
    uVar4 = 0;
    do {
      lVar2 = *(long *)(*(long *)puVar1 + uVar4 * 8);
      if (lVar2 != 0) {
        FUN_004faf60(lVar2,lVar2 == param_1,param_2);
        uVar3 = (ulong)*(uint *)(puVar1 + 8);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return;
}


