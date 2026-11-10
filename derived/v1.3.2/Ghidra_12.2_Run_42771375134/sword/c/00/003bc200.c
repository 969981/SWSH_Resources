/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bc200; name: FUN_003bc200
 */


void FUN_003bc200(long *param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < param_2) {
    FUN_00202520(param_1,param_2);
  }
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 < param_2) {
    lVar4 = *param_1;
    puVar3 = (undefined1 *)(lVar4 + (ulong)uVar1);
    if ((param_2 - uVar1 & 3) != 0) {
      lVar5 = -((ulong)(param_2 - uVar1) & 3);
      puVar2 = puVar3;
      do {
        lVar5 = lVar5 + 1;
        puVar3 = puVar2 + 1;
        *puVar2 = *param_3;
        puVar2 = puVar3;
      } while (lVar5 != 0);
    }
    if (2 < ((ulong)param_2 - 1) - (ulong)uVar1) {
      do {
        *puVar3 = *param_3;
        puVar3[1] = *param_3;
        puVar3[2] = *param_3;
        puVar3[3] = *param_3;
        puVar3 = puVar3 + 4;
      } while (puVar3 != (undefined1 *)(lVar4 + (ulong)param_2));
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return;
}


