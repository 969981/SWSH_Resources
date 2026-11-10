/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003d9180; name: FUN_003d9180
 */


void FUN_003d9180(long *param_1,long param_2,long param_3,long param_4,undefined4 param_5)

{
  ushort uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  FUN_003c6e00(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_3 + 0x10),5,9);
  param_1[5] = param_2;
  param_1[6] = param_3;
  puVar2 = PTR_DAT_027127a8;
  *(undefined2 *)(param_1 + 9) = 0xffff;
  *(undefined1 *)((long)param_1 + 0x4a) = 0;
  param_1[8] = param_4;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *param_1 = (long)(puVar2 + 0x10);
                    /* try { // try from 003d91ec to 003d9283 has its CatchHandler @ 003d92a0 */
  FUN_003ba4b0(param_1[1],param_1);
  FUN_003ba4b0(param_1[2],param_1);
  FUN_003cd660(*(undefined8 *)(*(long *)(param_1[1] + 0x48) + 0x1048),param_1);
  lVar5 = param_1[5];
  uVar1 = *(ushort *)(lVar5 + 0x4a);
  uVar4 = (ulong)uVar1;
  if ((uint)uVar1 == (uint)*(ushort *)(lVar5 + 0x48)) {
    FUN_003ae000(lVar5,lVar5 + 0x40,(ushort *)(lVar5 + 0x48),uVar4,uVar1 + 1);
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x4a);
  }
  *(short *)(lVar5 + 0x4a) = (short)uVar4 + 1;
  *(long **)(*(long *)(lVar5 + 0x40) + uVar4 * 8) = param_1;
  *(short *)(param_1 + 9) = (short)uVar4;
  if ((*(char *)(param_1[8] + 0x1b) == '\0') &&
     ((*(byte *)(*(long *)(param_1[6] + 0x40) + 0x40) >> 2 & 1) == 0)) {
    uVar3 = FUN_003ade70(param_1[5]);
    FUN_003aa880(uVar3,param_1[5],param_1[6],param_5);
    *(undefined1 *)((long)param_1 + 0x4a) = 1;
  }
  return;
}


