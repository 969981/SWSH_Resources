/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01222ed0; name: FUN_01222ed0
 */


undefined8 FUN_01222ed0(long param_1,ulong *param_2,ushort *param_3)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar1 = *param_3;
  uVar3 = (uint)uVar1;
  if ((uVar1 != 0) && (0x381 < (ushort)(uVar1 - 1))) {
    return 0;
  }
  if ((uVar1 & 1) == 0) {
    if (((uVar1 & 0xff) >> 1 & 1) != 0) {
LAB_01222f2c:
      uVar4 = *param_2 + 1 >> 3;
      *(byte *)(param_1 + uVar4) =
           *(byte *)(param_1 + uVar4) | (byte)(1 << (ulong)((uint)(*param_2 + 1) & 7));
      uVar3 = (uint)(byte)*param_3;
    }
  }
  else {
    uVar4 = *param_2 >> 3;
    *(byte *)(param_1 + uVar4) =
         *(byte *)(param_1 + uVar4) | (byte)(1 << (ulong)((uint)*param_2 & 7));
    uVar3 = (uint)(byte)*param_3;
    if (((byte)*param_3 >> 1 & 1) != 0) goto LAB_01222f2c;
  }
  if ((uVar3 >> 2 & 1) == 0) {
    if ((uVar3 >> 3 & 1) != 0) goto LAB_01222fb4;
LAB_01222f5c:
    if ((uVar3 >> 4 & 1) != 0) goto LAB_01222fe0;
LAB_01222f60:
    if ((uVar3 >> 5 & 1) != 0) goto LAB_0122300c;
LAB_01222f64:
    bVar2 = (byte)uVar3;
    if ((uVar3 >> 6 & 1) == 0) goto joined_r0x01223064;
  }
  else {
    uVar4 = *param_2 + 2 >> 3;
    *(byte *)(param_1 + uVar4) =
         *(byte *)(param_1 + uVar4) | (byte)(1 << (ulong)((uint)(*param_2 + 2) & 7));
    uVar3 = (uint)(byte)*param_3;
    if (((byte)*param_3 >> 3 & 1) == 0) goto LAB_01222f5c;
LAB_01222fb4:
    uVar4 = *param_2 + 3 >> 3;
    *(byte *)(param_1 + uVar4) =
         *(byte *)(param_1 + uVar4) | (byte)(1 << (ulong)((uint)(*param_2 + 3) & 7));
    uVar3 = (uint)(byte)*param_3;
    if (((byte)*param_3 >> 4 & 1) == 0) goto LAB_01222f60;
LAB_01222fe0:
    uVar4 = *param_2 + 4 >> 3;
    *(byte *)(param_1 + uVar4) =
         *(byte *)(param_1 + uVar4) | (byte)(1 << (ulong)((uint)(*param_2 + 4) & 7));
    uVar3 = (uint)(byte)*param_3;
    if (((byte)*param_3 >> 5 & 1) == 0) goto LAB_01222f64;
LAB_0122300c:
    uVar4 = *param_2 + 5 >> 3;
    *(byte *)(param_1 + uVar4) =
         *(byte *)(param_1 + uVar4) | (byte)(1 << (ulong)((uint)(*param_2 + 5) & 7));
    bVar2 = (byte)*param_3;
    if ((bVar2 >> 6 & 1) == 0) goto joined_r0x01223064;
  }
  uVar4 = *param_2 + 6 >> 3;
  *(byte *)(param_1 + uVar4) =
       *(byte *)(param_1 + uVar4) | (byte)(1 << (ulong)((uint)(*param_2 + 6) & 7));
  bVar2 = (byte)*param_3;
joined_r0x01223064:
  if ((char)bVar2 < '\0') {
    uVar4 = *param_2 + 7 >> 3;
    *(byte *)(param_1 + uVar4) =
         *(byte *)(param_1 + uVar4) | (byte)(1 << (ulong)((uint)(*param_2 + 7) & 7));
    bVar2 = *(byte *)((long)param_3 + 1);
  }
  else {
    bVar2 = *(byte *)((long)param_3 + 1);
  }
  if ((bVar2 & 1) != 0) {
    uVar4 = *param_2 + 8 >> 3;
    *(byte *)(param_1 + uVar4) =
         *(byte *)(param_1 + uVar4) | (byte)(1 << (ulong)((uint)(*param_2 + 8) & 7));
    bVar2 = *(byte *)((long)param_3 + 1);
  }
  if ((bVar2 >> 1 & 1) == 0) {
    return 1;
  }
  uVar4 = *param_2 + 9 >> 3;
  *(byte *)(param_1 + uVar4) =
       *(byte *)(param_1 + uVar4) | (byte)(1 << (ulong)((uint)(*param_2 + 9) & 7));
  return 1;
}


