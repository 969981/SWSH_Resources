/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121d220; name: FUN_0121d220
 */


/* WARNING: Removing unreachable block (ram,0x0121d420) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0121d220(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long local_38 [2];
  undefined2 local_28;
  undefined1 local_26;
  undefined8 local_20;
  long lStack_18;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  puVar3 = (undefined8 *)*param_2;
  if (puVar3 != (undefined8 *)0x0) {
    if ((param_1 != (undefined8 *)0x0) && (0xbf < (ulong)(param_2[1] << 3))) {
      uVar1 = *param_1;
      uVar5 = param_1[2];
      puVar3[1] = param_1[1];
      puVar3[2] = uVar5;
      *puVar3 = uVar1;
      uVar4 = (ulong)param_2[4] >> 3;
      *(byte *)(param_2[3] + uVar4) =
           *(byte *)(param_2[3] + uVar4) | (byte)(1 << (ulong)((uint)param_2[4] & 7));
      puVar3 = (undefined8 *)*param_2;
      if (puVar3 == (undefined8 *)0x0) goto LAB_0121d424;
    }
    if (0xc0 < (ulong)(param_2[1] << 3)) {
      if (*(int *)((long)param_1 + 0x1c) != 0) {
        *(byte *)(puVar3 + 3) = *(byte *)(puVar3 + 3) | 1;
      }
      uVar4 = param_2[4] + 1 >> 3;
      *(byte *)(param_2[3] + uVar4) =
           *(byte *)(param_2[3] + uVar4) | (byte)(1 << (ulong)((uint)(param_2[4] + 1) & 7));
      puVar3 = (undefined8 *)*param_2;
      if (puVar3 == (undefined8 *)0x0) goto LAB_0121d424;
    }
    if (0xc1 < (ulong)(param_2[1] << 3)) {
      if (*(int *)(param_1 + 4) != 0) {
        *(byte *)(puVar3 + 3) = *(byte *)(puVar3 + 3) | 2;
      }
      uVar4 = param_2[4] + 2 >> 3;
      *(byte *)(param_2[3] + uVar4) =
           *(byte *)(param_2[3] + uVar4) | (byte)(1 << (ulong)((uint)(param_2[4] + 2) & 7));
      puVar3 = (undefined8 *)*param_2;
      if (puVar3 == (undefined8 *)0x0) goto LAB_0121d424;
    }
    if ((0xc5 < (ulong)(param_2[1] << 3)) && (bVar2 = *(byte *)((long)param_1 + 0x24), bVar2 < 0xb))
    {
      if ((bVar2 & 1) != 0) {
        *(byte *)(puVar3 + 3) = *(byte *)(puVar3 + 3) | 4;
        bVar2 = *(byte *)((long)param_1 + 0x24);
      }
      if ((bVar2 >> 1 & 1) != 0) {
        *(byte *)(puVar3 + 3) = *(byte *)(puVar3 + 3) | 8;
        bVar2 = *(byte *)((long)param_1 + 0x24);
      }
      if ((bVar2 >> 2 & 1) != 0) {
        *(byte *)(puVar3 + 3) = *(byte *)(puVar3 + 3) | 0x10;
        bVar2 = *(byte *)((long)param_1 + 0x24);
      }
      if ((bVar2 >> 3 & 1) != 0) {
        *(byte *)(puVar3 + 3) = *(byte *)(puVar3 + 3) | 0x20;
      }
      uVar4 = param_2[4] + 3 >> 3;
      *(byte *)(param_2[3] + uVar4) =
           *(byte *)(param_2[3] + uVar4) | (byte)(1 << (ulong)((uint)(param_2[4] + 3) & 7));
      puVar3 = (undefined8 *)*param_2;
      if (puVar3 == (undefined8 *)0x0) goto LAB_0121d424;
    }
    if (0xcf < (ulong)(param_2[1] * 8)) {
      *(undefined1 *)((long)puVar3 + 0x19) = *(undefined1 *)((long)param_1 + 0x25);
      uVar4 = param_2[4] + 4 >> 3;
      *(byte *)(param_2[3] + uVar4) =
           *(byte *)(param_2[3] + uVar4) | (byte)(1 << (ulong)((uint)(param_2[4] + 4) & 7));
      puVar3 = (undefined8 *)*param_2;
      if (puVar3 == (undefined8 *)0x0) goto LAB_0121d424;
    }
    if (0x187 < (ulong)(param_2[1] << 3)) {
      local_20 = param_2[3];
      local_38[0] = (long)puVar3 + 0x1a;
      local_38[1] = 0x17;
      local_28 = 0;
      lStack_18 = param_2[4] + 5;
      local_26 = 0;
      FUN_0121e340((long)param_1 + 0x26,local_38);
      return;
    }
  }
LAB_0121d424:
  FUN_0121e340((long)param_1 + 0x26,0);
  return;
}


