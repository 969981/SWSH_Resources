/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01223cb0; name: FUN_01223cb0
 */


/* WARNING: Removing unreachable block (ram,0x01223ee8) */
/* WARNING: Removing unreachable block (ram,0x01223e70) */
/* WARNING: Removing unreachable block (ram,0x01223f60) */

void FUN_01223cb0(byte *param_1,long *param_2)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  byte *local_48;
  undefined8 local_40;
  undefined1 local_38;
  long local_30;
  long lStack_28;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    bVar1 = *param_1;
    if ((bVar1 < 4) && ((param_2[1] & 0x1fffffffffffffffU) != 0)) {
      if ((bVar1 & 1) != 0) {
        *pbVar2 = *pbVar2 | 1;
      }
      if ((bVar1 >> 1 & 1) != 0) {
        *pbVar2 = *pbVar2 | 2;
      }
      uVar3 = (ulong)param_2[4] >> 3;
      *(byte *)(param_2[3] + uVar3) =
           *(byte *)(param_2[3] + uVar3) | (byte)(1 << (ulong)((uint)param_2[4] & 7));
      pbVar2 = (byte *)*param_2;
      if (pbVar2 == (byte *)0x0) goto LAB_01223e74;
    }
    bVar1 = param_1[1];
    if ((bVar1 < 3) && ((param_2[1] & 0x1fffffffffffffffU) != 0)) {
      if ((bVar1 & 1) != 0) {
        *pbVar2 = *pbVar2 | 4;
      }
      if ((bVar1 >> 1 & 1) != 0) {
        *pbVar2 = *pbVar2 | 8;
      }
      uVar3 = param_2[4] + 1U >> 3;
      *(byte *)(param_2[3] + uVar3) =
           *(byte *)(param_2[3] + uVar3) | (byte)(1 << (ulong)((uint)(param_2[4] + 1U) & 7));
      pbVar2 = (byte *)*param_2;
      if (pbVar2 == (byte *)0x0) goto LAB_01223e74;
    }
    if (0xf < (ulong)(param_2[1] << 3)) {
      pbVar2[1] = param_1[2];
      uVar3 = param_2[4] + 2U >> 3;
      *(byte *)(param_2[3] + uVar3) =
           *(byte *)(param_2[3] + uVar3) | (byte)(1 << (ulong)((uint)(param_2[4] + 2U) & 7));
      pbVar2 = (byte *)*param_2;
      if (pbVar2 == (byte *)0x0) goto LAB_01223e74;
    }
    if (0x17 < (ulong)(param_2[1] * 8)) {
      pbVar2[2] = param_1[3];
      uVar3 = param_2[4] + 3U >> 3;
      *(byte *)(param_2[3] + uVar3) =
           *(byte *)(param_2[3] + uVar3) | (byte)(1 << (ulong)((uint)(param_2[4] + 3U) & 7));
      pbVar2 = (byte *)*param_2;
      if (pbVar2 == (byte *)0x0) goto LAB_01223e74;
    }
    if (0x9f < (ulong)(param_2[1] << 3)) {
      local_30 = param_2[3];
      local_48 = pbVar2 + 3;
      local_40 = 0x11;
      lStack_28 = param_2[4] + 4;
      local_38 = 0;
      FUN_012233b0(param_1 + 0x10,&local_48);
      goto LAB_01223e90;
    }
  }
LAB_01223e74:
  FUN_012233b0(param_1 + 0x10,0);
LAB_01223e90:
  if ((*param_2 == 0) || ((ulong)(param_2[1] << 3) < 0x128)) {
    FUN_012233b0(param_1 + 0x40,0);
  }
  else {
    local_30 = param_2[3];
    local_48 = (byte *)(*param_2 + 0x14);
    local_40 = 0x11;
    lStack_28 = param_2[4] + 10;
    local_38 = 0;
    FUN_012233b0(param_1 + 0x40,&local_48);
  }
  if ((*param_2 == 0) || ((ulong)(param_2[1] << 3) < 0x1b0)) {
    FUN_012233b0(param_1 + 0x70,0);
  }
  else {
    local_30 = param_2[3];
    local_48 = (byte *)(*param_2 + 0x25);
    local_40 = 0x11;
    lStack_28 = param_2[4] + 0x10;
    local_38 = 0;
    FUN_012233b0(param_1 + 0x70,&local_48);
  }
  if ((*param_2 != 0) && (0x1b7 < (ulong)(param_2[1] << 3))) {
    *(byte *)(*param_2 + 0x36) = param_1[0xa0];
    uVar3 = param_2[4] + 0x16U >> 3;
    *(byte *)(param_2[3] + uVar3) =
         *(byte *)(param_2[3] + uVar3) | (byte)(1 << (ulong)((uint)(param_2[4] + 0x16U) & 7));
  }
  return;
}


