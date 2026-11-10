/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010bc7b0; name: FUN_010bc7b0
 */


uint FUN_010bc7b0(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  void *__dest;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  bVar4 = *(int *)((long)param_1 + 0x1fe4) != -1;
  uVar5 = 2;
  if (!bVar4) {
    uVar5 = 1;
  }
  uVar2 = (uint)bVar4;
  if (*(int *)((long)param_1 + 0x1f44) != -1) {
    uVar2 = uVar5;
  }
  if (*(int *)((long)param_1 + 0x2084) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x2124) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x21c4) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x2264) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x2304) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x23a4) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x2444) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x24e4) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x2584) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x2624) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x26c4) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x2764) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x2804) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x28a4) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x2944) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x29e4) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x2a84) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x2b24) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x2bc4) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x2c64) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x2d04) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x2da4) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x2e44) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x2ee4) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x2f84) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x3024) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x30c4) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x3164) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x3204) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x32a4) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x3344) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x33e4) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x3484) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x3524) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x35c4) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x3664) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x3704) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x37a4) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x3844) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x38e4) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x3984) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x3a24) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x3ac4) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x3b64) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x3c04) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x3ca4) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x3d44) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((long)param_1 + 0x3de4) != -1) {
    uVar2 = uVar2 + 1;
  }
  if (uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    bVar4 = *(int *)((long)param_1 + 0xa4) != -1;
    uVar5 = 2;
    if (!bVar4) {
      uVar5 = 1;
    }
    uVar3 = (uint)bVar4;
    if (*(int *)((long)param_1 + 4) != -1) {
      uVar3 = uVar5;
    }
    if (*(int *)((long)param_1 + 0x144) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x1e4) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x284) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x324) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x3c4) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x464) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x504) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x5a4) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x644) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x6e4) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x784) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x824) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x8c4) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x964) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0xa04) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0xaa4) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0xb44) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0xbe4) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0xc84) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0xd24) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0xdc4) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0xe64) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0xf04) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0xfa4) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x1044) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x10e4) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x1184) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x1224) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x12c4) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x1364) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x1404) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x14a4) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x1544) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x15e4) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x1684) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x1724) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x17c4) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x1864) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x1904) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x19a4) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x1a44) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x1ae4) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x1b84) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x1c24) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x1cc4) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x1d64) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x1e04) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((long)param_1 + 0x1ea4) != -1) {
      uVar3 = uVar3 + 1;
    }
    uVar1 = uVar3 + uVar2;
    if (uVar1 < 0x32) {
      iVar8 = 0;
      lVar11 = -8000;
      do {
        if (*(int *)((long)param_1 + lVar11 + 0x3e84) != -1) {
          memcpy((void *)((long)param_1 + (ulong)(iVar8 + uVar3) * 0xa0),
                 (void *)((long)param_1 + lVar11 + 16000),0x9a);
          iVar8 = iVar8 + 1;
        }
        lVar11 = lVar11 + 0xa0;
      } while (lVar11 != 0);
    }
    else {
      if (uVar2 < 0x31) {
        uVar7 = (ulong)uVar2;
        uVar9 = uVar7;
        if ((1 - uVar2 & 1) != 0) {
          uVar9 = uVar7 + 1;
          memcpy(param_1,(void *)((long)param_1 + (long)(int)uVar9 * 0xa0),0x9a);
        }
        if (uVar2 != 0x30) {
          __dest = (void *)((long)param_1 + (uVar9 - uVar7) * 0xa0);
          lVar10 = 0x31 - uVar9;
          lVar6 = uVar9 << 0x20;
          lVar11 = lVar6 + 0x100000000;
          do {
            lVar6 = lVar6 + 0x200000000;
            memcpy(__dest,(void *)((long)param_1 + (lVar11 >> 0x20) * 0xa0),0x9a);
            memcpy((void *)((long)__dest + 0xa0),(void *)((long)param_1 + (lVar6 >> 0x20) * 0xa0),
                   0x9a);
            lVar10 = lVar10 + -2;
            __dest = (void *)((long)__dest + 0x140);
            lVar11 = lVar11 + 0x200000000;
          } while (lVar10 != 0);
        }
      }
      iVar8 = 0;
      lVar11 = -8000;
      do {
        if (*(int *)((long)param_1 + lVar11 + 0x3e84) != -1) {
          memcpy((void *)((long)param_1 + (ulong)((0x32 - uVar2) + iVar8) * 0xa0),
                 (void *)((long)param_1 + lVar11 + 16000),0x9a);
          iVar8 = iVar8 + 1;
        }
        lVar11 = lVar11 + 0xa0;
      } while (lVar11 != 0);
    }
    uVar5 = 0x32;
    if (uVar1 < 0x32) {
      uVar5 = uVar1;
    }
    *(undefined4 *)((long)param_1 + 0x1f44) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x1fe4) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x2084) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x2124) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x21c4) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x2264) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x2304) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x23a4) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x2444) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x24e4) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x2584) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x2624) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x26c4) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x2764) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x2804) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x28a4) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x2944) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x29e4) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x2a84) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x2b24) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x2bc4) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x2c64) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x2d04) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x2da4) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x2e44) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x2ee4) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x2f84) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x3024) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x30c4) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x3164) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x3204) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x32a4) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x3344) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x33e4) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x3484) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x3524) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x35c4) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x3664) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x3704) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x37a4) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x3844) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x38e4) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x3984) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x3a24) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x3ac4) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x3b64) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x3c04) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x3ca4) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x3d44) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x3de4) = 0xffffffff;
  }
  return uVar5;
}


