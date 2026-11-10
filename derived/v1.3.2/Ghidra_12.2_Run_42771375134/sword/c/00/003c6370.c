/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c6370; name: FUN_003c6370
 */


void FUN_003c6370(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 uVar6;
  
  FUN_003c6e00(param_1,param_3,param_4,4,4);
  puVar3 = PTR_DAT_02712778;
  param_1[5] = param_2;
  *param_1 = (long)(puVar3 + 0x10);
                    /* try { // try from 003c63b0 to 003c63d3 has its CatchHandler @ 003c6464 */
  FUN_003c65b0(param_1,0);
  FUN_003ba4b0(param_1[1],param_1);
  FUN_003ba4b0(param_1[2],param_1);
  lVar5 = param_1[5];
  lVar1 = *(long *)(lVar5 + 0x78);
  lVar2 = *(long *)(lVar5 + 0x80);
  if (lVar1 != 0) {
    *(ushort *)(lVar1 + 0xb4) = *(ushort *)(lVar1 + 0xb4) | 0x100;
    *(int *)(*(long *)(lVar1 + 0x88) + 0x94) = *(int *)(*(long *)(lVar1 + 0x88) + 0x94) + 1;
  }
  if (lVar2 != 0) {
    *(ushort *)(lVar2 + 0xb4) = *(ushort *)(lVar2 + 0xb4) | 0x100;
    *(int *)(*(long *)(lVar2 + 0x88) + 0x94) = *(int *)(*(long *)(lVar2 + 0x88) + 0x94) + 1;
  }
  if (lVar1 == 0) {
    uVar4 = 0xffffffc0;
  }
  else {
    uVar4 = *(undefined4 *)(lVar1 + 0xb0);
  }
  if (lVar2 == 0) {
    uVar6 = 0xffffffc0;
  }
  else {
    uVar6 = *(undefined4 *)(lVar2 + 0xb0);
  }
                    /* try { // try from 003c6448 to 003c644f has its CatchHandler @ 003c6460 */
  uVar4 = FUN_00113c30(*(undefined8 *)(*(long *)(param_1[1] + 0x48) + 0x748),lVar5,uVar4,uVar6,
                       param_1);
  *(undefined4 *)(param_1 + 6) = uVar4;
  return;
}


