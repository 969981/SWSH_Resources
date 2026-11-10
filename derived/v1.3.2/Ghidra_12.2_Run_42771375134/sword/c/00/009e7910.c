/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e7910; name: FUN_009e7910
 */


void FUN_009e7910(long param_1)

{
  ulong uVar1;
  int *piVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  undefined8 uVar13;
  int local_c0;
  undefined2 local_bc;
  int local_b8 [38];
  
  if (*(int *)(param_1 + 0x124) == 0) {
    uVar7 = 1;
    local_bc = 0;
    uVar8 = uVar7;
    if (*(int *)(param_1 + 0x128) == 0) goto LAB_009e79f0;
LAB_009e7938:
    uVar7 = uVar8;
    if (*(int *)(param_1 + 300) != 0) goto LAB_009e7940;
LAB_009e7a14:
    uVar7 = (ulong)((int)uVar8 + 1);
    local_b8[uVar8 * 2 + -2] = *(int *)(param_1 + 0xdc);
    *(undefined2 *)(local_b8 + uVar8 * 2 + -1) = 2;
    uVar8 = uVar7;
    if (*(int *)(param_1 + 0x130) == 0) goto LAB_009e7a38;
LAB_009e7948:
    uVar7 = uVar8;
    if (*(int *)(param_1 + 0x134) != 0) goto LAB_009e7950;
LAB_009e7a5c:
    uVar7 = (ulong)((int)uVar8 + 1);
    local_b8[uVar8 * 2 + -2] = *(int *)(param_1 + 0xe4);
    *(undefined2 *)(local_b8 + uVar8 * 2 + -1) = 0x100;
    uVar8 = uVar7;
    if (*(int *)(param_1 + 0x138) == 0) goto LAB_009e7a80;
LAB_009e7958:
    uVar7 = uVar8;
    if (*(int *)(param_1 + 0x13c) != 0) goto LAB_009e7960;
LAB_009e7aa4:
    uVar7 = (ulong)((int)uVar8 + 1);
    local_b8[uVar8 * 2 + -2] = *(int *)(param_1 + 0xec);
    *(undefined2 *)(local_b8 + uVar8 * 2 + -1) = 0x102;
    uVar8 = uVar7;
    if (*(int *)(param_1 + 0x140) == 0) goto LAB_009e7ac8;
LAB_009e7968:
    uVar7 = uVar8;
    if (*(int *)(param_1 + 0x144) != 0) goto LAB_009e7970;
LAB_009e7aec:
    uVar6 = (int)uVar8 + 1;
    uVar7 = (ulong)uVar6;
    local_b8[uVar8 * 2 + -2] = *(int *)(param_1 + 0xf4);
    *(undefined2 *)(local_b8 + uVar8 * 2 + -1) = 0x200;
    if (*(int *)(param_1 + 0x148) == 0) goto LAB_009e7b10;
LAB_009e7978:
    uVar5 = (uint)uVar7;
    if (*(int *)(param_1 + 0x14c) != 0) goto LAB_009e7980;
LAB_009e7b34:
    uVar6 = uVar5 + 1;
    uVar7 = (ulong)uVar6;
    local_b8[(ulong)(byte)uVar5 * 2 + -2] = *(int *)(param_1 + 0xfc);
    *(undefined2 *)(local_b8 + (ulong)(byte)uVar5 * 2 + -1) = 0x202;
    if (*(int *)(param_1 + 0x150) == 0) goto LAB_009e7b58;
LAB_009e7988:
    uVar5 = (uint)uVar7;
    if (*(int *)(param_1 + 0x154) != 0) goto LAB_009e7990;
LAB_009e7b7c:
    uVar6 = uVar5 + 1;
    uVar7 = (ulong)uVar6;
    local_b8[(ulong)(byte)uVar5 * 2 + -2] = *(int *)(param_1 + 0x104);
    *(undefined2 *)(local_b8 + (ulong)(byte)uVar5 * 2 + -1) = 0x300;
    if (*(int *)(param_1 + 0x158) == 0) goto LAB_009e7ba0;
LAB_009e7998:
    uVar5 = (uint)uVar7;
    if (*(int *)(param_1 + 0x15c) != 0) goto LAB_009e79a0;
LAB_009e7bc4:
    uVar6 = uVar5 + 1;
    uVar7 = (ulong)uVar6;
    local_b8[(ulong)(byte)uVar5 * 2 + -2] = *(int *)(param_1 + 0x10c);
    *(undefined2 *)(local_b8 + (ulong)(byte)uVar5 * 2 + -1) = 0x302;
    if (*(int *)(param_1 + 0x160) == 0) goto LAB_009e7be8;
LAB_009e79a8:
    uVar5 = (uint)uVar7;
    if (*(int *)(param_1 + 0x164) != 0) goto LAB_009e79b0;
LAB_009e7c0c:
    uVar6 = uVar5 + 1;
    uVar7 = (ulong)uVar6;
    local_b8[(ulong)(byte)uVar5 * 2 + -2] = *(int *)(param_1 + 0x114);
    *(undefined2 *)(local_b8 + (ulong)(byte)uVar5 * 2 + -1) = 0x400;
    if (*(int *)(param_1 + 0x168) == 0) goto LAB_009e7c30;
LAB_009e79b8:
    uVar5 = (uint)uVar7;
    if (*(int *)(param_1 + 0x16c) != 0) goto LAB_009e79c0;
LAB_009e7c54:
    uVar6 = uVar5 + 1;
    uVar7 = (ulong)uVar6;
    local_b8[(ulong)(byte)uVar5 * 2 + -2] = *(int *)(param_1 + 0x11c);
    *(undefined2 *)(local_b8 + (ulong)(byte)uVar5 * 2 + -1) = 0x402;
    if (*(int *)(param_1 + 0x170) == 0) goto LAB_009e7c78;
LAB_009e79c8:
    if ((uVar7 & 0xff) == 0) {
      uVar4 = 0;
      goto LAB_009e7da0;
    }
  }
  else {
    uVar7 = 0;
    uVar8 = uVar7;
    if (*(int *)(param_1 + 0x128) != 0) goto LAB_009e7938;
LAB_009e79f0:
    uVar8 = (ulong)((int)uVar7 + 1);
    local_b8[uVar7 * 2 + -2] = *(int *)(param_1 + 0xd8);
    *(undefined2 *)(local_b8 + uVar7 * 2 + -1) = 1;
    uVar7 = uVar8;
    if (*(int *)(param_1 + 300) == 0) goto LAB_009e7a14;
LAB_009e7940:
    uVar8 = uVar7;
    if (*(int *)(param_1 + 0x130) != 0) goto LAB_009e7948;
LAB_009e7a38:
    uVar8 = (ulong)((int)uVar7 + 1);
    local_b8[uVar7 * 2 + -2] = *(int *)(param_1 + 0xe0);
    *(undefined2 *)(local_b8 + uVar7 * 2 + -1) = 3;
    uVar7 = uVar8;
    if (*(int *)(param_1 + 0x134) == 0) goto LAB_009e7a5c;
LAB_009e7950:
    uVar8 = uVar7;
    if (*(int *)(param_1 + 0x138) != 0) goto LAB_009e7958;
LAB_009e7a80:
    uVar8 = (ulong)((int)uVar7 + 1);
    local_b8[uVar7 * 2 + -2] = *(int *)(param_1 + 0xe8);
    *(undefined2 *)(local_b8 + uVar7 * 2 + -1) = 0x101;
    uVar7 = uVar8;
    if (*(int *)(param_1 + 0x13c) == 0) goto LAB_009e7aa4;
LAB_009e7960:
    uVar8 = uVar7;
    if (*(int *)(param_1 + 0x140) != 0) goto LAB_009e7968;
LAB_009e7ac8:
    uVar8 = (ulong)((int)uVar7 + 1);
    local_b8[uVar7 * 2 + -2] = *(int *)(param_1 + 0xf0);
    *(undefined2 *)(local_b8 + uVar7 * 2 + -1) = 0x103;
    uVar7 = uVar8;
    if (*(int *)(param_1 + 0x144) == 0) goto LAB_009e7aec;
LAB_009e7970:
    uVar6 = (uint)uVar7;
    if (*(int *)(param_1 + 0x148) != 0) goto LAB_009e7978;
LAB_009e7b10:
    uVar5 = uVar6 + 1;
    uVar7 = (ulong)uVar5;
    local_b8[(ulong)(byte)uVar6 * 2 + -2] = *(int *)(param_1 + 0xf8);
    *(undefined2 *)(local_b8 + (ulong)(byte)uVar6 * 2 + -1) = 0x201;
    if (*(int *)(param_1 + 0x14c) == 0) goto LAB_009e7b34;
LAB_009e7980:
    uVar6 = (uint)uVar7;
    if (*(int *)(param_1 + 0x150) != 0) goto LAB_009e7988;
LAB_009e7b58:
    uVar5 = uVar6 + 1;
    uVar7 = (ulong)uVar5;
    local_b8[(ulong)(byte)uVar6 * 2 + -2] = *(int *)(param_1 + 0x100);
    *(undefined2 *)(local_b8 + (ulong)(byte)uVar6 * 2 + -1) = 0x203;
    if (*(int *)(param_1 + 0x154) == 0) goto LAB_009e7b7c;
LAB_009e7990:
    uVar6 = (uint)uVar7;
    if (*(int *)(param_1 + 0x158) != 0) goto LAB_009e7998;
LAB_009e7ba0:
    uVar5 = uVar6 + 1;
    uVar7 = (ulong)uVar5;
    local_b8[(ulong)(byte)uVar6 * 2 + -2] = *(int *)(param_1 + 0x108);
    *(undefined2 *)(local_b8 + (ulong)(byte)uVar6 * 2 + -1) = 0x301;
    if (*(int *)(param_1 + 0x15c) == 0) goto LAB_009e7bc4;
LAB_009e79a0:
    uVar6 = (uint)uVar7;
    if (*(int *)(param_1 + 0x160) != 0) goto LAB_009e79a8;
LAB_009e7be8:
    uVar5 = uVar6 + 1;
    uVar7 = (ulong)uVar5;
    local_b8[(ulong)(byte)uVar6 * 2 + -2] = *(int *)(param_1 + 0x110);
    *(undefined2 *)(local_b8 + (ulong)(byte)uVar6 * 2 + -1) = 0x303;
    if (*(int *)(param_1 + 0x164) == 0) goto LAB_009e7c0c;
LAB_009e79b0:
    uVar6 = (uint)uVar7;
    if (*(int *)(param_1 + 0x168) != 0) goto LAB_009e79b8;
LAB_009e7c30:
    uVar5 = uVar6 + 1;
    uVar7 = (ulong)uVar5;
    local_b8[(ulong)(byte)uVar6 * 2 + -2] = *(int *)(param_1 + 0x118);
    *(undefined2 *)(local_b8 + (ulong)(byte)uVar6 * 2 + -1) = 0x401;
    if (*(int *)(param_1 + 0x16c) == 0) goto LAB_009e7c54;
LAB_009e79c0:
    uVar6 = (uint)uVar7;
    if (*(int *)(param_1 + 0x170) != 0) goto LAB_009e79c8;
LAB_009e7c78:
    uVar7 = (ulong)(uVar6 + 1);
    local_b8[(ulong)(byte)uVar6 * 2 + -2] = *(int *)(param_1 + 0x120);
    *(undefined2 *)(local_b8 + (ulong)(byte)uVar6 * 2 + -1) = 0x403;
  }
  uVar9 = uVar7 & 0xff;
  uVar6 = (uint)uVar9;
  lVar10 = 1;
  uVar8 = 0;
  do {
    uVar1 = uVar8 + 1;
    if (uVar1 < uVar9) {
      piVar2 = local_b8 + uVar8 * 2 + -2;
      lVar11 = lVar10;
      if ((((int)uVar7 + 1) - (int)uVar8 & 1U) != 0) {
        piVar12 = local_b8 + lVar10 * 2 + -2;
        if (*piVar2 < *piVar12) {
          uVar13 = *(undefined8 *)piVar2;
          *(undefined8 *)piVar2 = *(undefined8 *)piVar12;
          *(undefined8 *)piVar12 = uVar13;
        }
        lVar11 = lVar10 + 1;
      }
      if (((uVar6 + 0xfe) - (int)uVar8 & 0xff) != 0) {
        piVar12 = local_b8 + lVar11 * 2;
        do {
          lVar11 = lVar11 + 2;
          if (*piVar2 < piVar12[-2]) {
            uVar13 = *(undefined8 *)piVar2;
            *(undefined8 *)piVar2 = *(undefined8 *)(piVar12 + -2);
            *(undefined8 *)(piVar12 + -2) = uVar13;
          }
          if (*piVar2 < *piVar12) {
            uVar13 = *(undefined8 *)piVar2;
            *(undefined8 *)piVar2 = *(undefined8 *)piVar12;
            *(undefined8 *)piVar12 = uVar13;
          }
          piVar12 = piVar12 + 4;
        } while (uVar6 != ((uint)lVar11 & 0xff));
      }
    }
    lVar10 = lVar10 + 1;
    uVar8 = uVar1;
  } while (uVar1 != uVar9);
  if (9 < uVar6) {
    uVar6 = 10;
  }
  bVar3 = FUN_008ed5b0(param_1 + 0x88,uVar6);
  uVar8 = (ulong)bVar3;
  *(undefined1 *)(param_1 + 0x19d) = *(undefined1 *)((long)local_b8 + uVar8 * 8 + -3);
  *(char *)(param_1 + 0x19c) = (char)local_b8[uVar8 * 2 + -1];
  *(int *)(param_1 + 0x198) = local_b8[uVar8 * 2 + -2];
  uVar4 = 1;
LAB_009e7da0:
  *(undefined1 *)(param_1 + 0x1a1) = uVar4;
  return;
}


