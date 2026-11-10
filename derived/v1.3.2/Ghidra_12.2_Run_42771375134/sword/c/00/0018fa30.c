/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0018fa30; name: FUN_0018fa30
 */


long FUN_0018fa30(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  FUN_003ff570(*(undefined8 *)(param_1 + 0x98));
  iVar2 = *(int *)(param_1 + 0x70);
  if (iVar2 == 0) {
                    /* try { // try from 0018fa60 to 0018fab7 has its CatchHandler @ 0018fadc */
    uVar1 = FUN_00190c20(param_1 + 0x58);
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
      goto LAB_0018fac0;
    }
    iVar2 = *(int *)(param_1 + 0x70);
  }
  *(uint *)(param_1 + 0x70) = iVar2 - 1U;
  lVar4 = *(long *)(*(long *)(param_1 + 0x68) + (ulong)(iVar2 - 1U) * 8);
  lVar3 = (ulong)(*(uint *)(lVar4 + 8) >> 5) * 4;
  *(uint *)(*(long *)(param_1 + 0x88) + lVar3) =
       *(uint *)(*(long *)(param_1 + 0x88) + lVar3) | 1 << ((ulong)*(uint *)(lVar4 + 8) & 0x1f);
  if (lVar4 != 0) {
    FUN_00190e30(lVar4,param_2,param_3);
  }
LAB_0018fac0:
                    /* try { // try from 0018fac4 to 0018fac7 has its CatchHandler @ 0018faf4 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0x98));
  return lVar4;
}


