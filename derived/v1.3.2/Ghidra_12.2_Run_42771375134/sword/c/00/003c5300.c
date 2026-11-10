/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c5300; name: FUN_003c5300
 */


void FUN_003c5300(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  uint local_24;
  
  bVar2 = *(byte *)(param_1 + 0x88);
  if ((bVar2 & 1) != 0) {
                    /* try { // try from 003c5324 to 003c53bb has its CatchHandler @ 003c5420 */
    FUN_003c1a40(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x800),param_1);
    bVar2 = *(byte *)(param_1 + 0x88);
  }
  if ((bVar2 >> 3 & 1) == 0) {
    FUN_003c64f0(*(undefined8 *)(param_1 + 0x70));
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 0x1110);
  uVar1 = *(uint *)(param_1 + 0x4c);
  local_24 = uVar1;
  FUN_00190b50(lVar4 + 0x20,uVar1 + 1);
  lVar3 = (ulong)(uVar1 >> 5) * 4;
  *(uint *)(*(long *)(lVar4 + 0x20) + lVar3) =
       *(uint *)(*(long *)(lVar4 + 0x20) + lVar3) | 1 << (ulong)(uVar1 & 0x1f);
  if (*(uint *)(lVar4 + 0x38) < (*(uint *)(lVar4 + 0x3c) & 0x7fffffff)) {
    *(uint *)(*(long *)(lVar4 + 0x30) + (ulong)*(uint *)(lVar4 + 0x38) * 4) = local_24;
    *(int *)(lVar4 + 0x38) = *(int *)(lVar4 + 0x38) + 1;
    puVar5 = *(undefined8 **)(param_1 + 0x70);
  }
  else {
    FUN_001b4230(lVar4 + 0x30,&local_24);
    puVar5 = *(undefined8 **)(param_1 + 0x70);
  }
  if (puVar5 != (undefined8 *)0x0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 0x1160);
    (**(code **)*puVar5)(puVar5);
    *(int *)(lVar3 + 0x224) = *(int *)(lVar3 + 0x224) + -1;
    *puVar5 = *(undefined8 *)(lVar3 + 0x230);
    *(undefined8 **)(lVar3 + 0x230) = puVar5;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 003c5404 to 003c5407 has its CatchHandler @ 003c5420 */
    FUN_003e0390(*(undefined8 *)(param_1 + 0x60),*(long *)(param_1 + 0x20),
                 *(undefined4 *)(param_1 + 8));
  }
  *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x50) = 0;
  return;
}


