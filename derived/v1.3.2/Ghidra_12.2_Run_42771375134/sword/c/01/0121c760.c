/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121c760; name: FUN_0121c760
 */


/* WARNING: Removing unreachable block (ram,0x0121cc28) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0121c760(long param_1,long *param_2)

{
  byte bVar1;
  ulong uVar2;
  long local_38 [2];
  undefined1 local_28;
  long local_20;
  long lStack_18;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  local_38[0] = *param_2;
  if (local_38[0] != 0) {
    if (0x43 < (ulong)(param_2[1] << 3)) {
      bVar1 = *(byte *)(param_1 + 0x1c);
      if ((bVar1 & 1) != 0) {
        *(byte *)(local_38[0] + 8) = *(byte *)(local_38[0] + 8) | 1;
        bVar1 = *(byte *)(param_1 + 0x1c);
      }
      if ((bVar1 >> 1 & 1) != 0) {
        *(byte *)(local_38[0] + 8) = *(byte *)(local_38[0] + 8) | 2;
        bVar1 = *(byte *)(param_1 + 0x1c);
      }
      if ((bVar1 >> 2 & 1) != 0) {
        *(byte *)(local_38[0] + 8) = *(byte *)(local_38[0] + 8) | 4;
        bVar1 = *(byte *)(param_1 + 0x1c);
      }
      if ((bVar1 >> 3 & 1) != 0) {
        *(byte *)(local_38[0] + 8) = *(byte *)(local_38[0] + 8) | 8;
      }
      uVar2 = param_2[4] + 8U >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 8U) & 7));
      local_38[0] = *param_2;
      if (local_38[0] == 0) goto LAB_0121cc2c;
    }
    if (0x47 < (ulong)(param_2[1] << 3)) {
      bVar1 = *(byte *)(param_1 + 0x1d);
      if ((bVar1 & 1) != 0) {
        *(byte *)(local_38[0] + 8) = *(byte *)(local_38[0] + 8) | 0x10;
        bVar1 = *(byte *)(param_1 + 0x1d);
      }
      if ((bVar1 >> 1 & 1) != 0) {
        *(byte *)(local_38[0] + 8) = *(byte *)(local_38[0] + 8) | 0x20;
        bVar1 = *(byte *)(param_1 + 0x1d);
      }
      if ((bVar1 >> 2 & 1) != 0) {
        *(byte *)(local_38[0] + 8) = *(byte *)(local_38[0] + 8) | 0x40;
        bVar1 = *(byte *)(param_1 + 0x1d);
      }
      if ((bVar1 >> 3 & 1) != 0) {
        *(byte *)(local_38[0] + 8) = *(byte *)(local_38[0] + 8) | 0x80;
      }
      uVar2 = param_2[4] + 9U >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 9U) & 7));
      local_38[0] = *param_2;
      if (local_38[0] == 0) goto LAB_0121cc2c;
    }
    if (0x48 < (ulong)(param_2[1] << 3)) {
      if (*(char *)(param_1 + 0x1e) != '\0') {
        *(byte *)(local_38[0] + 9) = *(byte *)(local_38[0] + 9) | 1;
      }
      uVar2 = param_2[4] + 10U >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 10U) & 7));
      local_38[0] = *param_2;
      if (local_38[0] == 0) goto LAB_0121cc2c;
    }
    if (0x49 < (ulong)(param_2[1] << 3)) {
      if (*(char *)(param_1 + 0x1f) != '\0') {
        *(byte *)(local_38[0] + 9) = *(byte *)(local_38[0] + 9) | 2;
      }
      uVar2 = param_2[4] + 0xbU >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 0xbU) & 7));
      local_38[0] = *param_2;
      if (local_38[0] == 0) goto LAB_0121cc2c;
    }
    if (0x4a < (ulong)(param_2[1] << 3)) {
      if (*(char *)(param_1 + 0x20) != '\0') {
        *(byte *)(local_38[0] + 9) = *(byte *)(local_38[0] + 9) | 4;
      }
      uVar2 = param_2[4] + 0xcU >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 0xcU) & 7));
      local_38[0] = *param_2;
      if (local_38[0] == 0) goto LAB_0121cc2c;
    }
    if ((0x4d < (ulong)(param_2[1] << 3)) && (bVar1 = *(byte *)(param_1 + 0x21), bVar1 < 5)) {
      if ((bVar1 & 1) != 0) {
        *(byte *)(local_38[0] + 9) = *(byte *)(local_38[0] + 9) | 8;
        bVar1 = *(byte *)(param_1 + 0x21);
      }
      if ((bVar1 >> 1 & 1) != 0) {
        *(byte *)(local_38[0] + 9) = *(byte *)(local_38[0] + 9) | 0x10;
        bVar1 = *(byte *)(param_1 + 0x21);
      }
      if ((bVar1 >> 2 & 1) != 0) {
        *(byte *)(local_38[0] + 9) = *(byte *)(local_38[0] + 9) | 0x20;
      }
      uVar2 = param_2[4] + 0xdU >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 0xdU) & 7));
      local_38[0] = *param_2;
      if (local_38[0] == 0) goto LAB_0121cc2c;
    }
    if (0x5f < (ulong)(param_2[1] << 3)) {
      *(undefined2 *)(local_38[0] + 10) = *(undefined2 *)(param_1 + 0x22);
      uVar2 = param_2[4] + 0xeU >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 0xeU) & 7));
      local_38[0] = *param_2;
      if (local_38[0] == 0) goto LAB_0121cc2c;
    }
    if (0x6f < (ulong)(param_2[1] << 3)) {
      *(undefined2 *)(local_38[0] + 0xc) = *(undefined2 *)(param_1 + 0x24);
      uVar2 = param_2[4] + 0xfU >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 0xfU) & 7));
      local_38[0] = *param_2;
      if (local_38[0] == 0) goto LAB_0121cc2c;
    }
    if (0x8f < (ulong)(param_2[1] << 3)) {
      *(undefined4 *)(local_38[0] + 0xe) = *(undefined4 *)(param_1 + 0x28);
      uVar2 = param_2[4] + 0x10U >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 0x10U) & 7));
      local_38[0] = *param_2;
      if (local_38[0] == 0) goto LAB_0121cc2c;
    }
    if (0x9f < (ulong)(param_2[1] << 3)) {
      *(undefined2 *)(local_38[0] + 0x12) = *(undefined2 *)(param_1 + 0x2c);
      uVar2 = param_2[4] + 0x11U >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 0x11U) & 7));
      local_38[0] = *param_2;
      if (local_38[0] == 0) goto LAB_0121cc2c;
    }
    if (0xaf < (ulong)(param_2[1] << 3)) {
      *(undefined2 *)(local_38[0] + 0x14) = *(undefined2 *)(param_1 + 0x2e);
      uVar2 = param_2[4] + 0x12U >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 0x12U) & 7));
      local_38[0] = *param_2;
      if (local_38[0] == 0) goto LAB_0121cc2c;
    }
    if (0xbf < (ulong)(param_2[1] << 3)) {
      *(undefined2 *)(local_38[0] + 0x16) = *(undefined2 *)(param_1 + 0x30);
      uVar2 = param_2[4] + 0x13U >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 0x13U) & 7));
      local_38[0] = *param_2;
      if (local_38[0] == 0) goto LAB_0121cc2c;
    }
    if (0xcf < (ulong)(param_2[1] << 3)) {
      *(undefined2 *)(local_38[0] + 0x18) = *(undefined2 *)(param_1 + 0x32);
      uVar2 = param_2[4] + 0x14U >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 0x14U) & 7));
      local_38[0] = *param_2;
      if (local_38[0] == 0) goto LAB_0121cc2c;
    }
    if (0xd7 < (ulong)(param_2[1] << 3)) {
      *(undefined1 *)(local_38[0] + 0x1a) = *(undefined1 *)(param_1 + 0x34);
      uVar2 = param_2[4] + 0x15U >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 0x15U) & 7));
      local_38[0] = *param_2;
      if (local_38[0] == 0) goto LAB_0121cc2c;
    }
    if (0xdf < (ulong)(param_2[1] * 8)) {
      *(undefined1 *)(local_38[0] + 0x1b) = *(undefined1 *)(param_1 + 0x35);
      uVar2 = param_2[4] + 0x16U >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 0x16U) & 7));
      local_38[0] = *param_2;
      if (local_38[0] == 0) goto LAB_0121cc2c;
    }
    if (0x3f < (ulong)(param_2[1] << 3)) {
      local_20 = param_2[3];
      lStack_18 = param_2[4];
      local_38[1] = 8;
      local_28 = 0;
      FUN_01222a50(param_1,local_38);
      return;
    }
  }
LAB_0121cc2c:
  FUN_01222a50(param_1,0);
  return;
}


