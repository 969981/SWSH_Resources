/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ddccd0; name: FUN_00ddccd0
 */


void FUN_00ddccd0(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar5 == 0)) {
    lVar4 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar5);
    lVar4 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00dbc9a0(param_1,param_2,param_3,lVar4);
  puVar3 = PTR_DAT_0271ebd0;
  param_1[0x98] = 0;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[9] = (long)(puVar3 + 0x248);
  param_1[10] = (long)(puVar3 + 0x288);
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = (long)(PTR_DAT_027164d8 + 0x10);
  param_1[0xbc] = 0;
  *(undefined1 *)(param_1 + 0xbd) = 1;
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 9) ||
     (uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[4], uVar5 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)((long)param_4 + uVar5);
  }
  *(undefined4 *)((long)param_1 + 0x5ec) = uVar6;
  *(undefined4 *)(param_1 + 0xbe) = 7;
  *(undefined4 *)((long)param_1 + 0x624) = 0;
  *(undefined2 *)(param_1 + 0xc4) = 0;
  uVar5 = 0xcbf29ce484222645;
  param_1[0xc3] = 0;
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  uVar7 = (ulong)*(ushort *)((long)param_4 + (6 - (long)*param_4));
  puVar1 = (uint *)((long)param_4 + uVar7);
  uVar9 = (ulong)*puVar1;
  bVar2 = *(byte *)((long)puVar1 + uVar9 + 4);
  if (bVar2 != 0) {
    pbVar8 = (byte *)((long)param_4 + uVar9 + uVar7 + 5);
    do {
      uVar5 = (uVar5 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar2 != 0);
  }
  param_1[0x98] = uVar5;
  *(uint *)((long)param_1 + 0x37c) = *(uint *)((long)param_1 + 0x37c) & 0xfffffffe;
  return;
}


