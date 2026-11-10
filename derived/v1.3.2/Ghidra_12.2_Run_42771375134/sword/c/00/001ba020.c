/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ba020; name: FUN_001ba020
 */


/* WARNING: Removing unreachable block (ram,0x001ba060) */

uint FUN_001ba020(long param_1,long param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = *(uint *)(param_1 + 0x424) - param_4;
  if (*(uint *)(param_1 + 0x424) < param_4) {
    return 0;
  }
  if (uVar3 <= param_3) {
    uVar3 = param_3;
  }
  if (uVar3 != 0) {
    lVar4 = *(long *)(param_1 + 0x3f8);
    if (uVar3 == 1) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      do {
        uVar1 = (ulong)param_4 + lVar5;
        puVar2 = (undefined8 *)(param_2 + lVar5 * 8);
        lVar5 = lVar5 + 2;
        *puVar2 = *(undefined8 *)(lVar4 + (uVar1 & 0xffffffff) * 8);
        puVar2[1] = *(undefined8 *)(lVar4 + (ulong)((int)uVar1 + 1) * 8);
      } while ((ulong)uVar3 - ((ulong)uVar3 & 1) != lVar5);
      if ((uVar3 & 1) == 0) {
        return uVar3;
      }
    }
    *(undefined8 *)(param_2 + lVar5 * 8) =
         *(undefined8 *)(lVar4 + (ulong)((int)lVar5 + param_4) * 8);
  }
  return uVar3;
}


