/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b84b0; name: FUN_001b84b0
 */


undefined8 FUN_001b84b0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  FUN_003ff570(*(undefined8 *)(param_1 + 8));
  uVar1 = *(uint *)(param_1 + 0x1cf0);
  if (uVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x1ce8);
    uVar2 = 0;
    do {
      if (*(long *)(lVar3 + (uVar2 & 0xffffffff) * 8) == param_2) {
        *(uint *)(param_1 + 0x1cf0) = uVar1 - 1;
        uVar4 = 1;
        *(undefined8 *)(lVar3 + uVar2 * 8) = *(undefined8 *)(lVar3 + (ulong)(uVar1 - 1) * 8);
        goto LAB_001b8510;
      }
      uVar2 = uVar2 + 1;
    } while ((uint)uVar2 < uVar1);
  }
  uVar4 = 0;
LAB_001b8510:
                    /* try { // try from 001b8514 to 001b8517 has its CatchHandler @ 001b8528 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 8));
  return uVar4;
}


