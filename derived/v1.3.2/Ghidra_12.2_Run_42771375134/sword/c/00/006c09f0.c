/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c09f0; name: FUN_006c09f0
 */


void FUN_006c09f0(undefined8 *param_1,int *param_2)

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
  param_1[6] = &DAT_01d38550;
  param_1[2] = &DAT_01d38550;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xcbf29ce484222645;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = PTR_DAT_027150c0 + 0x10;
  param_1[0xb] = 0;
  if (param_2 != (int *)0x0) {
    if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
       (uVar4 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar4 == 0)) {
      lVar7 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_2 + uVar4);
      lVar7 = (long)puVar1 + (ulong)*puVar1;
    }
    sVar3 = strlen((char *)(lVar7 + 4));
    bVar2 = *(byte *)(lVar7 + 4);
    uVar4 = 0xcbf29ce484222645;
    if (bVar2 != 0) {
      uVar4 = 0xcbf29ce484222645;
      pbVar5 = (byte *)(lVar7 + 5);
      do {
        uVar4 = (uVar4 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    param_1[1] = uVar4;
    param_1[2] = (char *)(lVar7 + 4);
    lVar7 = 0;
    param_1[3] = sVar3;
    param_1[4] = 0;
    if (6 < *(ushort *)((long)param_2 - (long)*param_2)) {
      uVar4 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
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
    param_1[5] = uVar6;
    param_1[6] = (char *)(lVar7 + 4);
    param_1[7] = sVar3;
    param_1[8] = 0;
  }
  return;
}


