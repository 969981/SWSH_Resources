/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012204f0; name: FUN_012204f0
 */


undefined8 FUN_012204f0(long param_1,ulong *param_2,byte *param_3)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *param_3;
  if ((bVar1 & 1) != 0) {
    uVar2 = *param_2 >> 3;
    *(byte *)(param_1 + uVar2) =
         *(byte *)(param_1 + uVar2) | (byte)(1 << (ulong)((uint)*param_2 & 7));
    bVar1 = *param_3;
  }
  if ((bVar1 >> 1 & 1) != 0) {
    uVar2 = *param_2 + 1 >> 3;
    *(byte *)(param_1 + uVar2) =
         *(byte *)(param_1 + uVar2) | (byte)(1 << (ulong)((uint)(*param_2 + 1) & 7));
    bVar1 = *param_3;
  }
  if ((bVar1 >> 2 & 1) != 0) {
    uVar2 = *param_2 + 2 >> 3;
    *(byte *)(param_1 + uVar2) =
         *(byte *)(param_1 + uVar2) | (byte)(1 << (ulong)((uint)(*param_2 + 2) & 7));
    bVar1 = *param_3;
  }
  if ((bVar1 >> 3 & 1) != 0) {
    uVar2 = *param_2 + 3 >> 3;
    *(byte *)(param_1 + uVar2) =
         *(byte *)(param_1 + uVar2) | (byte)(1 << (ulong)((uint)(*param_2 + 3) & 7));
    bVar1 = *param_3;
  }
  if ((bVar1 >> 4 & 1) != 0) {
    uVar2 = *param_2 + 4 >> 3;
    *(byte *)(param_1 + uVar2) =
         *(byte *)(param_1 + uVar2) | (byte)(1 << (ulong)((uint)(*param_2 + 4) & 7));
    bVar1 = *param_3;
  }
  if ((bVar1 >> 5 & 1) != 0) {
    uVar2 = *param_2 + 5 >> 3;
    *(byte *)(param_1 + uVar2) =
         *(byte *)(param_1 + uVar2) | (byte)(1 << (ulong)((uint)(*param_2 + 5) & 7));
    bVar1 = *param_3;
  }
  if ((bVar1 >> 6 & 1) != 0) {
    uVar2 = *param_2 + 6 >> 3;
    *(byte *)(param_1 + uVar2) =
         *(byte *)(param_1 + uVar2) | (byte)(1 << (ulong)((uint)(*param_2 + 6) & 7));
    bVar1 = *param_3;
  }
  if ((char)bVar1 < '\0') {
    uVar2 = *param_2 + 7 >> 3;
    *(byte *)(param_1 + uVar2) =
         *(byte *)(param_1 + uVar2) | (byte)(1 << (ulong)((uint)(*param_2 + 7) & 7));
    bVar1 = param_3[1];
  }
  else {
    bVar1 = param_3[1];
  }
  if ((bVar1 & 1) != 0) {
    uVar2 = *param_2 + 8 >> 3;
    *(byte *)(param_1 + uVar2) =
         *(byte *)(param_1 + uVar2) | (byte)(1 << (ulong)((uint)(*param_2 + 8) & 7));
    bVar1 = param_3[1];
  }
  if ((bVar1 >> 1 & 1) == 0) {
    return 1;
  }
  uVar2 = *param_2 + 9 >> 3;
  *(byte *)(param_1 + uVar2) =
       *(byte *)(param_1 + uVar2) | (byte)(1 << (ulong)((uint)(*param_2 + 9) & 7));
  return 1;
}


