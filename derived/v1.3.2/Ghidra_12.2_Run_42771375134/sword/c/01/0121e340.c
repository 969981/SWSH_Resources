/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121e340; name: FUN_0121e340
 */


void FUN_0121e340(long param_1,long *param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_28;
  
  if (param_2 != (long *)0x0) {
    local_28 = 0;
    lVar3 = 0;
    if (*param_2 != 0) {
      if ((9 < (ulong)(param_2[1] << 3)) &&
         (uVar2 = FUN_01220300(*param_2,&local_28,param_1), (uVar2 & 1) != 0)) {
        uVar2 = (ulong)param_2[4] >> 3;
        *(byte *)(param_2[3] + uVar2) =
             *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)param_2[4] & 7));
      }
      lVar3 = *param_2;
    }
    local_28 = 10;
    if (((lVar3 != 0) && (0x13 < (ulong)(param_2[1] << 3))) &&
       (uVar2 = FUN_012204f0(lVar3,&local_28,param_1 + 2), (uVar2 & 1) != 0)) {
      uVar2 = param_2[4] + 1U >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 1U) & 7));
    }
    local_28 = 0x14;
    lVar3 = 0;
    if (*param_2 != 0) {
      if ((0x1d < (ulong)(param_2[1] << 3)) &&
         (uVar2 = FUN_012206e0(*param_2,&local_28,param_1 + 4), (uVar2 & 1) != 0)) {
        uVar2 = param_2[4] + 2U >> 3;
        *(byte *)(param_2[3] + uVar2) =
             *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 2U) & 7));
      }
      lVar3 = *param_2;
    }
    local_28 = 0x1e;
    if (((lVar3 != 0) && (0x27 < (ulong)(param_2[1] << 3))) &&
       (uVar2 = FUN_012208d0(lVar3,&local_28,param_1 + 6), (uVar2 & 1) != 0)) {
      uVar2 = param_2[4] + 3U >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 3U) & 7));
    }
    local_28 = 0x28;
    lVar3 = 0;
    if (*param_2 != 0) {
      if ((0x31 < (ulong)(param_2[1] << 3)) &&
         (uVar2 = FUN_01220ac0(*param_2,&local_28,param_1 + 8), (uVar2 & 1) != 0)) {
        uVar2 = param_2[4] + 4U >> 3;
        *(byte *)(param_2[3] + uVar2) =
             *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 4U) & 7));
      }
      lVar3 = *param_2;
    }
    local_28 = 0x32;
    if (((lVar3 != 0) && (0x3b < (ulong)(param_2[1] << 3))) &&
       (uVar2 = FUN_01220cb0(lVar3,&local_28,param_1 + 10), (uVar2 & 1) != 0)) {
      uVar2 = param_2[4] + 5U >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 5U) & 7));
    }
    local_28 = 0x3c;
    lVar3 = 0;
    if (*param_2 != 0) {
      if ((0x45 < (ulong)(param_2[1] << 3)) &&
         (uVar2 = FUN_01220ea0(*param_2,&local_28,param_1 + 0xc), (uVar2 & 1) != 0)) {
        uVar2 = param_2[4] + 6U >> 3;
        *(byte *)(param_2[3] + uVar2) =
             *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 6U) & 7));
      }
      lVar3 = *param_2;
    }
    local_28 = 0x46;
    if (((lVar3 != 0) && (0x4f < (ulong)(param_2[1] << 3))) &&
       (uVar2 = FUN_01221090(lVar3,&local_28,param_1 + 0xe), (uVar2 & 1) != 0)) {
      uVar2 = param_2[4] + 7U >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 7U) & 7));
    }
    local_28 = 0x50;
    lVar3 = 0;
    if (*param_2 != 0) {
      if ((0x59 < (ulong)(param_2[1] << 3)) &&
         (uVar2 = FUN_01221280(*param_2,&local_28,param_1 + 0x10), (uVar2 & 1) != 0)) {
        uVar2 = param_2[4] + 8U >> 3;
        *(byte *)(param_2[3] + uVar2) =
             *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 8U) & 7));
      }
      lVar3 = *param_2;
    }
    local_28 = 0x5a;
    if (((lVar3 != 0) && (99 < (ulong)(param_2[1] << 3))) &&
       (uVar2 = FUN_01221470(lVar3,&local_28,param_1 + 0x12), (uVar2 & 1) != 0)) {
      uVar2 = param_2[4] + 9U >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 9U) & 7));
    }
    local_28 = 100;
    lVar3 = 0;
    if (*param_2 != 0) {
      if ((0x6d < (ulong)(param_2[1] << 3)) &&
         (uVar2 = FUN_01221660(*param_2,&local_28,param_1 + 0x14), (uVar2 & 1) != 0)) {
        uVar2 = param_2[4] + 10U >> 3;
        *(byte *)(param_2[3] + uVar2) =
             *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 10U) & 7));
      }
      lVar3 = *param_2;
    }
    local_28 = 0x6e;
    if (((lVar3 != 0) && (0x77 < (ulong)(param_2[1] << 3))) &&
       (uVar2 = FUN_01221850(lVar3,&local_28,param_1 + 0x16), (uVar2 & 1) != 0)) {
      uVar2 = param_2[4] + 0xbU >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 0xbU) & 7));
    }
    local_28 = 0x78;
    lVar3 = 0;
    if (*param_2 != 0) {
      if ((0x81 < (ulong)(param_2[1] << 3)) &&
         (uVar2 = FUN_01221a40(*param_2,&local_28,param_1 + 0x18), (uVar2 & 1) != 0)) {
        uVar2 = param_2[4] + 0xcU >> 3;
        *(byte *)(param_2[3] + uVar2) =
             *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 0xcU) & 7));
      }
      lVar3 = *param_2;
    }
    local_28 = 0x82;
    if (((lVar3 != 0) && (0x8b < (ulong)(param_2[1] << 3))) &&
       (uVar2 = FUN_01221c30(lVar3,&local_28,param_1 + 0x1a), (uVar2 & 1) != 0)) {
      uVar2 = param_2[4] + 0xdU >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 0xdU) & 7));
    }
    local_28 = 0x8c;
    lVar3 = 0;
    if (*param_2 != 0) {
      if ((0x95 < (ulong)(param_2[1] << 3)) &&
         (uVar2 = FUN_01221e20(*param_2,&local_28,param_1 + 0x1c), (uVar2 & 1) != 0)) {
        uVar2 = param_2[4] + 0xeU >> 3;
        *(byte *)(param_2[3] + uVar2) =
             *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 0xeU) & 7));
      }
      lVar3 = *param_2;
    }
    local_28 = 0x96;
    if (((lVar3 != 0) && (0x9f < (ulong)(param_2[1] << 3))) &&
       (uVar2 = FUN_01222010(lVar3,&local_28,param_1 + 0x1e), (uVar2 & 1) != 0)) {
      uVar2 = param_2[4] + 0xfU >> 3;
      *(byte *)(param_2[3] + uVar2) =
           *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 0xfU) & 7));
    }
    local_28 = 0xa0;
    if (*param_2 != 0) {
      if ((0xa9 < (ulong)(param_2[1] << 3)) &&
         (uVar2 = FUN_01222200(*param_2,&local_28,param_1 + 0x20), (uVar2 & 1) != 0)) {
        uVar2 = param_2[4] + 0x10U >> 3;
        *(byte *)(param_2[3] + uVar2) =
             *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 0x10U) & 7));
      }
      lVar3 = *param_2;
      if (lVar3 != 0) {
        if (0xab < (ulong)(param_2[1] << 3)) {
          bVar1 = *(byte *)(param_1 + 0x22);
          if ((bVar1 & 1) != 0) {
            *(byte *)(lVar3 + 0x15) = *(byte *)(lVar3 + 0x15) | 4;
            bVar1 = *(byte *)(param_1 + 0x22);
          }
          if ((bVar1 >> 1 & 1) != 0) {
            *(byte *)(lVar3 + 0x15) = *(byte *)(lVar3 + 0x15) | 8;
          }
          uVar2 = param_2[4] + 0x11U >> 3;
          *(byte *)(param_2[3] + uVar2) =
               *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 0x11U) & 7));
          lVar3 = *param_2;
          if (lVar3 == 0) {
            return;
          }
        }
        if ((ulong)(param_2[1] * 8) < 0xae) {
          lVar4 = param_2[1];
        }
        else {
          bVar1 = *(byte *)(param_1 + 0x23);
          if ((bVar1 & 1) != 0) {
            *(byte *)(lVar3 + 0x15) = *(byte *)(lVar3 + 0x15) | 0x10;
            bVar1 = *(byte *)(param_1 + 0x23);
          }
          if ((bVar1 >> 1 & 1) != 0) {
            *(byte *)(lVar3 + 0x15) = *(byte *)(lVar3 + 0x15) | 0x20;
          }
          uVar2 = param_2[4] + 0x12U >> 3;
          *(byte *)(param_2[3] + uVar2) =
               *(byte *)(param_2[3] + uVar2) | (byte)(1 << (ulong)((uint)(param_2[4] + 0x12U) & 7));
          lVar3 = *param_2;
          if (lVar3 == 0) {
            return;
          }
          lVar4 = param_2[1];
        }
        if (0xb7 < (ulong)(lVar4 << 3)) {
          local_28 = 0xae;
          uVar2 = FUN_012223f0(lVar3,&local_28,param_1 + 0x24);
          if ((uVar2 & 1) != 0) {
            uVar2 = param_2[4] + 0x13U >> 3;
            *(byte *)(param_2[3] + uVar2) =
                 *(byte *)(param_2[3] + uVar2) |
                 (byte)(1 << (ulong)((uint)(param_2[4] + 0x13U) & 7));
          }
        }
      }
    }
  }
  return;
}


