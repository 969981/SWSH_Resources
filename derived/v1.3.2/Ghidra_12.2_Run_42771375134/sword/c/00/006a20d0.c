/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a20d0; name: FUN_006a20d0
 */


void FUN_006a20d0(undefined8 *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  size_t sVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = 0xcbf29ce484222645;
  *param_1 = param_2;
  param_1[1] = 0xcbf29ce484222645;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = &DAT_01d38550;
  lVar7 = 0;
  if (4 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar4 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
    if (uVar4 == 0) {
      lVar7 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_2 + uVar4);
      lVar7 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  sVar3 = strlen((char *)(lVar7 + 4));
  bVar2 = *(byte *)(lVar7 + 4);
  if (bVar2 != 0) {
    pbVar5 = (byte *)(lVar7 + 5);
    do {
      uVar6 = (uVar6 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar2 != 0);
  }
  param_1[1] = uVar6;
  param_1[2] = (char *)(lVar7 + 4);
  param_1[3] = sVar3;
  param_1[4] = 0;
  return;
}


