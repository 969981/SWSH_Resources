/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b8ab0; name: FUN_006b8ab0
 */


void FUN_006b8ab0(undefined8 *param_1,long *param_2,int *param_3)

{
  uint *puVar1;
  byte bVar2;
  size_t sVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  long local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  uVar7 = 0xcbf29ce484222645;
  *param_1 = param_3;
  param_1[1] = 0xcbf29ce484222645;
  *(undefined8 *)((long)param_1 + 0x2d) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = &DAT_01d38550;
  param_1[3] = 0;
  lVar8 = 0;
  if (4 < *(ushort *)((long)param_3 - (long)*param_3)) {
    uVar5 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[2];
    if (uVar5 == 0) {
      lVar8 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_3 + uVar5);
      lVar8 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  sVar3 = strlen((char *)(lVar8 + 4));
  bVar2 = *(byte *)(lVar8 + 4);
  if (bVar2 != 0) {
    pbVar6 = (byte *)(lVar8 + 5);
    do {
      uVar7 = (uVar7 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar2 != 0);
  }
  param_1[1] = uVar7;
  param_1[2] = (char *)(lVar8 + 4);
  param_1[3] = sVar3;
  param_1[4] = 0;
  (**(code **)(*param_2 + 0x30))(&local_58,param_2,param_1 + 1);
  lVar8 = local_58;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  lVar4 = param_1[5];
  param_1[5] = lVar8;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 7) = local_48;
  param_1[6] = uStack_50;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return;
}


