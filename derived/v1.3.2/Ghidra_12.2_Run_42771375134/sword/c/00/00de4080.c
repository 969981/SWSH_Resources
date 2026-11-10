/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de4080; name: FUN_00de4080
 */


void FUN_00de4080(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar4 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar4 == 0)) {
    lVar3 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar4);
    lVar3 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00db5850(param_1,param_2,param_3,lVar3);
  puVar2 = PTR_DAT_0271ec70;
  *param_1 = (long)(PTR_DAT_0271ec70 + 0x10);
  param_1[9] = (long)(puVar2 + 0x1a0);
  param_1[10] = (long)(puVar2 + 0x1e0);
  *(undefined4 *)(param_1 + 0x76) = 0x41f00000;
  puVar5 = (ushort *)((long)param_4 - (long)*param_4);
  uVar6 = 0;
  uVar8 = 0;
  uVar7 = 0;
  if (6 < *puVar5) {
    uVar7 = 0;
    uVar8 = 0;
    if ((ulong)puVar5[3] != 0) {
      uVar8 = *(uint *)((long)param_4 + (ulong)puVar5[3]);
    }
    if ((8 < *puVar5) && ((ulong)puVar5[4] != 0)) {
      uVar7 = *(uint *)((long)param_4 + (ulong)puVar5[4]);
    }
  }
  uVar4 = 0;
  param_1[0x79] = (ulong)uVar7;
  param_1[0x78] = (ulong)uVar8;
  puVar5 = (ushort *)((long)param_4 - (long)*param_4);
  if (10 < *puVar5) {
    uVar4 = 0;
    uVar6 = 0;
    if ((ulong)puVar5[5] != 0) {
      uVar6 = *(uint *)((long)param_4 + (ulong)puVar5[5]);
    }
    if ((0xc < *puVar5) && ((ulong)puVar5[6] != 0)) {
      uVar4 = (ulong)*(uint *)((long)param_4 + (ulong)puVar5[6]);
    }
  }
  param_1[0x7b] = uVar4;
  param_1[0x7a] = (ulong)uVar6;
  return;
}


