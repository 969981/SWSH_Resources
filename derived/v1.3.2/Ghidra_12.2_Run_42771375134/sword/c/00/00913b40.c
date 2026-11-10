/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00913b40; name: FUN_00913b40
 */


void FUN_00913b40(long param_1,byte param_2,byte param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  byte *pbVar7;
  
  puVar1 = (undefined2 *)(param_1 + (ulong)param_2 + (ulong)param_2 * 2);
  uVar5 = *puVar1;
  uVar3 = *(undefined1 *)(puVar1 + 1);
  puVar2 = (undefined2 *)(param_1 + (ulong)param_3 + (ulong)param_3 * 2);
  uVar6 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = uVar6;
  *(undefined1 *)(puVar2 + 1) = uVar3;
  *puVar2 = uVar5;
  bVar4 = *(byte *)(puVar1 + 1);
  if (bVar4 != 0x1f) {
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (*(uint *)(param_1 + 0x38) < (uint)bVar4 || *(uint *)(param_1 + 0x38) == (uint)bVar4)) {
      pbVar7 = (byte *)(param_1 + 0x3c);
    }
    else {
      pbVar7 = (byte *)(*(long *)(param_1 + 0x30) + (ulong)bVar4);
    }
    *pbVar7 = param_2;
  }
  bVar4 = *(byte *)(param_1 + (ulong)param_3 * 3 + 2);
  if (bVar4 != 0x1f) {
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (*(uint *)(param_1 + 0x38) < (uint)bVar4 || *(uint *)(param_1 + 0x38) == (uint)bVar4)) {
      pbVar7 = (byte *)(param_1 + 0x3c);
    }
    else {
      pbVar7 = (byte *)(*(long *)(param_1 + 0x30) + (ulong)bVar4);
    }
    *pbVar7 = param_3;
  }
  return;
}


