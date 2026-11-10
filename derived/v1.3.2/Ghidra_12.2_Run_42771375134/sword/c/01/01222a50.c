/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01222a50; name: FUN_01222a50
 */


void FUN_01222a50(undefined4 *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined2 local_2c [2];
  undefined8 local_28;
  
  if (param_2 != (long *)0x0) {
    local_2c[0] = (undefined2)*param_1;
    local_28 = 0;
    if (((*param_2 != 0) && (9 < (ulong)(param_2[1] << 3))) &&
       (uVar2 = FUN_01222ed0(*param_2,&local_28,local_2c), (uVar2 & 1) != 0)) {
      uVar2 = (ulong)param_2[4] >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)param_2[4] & 7));
    }
    local_2c[0] = CONCAT11(local_2c[0]._1_1_,*(undefined1 *)(param_1 + 1));
    local_28 = 10;
    if (*param_2 == 0) {
      lVar3 = 0;
    }
    else {
      if ((0xf < (ulong)(param_2[1] << 3)) &&
         (uVar2 = FUN_012230f0(*param_2,&local_28,local_2c), (uVar2 & 1) != 0)) {
        uVar2 = param_2[4] + 1U >> 3;
        *(byte *)(param_2[3] + uVar2) =
             *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 1U) & 7));
      }
      lVar3 = *param_2;
      if (((lVar3 != 0) && (uVar1 = param_1[2], (uVar1 & 0xff) < 3)) &&
         (0x11 < (ulong)(param_2[1] << 3))) {
        if ((uVar1 & 1) != 0) {
          *(byte *)(lVar3 + 2) = *(byte *)(lVar3 + 2) | 1;
        }
        if ((uVar1 >> 1 & 1) != 0) {
          *(byte *)(lVar3 + 2) = *(byte *)(lVar3 + 2) | 2;
        }
        uVar2 = param_2[4] + 2U >> 3;
        *(byte *)(param_2[3] + uVar2) =
             *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 2U) & 7));
        lVar3 = *param_2;
      }
    }
    if (lVar3 != 0) {
      if (0x12 < (ulong)(param_2[1] << 3)) {
        if (*(char *)(param_1 + 3) != '\0') {
          *(byte *)(lVar3 + 2) = *(byte *)(lVar3 + 2) | 4;
        }
        uVar2 = param_2[4] + 3U >> 3;
        *(byte *)(param_2[3] + uVar2) =
             *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 3U) & 7));
        lVar3 = *param_2;
        if (lVar3 == 0) {
          return;
        }
      }
      if (0x13 < (ulong)(param_2[1] << 3)) {
        if (*(char *)((long)param_1 + 0xd) != '\0') {
          *(byte *)(lVar3 + 2) = *(byte *)(lVar3 + 2) | 8;
        }
        uVar2 = param_2[4] + 4U >> 3;
        *(byte *)(param_2[3] + uVar2) =
             *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 4U) & 7));
        lVar3 = *param_2;
        if (lVar3 == 0) {
          return;
        }
      }
      uVar1 = param_1[4];
      if (((uVar1 & 0xff) < 3) && (0x15 < (ulong)(param_2[1] << 3))) {
        if ((uVar1 & 1) != 0) {
          *(byte *)(lVar3 + 2) = *(byte *)(lVar3 + 2) | 0x10;
        }
        if ((uVar1 >> 1 & 1) != 0) {
          *(byte *)(lVar3 + 2) = *(byte *)(lVar3 + 2) | 0x20;
        }
        uVar2 = param_2[4] + 5U >> 3;
        *(byte *)(param_2[3] + uVar2) =
             *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 5U) & 7));
        lVar3 = *param_2;
        if (lVar3 == 0) {
          return;
        }
      }
      if (0x37 < (ulong)(param_2[1] << 3)) {
        *(undefined4 *)(lVar3 + 3) = param_1[5];
        uVar2 = param_2[4] + 6U >> 3;
        *(byte *)(param_2[3] + uVar2) =
             *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 6U) & 7));
        lVar3 = *param_2;
        if (lVar3 == 0) {
          return;
        }
      }
      if ((*(byte *)(param_1 + 6) < 7) && (0x3f < (ulong)(param_2[1] << 3))) {
        *(byte *)(lVar3 + 7) = *(byte *)(param_1 + 6);
        uVar2 = param_2[4] + 7U >> 3;
        *(byte *)(param_2[3] + uVar2) =
             *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 7U) & 7));
      }
    }
  }
  return;
}


