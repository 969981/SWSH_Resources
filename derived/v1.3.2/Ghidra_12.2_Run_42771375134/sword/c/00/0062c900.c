/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0062c900; name: FUN_0062c900
 */


ulong FUN_0062c900(long param_1,char param_2)

{
  undefined4 uVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_70 [8];
  uint local_68;
  uint local_64;
  
  lVar13 = *(long *)(param_1 + 0xc0);
  uVar12 = *(undefined8 *)(lVar13 + 0x38);
  lVar14 = *(long *)(param_1 + 0x478);
  if (param_2 == '\0') {
    *(undefined1 *)(lVar14 + 0x40) = 1;
    pcVar11 = *(code **)(param_1 + 0x340);
    uVar1 = 0x48564152;
  }
  else {
    *(undefined1 *)(lVar14 + 0x50) = 1;
    pcVar11 = *(code **)(param_1 + 0x340);
    uVar1 = 0x56564152;
  }
  uVar6 = (*pcVar11)(param_1,uVar1,lVar13,auStack_70);
  local_68 = (uint)uVar6;
  if (local_68 == 0) {
    lVar7 = FUN_00607fe0(lVar13);
    sVar2 = FUN_00606b90(lVar13,&local_68);
    uVar6 = (ulong)local_68;
    if (local_68 == 0) {
      uVar6 = FUN_00606b00(lVar13,2);
      local_68 = (uint)uVar6;
      if (local_68 == 0) {
        if (sVar2 == 1) {
          lVar8 = FUN_00607250(lVar13,&local_68);
          uVar6 = (ulong)local_68;
          if (local_68 == 0) {
            lVar13 = FUN_00607250(lVar13,&local_68);
            uVar6 = (ulong)local_68;
            if (local_68 == 0) {
              puVar9 = (uint *)FUN_00602800(uVar12,0x38,&local_68);
              if (param_2 == '\0') {
                *(uint **)(lVar14 + 0x48) = puVar9;
              }
              else {
                *(uint **)(lVar14 + 0x58) = puVar9;
              }
              uVar6 = (ulong)local_68;
              if (local_68 == 0) {
                uVar6 = FUN_0062ba80(*(undefined8 *)(param_1 + 0xc0),
                                     *(undefined8 *)(param_1 + 0x478),lVar8 + lVar7,puVar9);
                local_68 = (uint)uVar6;
                if (local_68 == 0) {
                  if (lVar13 != 0) {
                    lVar8 = *(long *)(param_1 + 0xc0);
                    uVar12 = *(undefined8 *)(lVar8 + 0x38);
                    uVar6 = FUN_006069e0(lVar8,lVar13 + lVar7);
                    local_64 = (uint)uVar6;
                    if (local_64 != 0) {
                      return uVar6;
                    }
                    uVar4 = FUN_00606b90(lVar8,&local_64);
                    if (local_64 != 0) {
                      return (ulong)local_64;
                    }
                    uVar3 = FUN_00606b90(lVar8,&local_64);
                    puVar9[8] = (uint)uVar3;
                    if (local_64 != 0) {
                      return (ulong)local_64;
                    }
                    if ((uVar4 & 0xffc0) != 0) {
                      return 8;
                    }
                    uVar10 = FUN_006029c0(uVar12,4,0,uVar3,0,&local_64);
                    *(undefined8 *)(puVar9 + 0xc) = uVar10;
                    if (local_64 != 0) {
                      return (ulong)local_64;
                    }
                    uVar12 = FUN_006029c0(uVar12,4,0,puVar9[8],0,&local_64);
                    *(undefined8 *)(puVar9 + 10) = uVar12;
                    if (local_64 != 0) {
                      return (ulong)local_64;
                    }
                    if (puVar9[8] != 0) {
                      uVar6 = 0;
                      do {
                        uVar15 = 0;
                        uVar16 = 0xffffffff;
                        do {
                          uVar5 = FUN_00608490(lVar8,&local_64);
                          if (local_64 != 0) {
                            return (ulong)local_64;
                          }
                          uVar15 = uVar5 & 0xff | uVar15 << 8;
                          uVar16 = uVar16 + 1;
                        } while (uVar16 < ((uVar4 & 0xffff) >> 4 & 3));
                        uVar16 = uVar15 >> (ulong)((uVar4 & 0xf) + 1);
                        if (*puVar9 <= uVar16) {
                          return 8;
                        }
                        *(uint *)(*(long *)(puVar9 + 10) + uVar6 * 4) = uVar16;
                        uVar15 = uVar15 & (2 << (ulong)(uVar4 & 0xf)) - 1U;
                        if (*(uint *)(*(long *)(puVar9 + 2) + (ulong)uVar16 * 0x18) <= uVar15) {
                          return 8;
                        }
                        *(uint *)(*(long *)(puVar9 + 0xc) + uVar6 * 4) = uVar15;
                        uVar6 = uVar6 + 1;
                      } while (uVar6 < puVar9[8]);
                    }
                  }
                  uVar6 = 0;
                  if (param_2 == '\0') {
                    *(undefined1 *)(lVar14 + 0x41) = 1;
                    uVar4 = *(uint *)(param_1 + 0x484) | 2;
                  }
                  else {
                    *(undefined1 *)(lVar14 + 0x51) = 1;
                    uVar4 = *(uint *)(param_1 + 0x484) | 0x10;
                  }
                  *(uint *)(param_1 + 0x484) = uVar4;
                }
              }
            }
          }
        }
        else {
          uVar6 = 8;
        }
      }
    }
  }
  return uVar6;
}


