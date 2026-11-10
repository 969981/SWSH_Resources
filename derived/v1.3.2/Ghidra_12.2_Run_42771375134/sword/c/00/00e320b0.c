/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e320b0; name: FUN_00e320b0
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_00e320b0(undefined8 param_1,long param_2,int param_3)

{
  ulong uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong local_50;
  undefined2 local_48;
  
  puVar6 = &local_50;
  local_48 = 0xffff;
  local_50 = 0xffffffffffffffff;
  if ((*(short *)(param_2 + 2) == 0) || (*(short *)(param_2 + 4) == 0x1f)) {
LAB_00e3211c:
    uVar11 = 0;
    if (*(short *)(param_2 + 8) == 0) goto LAB_00e32190;
LAB_00e32128:
    if (*(short *)(param_2 + 10) == 0x1f) goto LAB_00e32190;
    FUN_008649f0();
    iVar3 = FUN_00864a10(6);
    iVar4 = FUN_00864a10(7);
    if ((iVar3 != param_3) && (iVar4 != param_3)) goto LAB_00e32190;
    puVar5 = (undefined1 *)((ulong)&local_50 | uVar11);
    uVar11 = (ulong)((int)uVar11 + 1);
    *puVar5 = 1;
    sVar2 = *(short *)(param_2 + 0xe);
  }
  else {
    FUN_008649f0();
    iVar3 = FUN_00864a10(6);
    iVar4 = FUN_00864a10(7);
    if ((iVar3 != param_3) && (iVar4 != param_3)) goto LAB_00e3211c;
    uVar11 = 1;
    local_50 = local_50 & 0xffffffffffffff00;
    if (*(short *)(param_2 + 8) != 0) goto LAB_00e32128;
LAB_00e32190:
    sVar2 = *(short *)(param_2 + 0xe);
  }
  if ((sVar2 != 0) && (*(short *)(param_2 + 0x10) != 0x1f)) {
    FUN_008649f0();
    iVar3 = FUN_00864a10(6);
    iVar4 = FUN_00864a10(7);
    if ((iVar3 == param_3) || (iVar4 == param_3)) {
      puVar5 = (undefined1 *)((ulong)&local_50 | uVar11);
      uVar11 = (ulong)((int)uVar11 + 1);
      *puVar5 = 2;
    }
  }
  if ((*(short *)(param_2 + 0x14) != 0) && (*(short *)(param_2 + 0x16) != 0x1f)) {
    FUN_008649f0();
    iVar3 = FUN_00864a10(6);
    iVar4 = FUN_00864a10(7);
    if ((iVar3 == param_3) || (iVar4 == param_3)) {
      puVar5 = (undefined1 *)((ulong)&local_50 | uVar11);
      uVar11 = (ulong)((int)uVar11 + 1);
      *puVar5 = 3;
    }
  }
  if ((*(short *)(param_2 + 0x1a) != 0) && (*(short *)(param_2 + 0x1c) != 0x1f)) {
    FUN_008649f0();
    iVar3 = FUN_00864a10(6);
    iVar4 = FUN_00864a10(7);
    if ((iVar3 == param_3) || (iVar4 == param_3)) {
      *(undefined1 *)((long)&local_50 + uVar11) = 4;
      uVar11 = (ulong)((int)uVar11 + 1);
    }
  }
  if ((*(short *)(param_2 + 0x20) != 0) && (*(short *)(param_2 + 0x22) != 0x1f)) {
    FUN_008649f0();
    iVar3 = FUN_00864a10(6);
    iVar4 = FUN_00864a10(7);
    if ((iVar3 == param_3) || (iVar4 == param_3)) {
      *(undefined1 *)((long)&local_50 + uVar11) = 5;
      uVar11 = (ulong)((int)uVar11 + 1);
    }
  }
  if ((*(short *)(param_2 + 0x26) != 0) && (*(short *)(param_2 + 0x28) != 0x1f)) {
    FUN_008649f0();
    iVar3 = FUN_00864a10(6);
    iVar4 = FUN_00864a10(7);
    if ((iVar3 == param_3) || (iVar4 == param_3)) {
      *(undefined1 *)((long)&local_50 + uVar11) = 6;
      uVar11 = (ulong)((int)uVar11 + 1);
    }
  }
  if ((*(short *)(param_2 + 0x2c) == 0) || (*(short *)(param_2 + 0x2e) == 0x1f)) {
LAB_00e32368:
    if (*(short *)(param_2 + 0x32) == 0) goto LAB_00e324c0;
LAB_00e32370:
    if (*(short *)(param_2 + 0x34) == 0x1f) goto LAB_00e324c0;
    FUN_008649f0();
    iVar3 = FUN_00864a10(6);
    iVar4 = FUN_00864a10(7);
    if ((iVar3 != param_3) && (iVar4 != param_3)) goto LAB_00e324c0;
    *(undefined1 *)((long)&local_50 + uVar11) = 8;
    uVar10 = (int)uVar11 + 1;
    uVar11 = (ulong)uVar10;
    sVar2 = *(short *)(param_2 + 0x38);
  }
  else {
    FUN_008649f0();
    iVar3 = FUN_00864a10(6);
    iVar4 = FUN_00864a10(7);
    if ((iVar3 != param_3) && (iVar4 != param_3)) goto LAB_00e32368;
    *(undefined1 *)((long)&local_50 + uVar11) = 7;
    uVar11 = (ulong)((int)uVar11 + 1);
    if (*(short *)(param_2 + 0x32) != 0) goto LAB_00e32370;
LAB_00e324c0:
    uVar10 = (uint)uVar11;
    sVar2 = *(short *)(param_2 + 0x38);
  }
  if ((sVar2 != 0) && (uVar10 = (uint)uVar11, *(short *)(param_2 + 0x3a) != 0x1f)) {
    FUN_008649f0();
    iVar3 = FUN_00864a10(6);
    iVar4 = FUN_00864a10(7);
    if ((iVar3 == param_3) || (iVar4 == param_3)) {
      *(undefined1 *)((long)&local_50 + uVar11) = 9;
      uVar10 = uVar10 + 1;
      goto joined_r0x00e324d0;
    }
  }
  if (uVar10 == 0) {
    return 0xff;
  }
joined_r0x00e324d0:
  if (uVar10 != 1) {
    uVar7 = (0x20 - LZCOUNT(uVar10)) -
            (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar10)) & 0x1f) & uVar10)
                   == 0);
    uVar11 = uVar7 >> 6;
    if ((uVar7 & 0x3f) != 0) {
      uVar11 = uVar11 + 1;
    }
    uVar8 = 0;
    if (uVar11 != 0) {
      uVar8 = uVar7 / uVar11;
    }
    puVar6 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
    uVar1 = 0;
    if (uVar11 <= uVar7) {
      uVar1 = 0xffffffffffffffff >> (-uVar8 & 0x3f);
    }
    uVar11 = *puVar6;
    uVar7 = puVar6[1];
    do {
      uVar9 = uVar11 ^ uVar7;
      uVar8 = uVar11 + uVar7;
      uVar7 = uVar9 >> 0x1b | uVar9 << 0x25;
      uVar11 = uVar9 ^ (uVar11 >> 0x28 | uVar11 << 0x18) ^ uVar9 << 0x10;
      uVar8 = uVar8 & uVar1;
    } while (uVar10 <= (uint)uVar8);
    *puVar6 = uVar11;
    puVar6[1] = uVar7;
    uVar8 = uVar8 & 0xffffffff;
    if (9 < uVar8) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar6 = (ulong *)((long)&local_50 + uVar8);
  }
  return *(undefined1 *)puVar6;
}


