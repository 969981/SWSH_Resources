/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007825c0; name: FUN_007825c0
 */


void FUN_007825c0(ulong *param_1,undefined8 *param_2,ulong param_3)

{
  byte bVar1;
  size_t sVar2;
  uint *puVar3;
  byte *pbVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  
  piVar5 = (int *)*param_2;
  puVar3 = (uint *)((long)piVar5 + (ulong)*(ushort *)((long)piVar5 + (0xe - (long)*piVar5)));
  puVar3 = (uint *)((long)puVar3 + (param_3 >> 0x1e & 0x3fffffffc) + (ulong)*puVar3 + 4);
  piVar5 = (int *)((long)puVar3 + (ulong)*puVar3);
  puVar3 = (uint *)((long)piVar5 + (ulong)*(ushort *)((long)piVar5 + (8 - (long)*piVar5)));
  piVar5 = (int *)((long)puVar3 + (ulong)*puVar3);
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 5) ||
     (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar6 == 0)) {
    lVar7 = 0;
  }
  else {
    puVar3 = (uint *)((long)piVar5 + uVar6);
    lVar7 = (long)puVar3 + (ulong)*puVar3;
  }
  uVar6 = 0xcbf29ce484222645;
  sVar2 = strlen((char *)(lVar7 + 4));
  bVar1 = *(byte *)(lVar7 + 4);
  if (bVar1 != 0) {
    pbVar4 = (byte *)(lVar7 + 5);
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
  }
  *param_1 = uVar6;
  param_1[1] = (ulong)(lVar7 + 4);
  param_1[2] = sVar2;
  param_1[3] = 0;
  return;
}


