/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004865e0; name: FUN_004865e0
 */


void FUN_004865e0(long param_1,undefined8 param_2,ulong *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  ulong local_a8;
  undefined1 auStack_a0 [64];
  
  uVar2 = 0;
  lVar7 = param_1;
  if ((*(uint *)(param_1 + 0x9c) & 0x20000) == 0) {
    lVar7 = 0;
  }
  uVar5 = 0;
  if (((*(uint *)(param_1 + 0x9c) >> 0x11 & 1) == 0) && (param_1 != 0)) {
    uVar2 = 0;
    uVar6 = 0;
    do {
      uVar5 = uVar6;
      if ((*param_3 & ((uVar6 | 0x120df) ^ 0xfffffffffffedf20)) == 0) break;
      uVar5 = (ulong)*(uint *)(param_1 + 0x98) << 0x11;
      uVar4 = uVar5 | 0x1ff87e3fffe0000;
      if (*(long *)(param_1 + 0x78) != 0) {
        uVar4 = uVar5;
      }
      local_a8 = *param_3 & (uVar6 ^ 0x1ffffffffff20df) & (uVar4 | 0x120df);
      puVar8 = *(ulong **)(param_1 + 0x38);
      if (puVar8 != (ulong *)0x0) {
        uVar5 = *puVar8 & local_a8;
        if (uVar5 == 0) {
          uVar5 = FUN_004a4300(puVar8 + 2,param_2);
          if (((uVar5 & 1) != 0) && ((int)puVar8[3] == 0)) {
            uVar5 = 0xffffffffffffffff;
            goto LAB_00486704;
          }
        }
        else {
          if ((int)puVar8[3] == 0) {
            FUN_0049ddc0(*(undefined8 *)PTR_DAT_02712b50,param_1 + 0x30);
            puVar8 = *(ulong **)(param_1 + 0x38);
          }
          FUN_004a41a0(auStack_a0,uVar5,param_2);
          uVar3 = FUN_00488b30(puVar8 + 2,auStack_a0);
          if ((uVar3 & 1) != 0) {
            uVar5 = puVar8[1] & uVar5;
LAB_00486704:
            puVar8[1] = uVar5;
          }
        }
      }
      FUN_00486a80(param_1 + 0x18,param_2,&local_a8);
      puVar8 = *(ulong **)(param_1 + 0x48);
      if (puVar8 != (ulong *)0x0) {
        uVar5 = local_a8 & *puVar8;
        if (uVar5 == 0) {
          uVar5 = FUN_004a4300(puVar8 + 2,param_2);
          if (((uVar5 & 1) != 0) && ((int)puVar8[3] == 0)) {
            uVar5 = 0xffffffffffffffff;
            goto LAB_00486794;
          }
        }
        else {
          if ((int)puVar8[3] == 0) {
            FUN_0049ddc0(*(undefined8 *)PTR_DAT_02712b50,param_1 + 0x40);
            puVar8 = *(ulong **)(param_1 + 0x48);
          }
          FUN_004a41a0(auStack_a0,uVar5,param_2);
          uVar3 = FUN_00488b30(puVar8 + 2,auStack_a0);
          if ((uVar3 & 1) != 0) {
            uVar5 = puVar8[1] & uVar5;
LAB_00486794:
            puVar8[1] = uVar5;
          }
        }
      }
      uVar5 = uVar4 | uVar6;
      if (lVar7 == 0) {
        uVar4 = uVar4 | uVar6;
        uVar5 = uVar4;
        if (((param_4 & 1) != 0) && (lVar7 = *(long *)(param_1 + 0x80), lVar7 != 0)) {
          uVar1 = FUN_00453750(lVar7);
          uVar5 = uVar4 | 0x380000000020;
          if ((uVar1 & 1) == 0) {
            uVar5 = uVar4;
          }
          uVar2 = uVar2 | uVar1;
        }
      }
      param_1 = *(long *)(param_1 + 0x78);
      uVar6 = uVar5;
    } while (param_1 != 0);
  }
  if (lVar7 != 0) {
    uVar4 = *param_3;
    uVar6 = uVar4 & (uVar5 ^ 0xffffffffffffffff | 0x3800000100bf);
    while (uVar6 != 0) {
      uVar6 = 0;
      if (*(long *)(lVar7 + 0x80) != 0) {
        uVar6 = (ulong)*(uint *)(lVar7 + 0x98);
      }
      local_a8 = uVar4 & ~uVar5 & (uVar6 << 0x11 | 0x7fbf9ffffd00bf);
      puVar8 = *(ulong **)(lVar7 + 0x38);
      if (puVar8 != (ulong *)0x0) {
        uVar4 = *puVar8 & local_a8;
        if (uVar4 == 0) {
          uVar4 = FUN_004a4300(puVar8 + 2,param_2);
          if (((uVar4 & 1) != 0) && ((int)puVar8[3] == 0)) {
            uVar4 = 0xffffffffffffffff;
            goto LAB_004868cc;
          }
        }
        else {
          if ((int)puVar8[3] == 0) {
            FUN_0049ddc0(*(undefined8 *)PTR_DAT_02712b50,lVar7 + 0x30);
            puVar8 = *(ulong **)(lVar7 + 0x38);
          }
          FUN_004a41a0(auStack_a0,uVar4,param_2);
          uVar3 = FUN_00488b30(puVar8 + 2,auStack_a0);
          if ((uVar3 & 1) != 0) {
            uVar4 = puVar8[1] & uVar4;
LAB_004868cc:
            puVar8[1] = uVar4;
          }
        }
      }
      FUN_00486a80(lVar7 + 0x18,param_2,&local_a8);
      puVar8 = *(ulong **)(lVar7 + 0x158);
      if (puVar8 == (ulong *)0x0) {
LAB_00486984:
        puVar8 = *(ulong **)(lVar7 + 0x48);
      }
      else {
        uVar4 = local_a8 & *puVar8;
        if (uVar4 == 0) {
          uVar4 = FUN_004a4300(puVar8 + 2,param_2);
          if (((uVar4 & 1) == 0) || ((int)puVar8[3] != 0)) goto LAB_00486984;
          uVar4 = 0xffffffffffffffff;
        }
        else {
          if ((int)puVar8[3] == 0) {
            FUN_0049ddc0(*(undefined8 *)PTR_DAT_02712b50,lVar7 + 0x150);
            puVar8 = *(ulong **)(lVar7 + 0x158);
          }
          FUN_004a41a0(auStack_a0,uVar4,param_2);
          uVar3 = FUN_00488b30(puVar8 + 2,auStack_a0);
          if ((uVar3 & 1) == 0) goto LAB_00486984;
          uVar4 = puVar8[1] & uVar4;
        }
        puVar8[1] = uVar4;
        puVar8 = *(ulong **)(lVar7 + 0x48);
      }
      if (puVar8 != (ulong *)0x0) {
        uVar4 = local_a8 & *puVar8;
        if (uVar4 == 0) {
          uVar4 = FUN_004a4300(puVar8 + 2,param_2);
          if (((uVar4 & 1) != 0) && ((int)puVar8[3] == 0)) {
            uVar4 = 0xffffffffffffffff;
            goto LAB_004869e4;
          }
        }
        else {
          if ((int)puVar8[3] == 0) {
            FUN_0049ddc0(*(undefined8 *)PTR_DAT_02712b50,lVar7 + 0x40);
            puVar8 = *(ulong **)(lVar7 + 0x48);
          }
          FUN_004a41a0(auStack_a0,uVar4,param_2);
          uVar3 = FUN_00488b30(puVar8 + 2,auStack_a0);
          if ((uVar3 & 1) != 0) {
            uVar4 = puVar8[1] & uVar4;
LAB_004869e4:
            puVar8[1] = uVar4;
          }
        }
      }
      lVar7 = *(long *)(lVar7 + 0x80);
      uVar6 = uVar6 << 0x11 | uVar5;
      if ((uVar2 & 1) == 0 && lVar7 != 0) {
        uVar2 = FUN_00453750(lVar7);
        uVar5 = uVar6 | 0x380000000020;
        if ((uVar2 & 1) == 0) {
          uVar5 = uVar6;
        }
      }
      else {
        uVar5 = uVar6;
        if (lVar7 == 0) {
          return;
        }
      }
      uVar4 = *param_3;
      uVar6 = uVar4 & (uVar5 ^ 0xffffffffffffffff | 0x3800000100bf);
    }
  }
  return;
}


