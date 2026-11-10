/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f7a60; name: FUN_011f7a60
 */


void FUN_011f7a60(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  
  if ((param_2 != (undefined8 *)0x0) &&
     (puVar1 = (undefined4 *)*param_2, puVar1 != (undefined4 *)0x0)) {
    if (0x1f < (ulong)(param_2[1] << 3)) {
      *puVar1 = *param_1;
      uVar2 = (ulong)param_2[4] >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)param_2[4] & 7));
      puVar1 = (undefined4 *)*param_2;
      if (puVar1 == (undefined4 *)0x0) {
        return;
      }
    }
    if (0x2f < (ulong)(param_2[1] << 3)) {
      *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(param_1 + 1);
      uVar2 = param_2[4] + 1 >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 1) & 7));
      puVar1 = (undefined4 *)*param_2;
      if (puVar1 == (undefined4 *)0x0) {
        return;
      }
    }
    if (0x37 < (ulong)(param_2[1] << 3)) {
      *(undefined1 *)((long)puVar1 + 6) = *(undefined1 *)((long)param_1 + 6);
      uVar2 = param_2[4] + 2 >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 2) & 7));
      puVar1 = (undefined4 *)*param_2;
      if (puVar1 == (undefined4 *)0x0) {
        return;
      }
    }
    if (0x3f < (ulong)(param_2[1] << 3)) {
      *(undefined1 *)((long)puVar1 + 7) = *(undefined1 *)((long)param_1 + 7);
      uVar2 = param_2[4] + 3 >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 3) & 7));
      puVar1 = (undefined4 *)*param_2;
      if (puVar1 == (undefined4 *)0x0) {
        return;
      }
    }
    if (0x4f < (ulong)(param_2[1] << 3)) {
      *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(param_1 + 2);
      uVar2 = param_2[4] + 4 >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 4) & 7));
    }
  }
  return;
}


