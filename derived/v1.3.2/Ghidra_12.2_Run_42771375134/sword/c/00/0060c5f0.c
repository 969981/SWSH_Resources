/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0060c5f0; name: FUN_0060c5f0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0060c5f0(undefined8 param_1)

{
  ulong uVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  byte local_1dc [132];
  byte local_158 [132];
  byte local_d4 [132];
  
  pbVar3 = (byte *)getenv("FREETYPE_PROPERTIES");
  if (pbVar3 != (byte *)0x0) {
    bVar2 = *pbVar3;
    if (bVar2 != 9) goto LAB_0060c658;
    while( true ) {
      do {
        do {
          pbVar3 = pbVar3 + 1;
          bVar2 = *pbVar3;
        } while (bVar2 == 9);
LAB_0060c658:
      } while (bVar2 == 0x20);
      if (bVar2 == 0) break;
      uVar1 = 0;
      while ((bVar2 != 0 && (bVar2 != 0x3a))) {
        local_d4[uVar1] = bVar2;
        if (0x7f < uVar1 + 1) {
          iVar5 = (int)uVar1;
          uVar1 = uVar1 + 1;
          local_d4[iVar5 + 1] = 0;
          goto joined_r0x0060c6b0;
        }
        bVar2 = pbVar3[uVar1 + 1];
        uVar1 = uVar1 + 1;
      }
      local_d4[uVar1 & 0xffffffff] = 0;
joined_r0x0060c6b0:
      pbVar4 = pbVar3 + uVar1;
      if (pbVar4 == pbVar3) {
        return;
      }
      if (*pbVar4 != 0x3a) {
        return;
      }
      uVar1 = 0;
      do {
        uVar6 = uVar1;
        bVar2 = pbVar4[uVar6 + 1];
        if ((bVar2 == 0) || (bVar2 == 0x3d)) {
          pbVar4 = pbVar4 + uVar6 + 1;
          local_158[uVar6 & 0xffffffff] = 0;
          if (uVar6 == 0) {
            return;
          }
          goto LAB_0060c774;
        }
        local_158[uVar6] = bVar2;
        bVar2 = pbVar4[uVar6 + 2];
        if ((bVar2 == 0) || (bVar2 == 0x3d)) {
          pbVar4 = pbVar4 + uVar6 + 2;
          local_158[uVar6 + 1 & 0xffffffff] = 0;
          if (uVar6 == 0xffffffffffffffff) {
            return;
          }
          goto LAB_0060c774;
        }
        local_158[uVar6 + 1] = bVar2;
        bVar2 = pbVar4[uVar6 + 3];
        if ((bVar2 == 0) || (bVar2 == 0x3d)) {
          pbVar4 = pbVar4 + uVar6 + 3;
          local_158[uVar6 + 2 & 0xffffffff] = 0;
          if (uVar6 == 0xfffffffffffffffe) {
            return;
          }
          goto LAB_0060c774;
        }
        local_158[uVar6 + 2] = bVar2;
        bVar2 = pbVar4[uVar6 + 4];
        if ((bVar2 == 0) || (bVar2 == 0x3d)) {
          pbVar4 = pbVar4 + uVar6 + 4;
          local_158[uVar6 + 3 & 0xffffffff] = 0;
          if (uVar6 == 0xfffffffffffffffd) {
            return;
          }
          goto LAB_0060c774;
        }
        uVar1 = uVar6 + 4;
        local_158[uVar6 + 3] = bVar2;
      } while (uVar1 < 0x80);
      pbVar4 = pbVar4 + uVar6 + 5;
      local_158[uVar1 & 0xffffffff] = 0;
      if (uVar6 == 0xfffffffffffffffc) {
        return;
      }
LAB_0060c774:
      if (*pbVar4 != 0x3d) {
        return;
      }
      uVar1 = 0;
      do {
        uVar6 = uVar1;
        pbVar3 = pbVar4 + uVar6;
        bVar2 = pbVar3[1];
        if (bVar2 < 0x21 && (1L << ((ulong)bVar2 & 0x3f) & 0x100000201U) != 0) {
          lVar7 = uVar6 + 1;
          goto LAB_0060c83c;
        }
        local_1dc[uVar6] = bVar2;
        bVar2 = pbVar3[2];
        if ((bVar2 < 0x21) && ((1L << ((ulong)bVar2 & 0x3f) & 0x100000201U) != 0)) {
          lVar7 = uVar6 + 2;
          pbVar3 = pbVar3 + 2;
          local_1dc[uVar6 + 1 & 0xffffffff] = 0;
          bVar2 = *pbVar3;
          goto joined_r0x0060c8cc;
        }
        local_1dc[uVar6 + 1] = bVar2;
        bVar2 = pbVar3[3];
        if ((bVar2 < 0x21) && ((1L << ((ulong)bVar2 & 0x3f) & 0x100000201U) != 0)) {
          lVar7 = uVar6 + 3;
          pbVar3 = pbVar3 + 3;
          local_1dc[uVar6 + 2 & 0xffffffff] = 0;
          bVar2 = *pbVar3;
          goto joined_r0x0060c8cc;
        }
        local_1dc[uVar6 + 2] = bVar2;
        bVar2 = pbVar3[4];
        if ((bVar2 < 0x21) && ((1L << ((ulong)bVar2 & 0x3f) & 0x100000201U) != 0)) {
          lVar7 = uVar6 + 4;
          pbVar3 = pbVar3 + 4;
          local_1dc[uVar6 + 3 & 0xffffffff] = 0;
          bVar2 = *pbVar3;
          goto joined_r0x0060c8cc;
        }
        uVar1 = uVar6 + 4;
        local_1dc[uVar6 + 3] = bVar2;
      } while (uVar1 < 0x80);
      pbVar3 = pbVar4 + uVar1;
      lVar7 = uVar6 + 5;
      uVar6 = uVar1;
LAB_0060c83c:
      pbVar3 = pbVar3 + 1;
      local_1dc[uVar6 & 0xffffffff] = 0;
      bVar2 = *pbVar3;
joined_r0x0060c8cc:
      if (0x20 < bVar2) {
        return;
      }
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100000201U) == 0) {
        return;
      }
      if (lVar7 == 1) {
        return;
      }
      FUN_00605b70(param_1,local_d4,local_158,local_1dc);
    }
  }
  return;
}


