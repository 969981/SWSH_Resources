/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df9820; name: FUN_00df9820
 */


void FUN_00df9820(long param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  uint local_280 [40];
  ulong local_1e0 [4];
  undefined4 local_1c0 [2];
  undefined8 local_1b8;
  ulong local_1b0 [40];
  undefined1 local_70;
  
  uVar6 = 0xcbf29ce484222645;
  local_1b0[0] = 0xcbf29ce484222645;
  local_1b0[0x27] = 0xcbf29ce484222645;
  local_1b0[1] = 0xcbf29ce484222645;
  local_1b0[2] = 0xcbf29ce484222645;
  local_1b0[3] = 0xcbf29ce484222645;
  local_1b0[4] = 0xcbf29ce484222645;
  local_70 = 0;
  local_1b0[5] = 0xcbf29ce484222645;
  local_1b0[6] = 0xcbf29ce484222645;
  local_1b0[7] = 0xcbf29ce484222645;
  local_1b0[8] = 0xcbf29ce484222645;
  local_1b0[9] = 0xcbf29ce484222645;
  local_1b0[10] = 0xcbf29ce484222645;
  local_1b0[0xb] = 0xcbf29ce484222645;
  local_1b0[0xc] = 0xcbf29ce484222645;
  local_1b0[0xd] = 0xcbf29ce484222645;
  local_1b0[0xe] = 0xcbf29ce484222645;
  local_1b0[0xf] = 0xcbf29ce484222645;
  local_1b0[0x10] = 0xcbf29ce484222645;
  local_1b0[0x11] = 0xcbf29ce484222645;
  local_1b0[0x12] = 0xcbf29ce484222645;
  local_1b0[0x13] = 0xcbf29ce484222645;
  local_1b0[0x14] = 0xcbf29ce484222645;
  local_1b0[0x15] = 0xcbf29ce484222645;
  local_1b0[0x16] = 0xcbf29ce484222645;
  local_1b0[0x17] = 0xcbf29ce484222645;
  local_1b0[0x18] = 0xcbf29ce484222645;
  local_1b0[0x19] = 0xcbf29ce484222645;
  local_1b0[0x1a] = 0xcbf29ce484222645;
  local_1b0[0x1b] = 0xcbf29ce484222645;
  local_1b0[0x1c] = 0xcbf29ce484222645;
  local_1b0[0x1d] = 0xcbf29ce484222645;
  local_1b0[0x1e] = 0xcbf29ce484222645;
  local_1b0[0x1f] = 0xcbf29ce484222645;
  local_1b0[0x20] = 0xcbf29ce484222645;
  local_1b0[0x21] = 0xcbf29ce484222645;
  local_1b0[0x22] = 0xcbf29ce484222645;
  local_1b0[0x23] = 0xcbf29ce484222645;
  local_1b0[0x24] = 0xcbf29ce484222645;
  local_1b0[0x25] = 0xcbf29ce484222645;
  local_1b0[0x26] = 0xcbf29ce484222645;
  local_1e0[2] = 0;
  local_1e0[3] = 0;
  local_1e0[0] = 0;
  local_1e0[1] = 0;
  if (*param_2 == 0x4bfdbfcd09095ca0) {
    local_1b8 = 0xe36dd9af23c8b21f;
    local_280[0x24] = 0;
    local_280[0x25] = 0;
    local_280[0x26] = 0;
    local_280[0x27] = 0;
    local_280[0x12] = 0;
    local_280[0x13] = 0;
    local_280[0x14] = 0x26;
    local_280[0x15] = 0x27;
    local_280[0x16] = 0x28;
    local_280[0x17] = 0x29;
    local_280[0x20] = 0;
    local_280[0x21] = 0;
    local_280[0x22] = 0;
    local_280[0x23] = 0;
    local_280[0x1c] = 0;
    local_280[0x1d] = 0;
    local_280[0x1e] = 0;
    local_280[0x1f] = 0;
    local_280[0x18] = 0x2a;
    local_280[0x19] = 0xffffffff;
    local_280[0x1a] = 0;
    local_280[0x1b] = 0;
    uVar4 = 0x26;
    local_1c0[0] = 0;
    local_280[4] = 0x2f;
    local_280[5] = 0xffffffff;
    local_280[0xe] = 0;
    local_280[0xf] = 0;
    local_280[0x10] = 0;
    local_280[0x11] = 0;
    local_280[10] = 0;
    local_280[0xb] = 0;
    local_280[0xc] = 0;
    local_280[0xd] = 0;
    local_280[6] = 0;
    local_280[7] = 0;
    local_280[8] = 0;
    local_280[9] = 0;
    local_280[0] = 0x2b;
    local_280[1] = 0x2c;
    local_280[2] = 0x2d;
    local_280[3] = 0x2e;
    uVar6 = 0;
    do {
      snprintf((char *)local_1e0,0x20,"%s%d","GfMapCamArea_Polygon",uVar4);
      uVar4 = 0xcbf29ce484222645;
      if ((byte)local_1e0[0] != 0) {
        uVar4 = 0xcbf29ce484222645;
        pbVar5 = (byte *)((ulong)local_1e0 | 1);
        bVar2 = (byte)local_1e0[0];
        do {
          uVar4 = (uVar4 ^ bVar2) * 0x100000001b3;
          bVar2 = *pbVar5;
          pbVar5 = pbVar5 + 1;
        } while (bVar2 != 0);
      }
      local_1b0[uVar6] = uVar4;
    } while ((uVar6 + 1 < 0x14) &&
            (lVar3 = uVar6 + 0x15, uVar4 = (ulong)local_280[lVar3], uVar6 = uVar6 + 1,
            -1 < (int)local_280[lVar3]));
    uVar4 = 0x2b;
    uVar6 = 0;
    do {
      snprintf((char *)local_1e0,0x20,"%s%d","GfMapCamArea_Polygon",uVar4);
      uVar4 = 0xcbf29ce484222645;
      if ((byte)local_1e0[0] != 0) {
        uVar4 = 0xcbf29ce484222645;
        pbVar5 = (byte *)((ulong)local_1e0 | 1);
        bVar2 = (byte)local_1e0[0];
        do {
          uVar4 = (uVar4 ^ bVar2) * 0x100000001b3;
          bVar2 = *pbVar5;
          pbVar5 = pbVar5 + 1;
        } while (bVar2 != 0);
      }
      uVar1 = uVar6 + 1;
      local_1b0[uVar6 + 0x14] = uVar4;
    } while ((uVar1 < 0x14) &&
            (uVar4 = (ulong)local_280[uVar1], uVar6 = uVar1, -1 < (int)local_280[uVar1]));
  }
  else {
    if (*param_2 != -0x65c2082c8248f4bf) {
      return;
    }
    local_1c0[0] = 0;
    local_1b8 = 0x58cdfd5003982bd8;
    snprintf((char *)local_1e0,0x20,"%s%d","GfMapCamArea_Polygon",5);
    uVar4 = local_1e0[0] & 0xff;
    local_1b0[0] = 0xcbf29ce484222645;
    if ((byte)local_1e0[0] != '\0') {
      local_1b0[0] = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)local_1e0 | 1);
      do {
        local_1b0[0] = (local_1b0[0] ^ uVar4) * 0x100000001b3;
        bVar2 = *pbVar5;
        uVar4 = (ulong)bVar2;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    snprintf((char *)local_1e0,0x20,"%s%d","GfMapCamArea_Polygon",0xe);
    uVar4 = local_1e0[0] & 0xff;
    local_1b0[1] = 0xcbf29ce484222645;
    if ((byte)local_1e0[0] != '\0') {
      local_1b0[1] = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)local_1e0 | 1);
      do {
        local_1b0[1] = (local_1b0[1] ^ uVar4) * 0x100000001b3;
        bVar2 = *pbVar5;
        uVar4 = (ulong)bVar2;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    snprintf((char *)local_1e0,0x20,"%s%d","GfMapCamArea_Polygon",0x2e);
    uVar4 = local_1e0[0] & 0xff;
    local_1b0[2] = 0xcbf29ce484222645;
    if ((byte)local_1e0[0] != '\0') {
      local_1b0[2] = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)local_1e0 | 1);
      do {
        local_1b0[2] = (local_1b0[2] ^ uVar4) * 0x100000001b3;
        bVar2 = *pbVar5;
        uVar4 = (ulong)bVar2;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    snprintf((char *)local_1e0,0x20,"%s%d","GfMapCamArea_Polygon",0x2f);
    uVar4 = local_1e0[0] & 0xff;
    local_1b0[3] = 0xcbf29ce484222645;
    if ((byte)local_1e0[0] != '\0') {
      local_1b0[3] = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)local_1e0 | 1);
      do {
        local_1b0[3] = (local_1b0[3] ^ uVar4) * 0x100000001b3;
        bVar2 = *pbVar5;
        uVar4 = (ulong)bVar2;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    snprintf((char *)local_1e0,0x20,"%s%d","GfMapCamArea_Polygon",0x30);
    uVar4 = local_1e0[0] & 0xff;
    local_1b0[4] = 0xcbf29ce484222645;
    if ((byte)local_1e0[0] != '\0') {
      local_1b0[4] = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)local_1e0 | 1);
      do {
        local_1b0[4] = (local_1b0[4] ^ uVar4) * 0x100000001b3;
        bVar2 = *pbVar5;
        uVar4 = (ulong)bVar2;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    snprintf((char *)local_1e0,0x20,"%s%d","GfMapCamArea_Polygon",0x31);
    uVar4 = local_1e0[0] & 0xff;
    local_1b0[5] = 0xcbf29ce484222645;
    if ((byte)local_1e0[0] != '\0') {
      local_1b0[5] = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)local_1e0 | 1);
      do {
        local_1b0[5] = (local_1b0[5] ^ uVar4) * 0x100000001b3;
        bVar2 = *pbVar5;
        uVar4 = (ulong)bVar2;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    snprintf((char *)local_1e0,0x20,"%s%d","GfMapCamArea_Polygon",0x32);
    uVar4 = local_1e0[0] & 0xff;
    local_1b0[6] = 0xcbf29ce484222645;
    if ((byte)local_1e0[0] != '\0') {
      local_1b0[6] = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)local_1e0 | 1);
      do {
        local_1b0[6] = (local_1b0[6] ^ uVar4) * 0x100000001b3;
        bVar2 = *pbVar5;
        uVar4 = (ulong)bVar2;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    snprintf((char *)local_1e0,0x20,"%s%d","GfMapCamArea_Polygon",0x33);
    uVar4 = local_1e0[0] & 0xff;
    local_1b0[7] = 0xcbf29ce484222645;
    if ((byte)local_1e0[0] != '\0') {
      local_1b0[7] = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)local_1e0 | 1);
      do {
        local_1b0[7] = (local_1b0[7] ^ uVar4) * 0x100000001b3;
        bVar2 = *pbVar5;
        uVar4 = (ulong)bVar2;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    snprintf((char *)local_1e0,0x20,"%s%d","GfMapCamArea_Polygon",0x34);
    uVar4 = local_1e0[0] & 0xff;
    local_1b0[8] = 0xcbf29ce484222645;
    if ((byte)local_1e0[0] != '\0') {
      local_1b0[8] = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)local_1e0 | 1);
      do {
        local_1b0[8] = (local_1b0[8] ^ uVar4) * 0x100000001b3;
        bVar2 = *pbVar5;
        uVar4 = (ulong)bVar2;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    snprintf((char *)local_1e0,0x20,"%s%d","GfMapCamArea_Polygon",0x35);
    uVar4 = local_1e0[0] & 0xff;
    local_1b0[9] = 0xcbf29ce484222645;
    if ((byte)local_1e0[0] != '\0') {
      local_1b0[9] = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)local_1e0 | 1);
      do {
        local_1b0[9] = (local_1b0[9] ^ uVar4) * 0x100000001b3;
        bVar2 = *pbVar5;
        uVar4 = (ulong)bVar2;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    snprintf((char *)local_1e0,0x20,"%s%d","GfMapCamArea_Polygon",0x36);
    uVar4 = local_1e0[0] & 0xff;
    local_1b0[0x14] = 0xcbf29ce484222645;
    if ((byte)local_1e0[0] != '\0') {
      local_1b0[0x14] = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)local_1e0 | 1);
      do {
        local_1b0[0x14] = (local_1b0[0x14] ^ uVar4) * 0x100000001b3;
        bVar2 = *pbVar5;
        uVar4 = (ulong)bVar2;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    snprintf((char *)local_1e0,0x20,"%s%d","GfMapCamArea_Polygon",0x37);
    uVar4 = local_1e0[0] & 0xff;
    local_1b0[0x15] = 0xcbf29ce484222645;
    if ((byte)local_1e0[0] != '\0') {
      local_1b0[0x15] = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)local_1e0 | 1);
      do {
        local_1b0[0x15] = (local_1b0[0x15] ^ uVar4) * 0x100000001b3;
        bVar2 = *pbVar5;
        uVar4 = (ulong)bVar2;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    snprintf((char *)local_1e0,0x20,"%s%d","GfMapCamArea_Polygon",0x38);
    uVar4 = local_1e0[0] & 0xff;
    local_1b0[0x16] = 0xcbf29ce484222645;
    if ((byte)local_1e0[0] != '\0') {
      local_1b0[0x16] = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)local_1e0 | 1);
      do {
        local_1b0[0x16] = (local_1b0[0x16] ^ uVar4) * 0x100000001b3;
        bVar2 = *pbVar5;
        uVar4 = (ulong)bVar2;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    snprintf((char *)local_1e0,0x20,"%s%d","GfMapCamArea_Polygon",0x39);
    uVar4 = local_1e0[0] & 0xff;
    local_1b0[0x17] = 0xcbf29ce484222645;
    if ((byte)local_1e0[0] != '\0') {
      local_1b0[0x17] = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)local_1e0 | 1);
      do {
        local_1b0[0x17] = (local_1b0[0x17] ^ uVar4) * 0x100000001b3;
        bVar2 = *pbVar5;
        uVar4 = (ulong)bVar2;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    snprintf((char *)local_1e0,0x20,"%s%d","GfMapCamArea_Polygon",0x3a);
    uVar4 = local_1e0[0] & 0xff;
    local_1b0[0x18] = 0xcbf29ce484222645;
    if ((byte)local_1e0[0] != '\0') {
      local_1b0[0x18] = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)local_1e0 | 1);
      do {
        local_1b0[0x18] = (local_1b0[0x18] ^ uVar4) * 0x100000001b3;
        bVar2 = *pbVar5;
        uVar4 = (ulong)bVar2;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    snprintf((char *)local_1e0,0x20,"%s%d","GfMapCamArea_Polygon",0x3b);
    uVar4 = local_1e0[0] & 0xff;
    local_1b0[0x19] = 0xcbf29ce484222645;
    if ((byte)local_1e0[0] != '\0') {
      local_1b0[0x19] = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)local_1e0 | 1);
      do {
        local_1b0[0x19] = (local_1b0[0x19] ^ uVar4) * 0x100000001b3;
        bVar2 = *pbVar5;
        uVar4 = (ulong)bVar2;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    snprintf((char *)local_1e0,0x20,"%s%d","GfMapCamArea_Polygon",0x3c);
    uVar4 = local_1e0[0] & 0xff;
    local_1b0[0x1a] = 0xcbf29ce484222645;
    if ((byte)local_1e0[0] != '\0') {
      local_1b0[0x1a] = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)local_1e0 | 1);
      do {
        local_1b0[0x1a] = (local_1b0[0x1a] ^ uVar4) * 0x100000001b3;
        bVar2 = *pbVar5;
        uVar4 = (ulong)bVar2;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    snprintf((char *)local_1e0,0x20,"%s%d","GfMapCamArea_Polygon",0x3d);
    uVar4 = local_1e0[0] & 0xff;
    local_1b0[0x1b] = 0xcbf29ce484222645;
    if ((byte)local_1e0[0] != '\0') {
      local_1b0[0x1b] = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)local_1e0 | 1);
      do {
        local_1b0[0x1b] = (local_1b0[0x1b] ^ uVar4) * 0x100000001b3;
        bVar2 = *pbVar5;
        uVar4 = (ulong)bVar2;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    snprintf((char *)local_1e0,0x20,"%s%d","GfMapCamArea_Polygon",0x3e);
    uVar4 = local_1e0[0] & 0xff;
    local_1b0[0x1c] = 0xcbf29ce484222645;
    if ((byte)local_1e0[0] != '\0') {
      local_1b0[0x1c] = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)local_1e0 | 1);
      do {
        local_1b0[0x1c] = (local_1b0[0x1c] ^ uVar4) * 0x100000001b3;
        bVar2 = *pbVar5;
        uVar4 = (ulong)bVar2;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    snprintf((char *)local_1e0,0x20,"%s%d","GfMapCamArea_Polygon",0x3f);
    if ((byte)local_1e0[0] != 0) {
      pbVar5 = (byte *)((ulong)local_1e0 | 1);
      bVar2 = (byte)local_1e0[0];
      do {
        uVar6 = (uVar6 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    local_1b0[0x1d] = uVar6;
  }
  memcpy((void *)(param_1 + 0x758),local_1c0,0x151);
  *(undefined1 *)(param_1 + 0x750) = 1;
  FUN_00dfa430(param_1,1);
  return;
}


