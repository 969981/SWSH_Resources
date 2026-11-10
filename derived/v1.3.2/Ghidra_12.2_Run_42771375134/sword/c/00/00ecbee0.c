/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ecbee0; name: FUN_00ecbee0
 */


void FUN_00ecbee0(long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  if (((DAT_02a5d708 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_02a5d708), iVar2 != 0)) {
    DAT_02a5d710 = 0x5294e0c5b65c9834;
    DAT_02a5d718 = "Group0";
    DAT_02a5d730 = 0x5294e1c5b65c99e7;
    DAT_02a5d738 = "Group1";
    DAT_02a5d720 = 6;
    DAT_02a5d728 = 0;
    DAT_02a5d750 = 0x5294e2c5b65c9b9a;
    DAT_02a5d758 = "Group2";
    DAT_02a5d740 = 6;
    DAT_02a5d748 = 0;
    DAT_02a5d770 = 0x5294e3c5b65c9d4d;
    DAT_02a5d778 = "Group3";
    DAT_02a5d760 = 6;
    DAT_02a5d768 = 0;
    DAT_02a5d790 = 0x5294dcc5b65c9168;
    DAT_02a5d798 = "Group4";
    DAT_02a5d780 = 6;
    DAT_02a5d788 = 0;
    DAT_02a5d7b0 = 0x5294ddc5b65c931b;
    DAT_02a5d7b8 = "Group5";
    DAT_02a5d7d0 = 0x5294dec5b65c94ce;
    DAT_02a5d7d8 = "Group6";
    DAT_02a5d7f0 = 0x5294dfc5b65c9681;
    DAT_02a5d7f8 = "Group7";
    DAT_02a5d810 = 0x5294d8c5b65c8a9c;
    DAT_02a5d818 = "Group8";
    DAT_02a5d7a0 = 6;
    DAT_02a5d7a8 = 0;
    DAT_02a5d7c0 = 6;
    DAT_02a5d7c8 = 0;
    DAT_02a5d7e0 = 6;
    DAT_02a5d7e8 = 0;
    DAT_02a5d800 = 6;
    DAT_02a5d808 = 0;
    DAT_02a5d820 = 6;
    DAT_02a5d828 = 0;
    DAT_02a5d830 = 0x5294d9c5b65c8c4f;
    DAT_02a5d838 = "Group9";
    DAT_02a5d840 = 6;
    DAT_02a5d848 = 0;
    FUN_001001c0(&LAB_00ecc220,0,&PTR_LOOP_025db000);
    __cxa_guard_release(&DAT_02a5d708);
  }
  uVar9 = 0;
  puVar10 = (undefined8 *)(param_1 + 0x60);
  puVar6 = &DAT_02a5d710;
  puVar1 = PTR_DAT_027175d0 + 0x10;
  do {
    lVar3 = puVar10[-2];
    puVar10[-2] = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    *(undefined1 *)((long)puVar10 + 0x54) = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    *(undefined4 *)(puVar10 + 8) = 0x461c4000;
    plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x10,8);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    *plVar4 = (long)puVar1;
    plVar4[1] = 0;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    plVar7 = (long *)puVar10[-1];
    puVar10[-1] = plVar4;
    if (plVar7 == (long *)0x0) {
      puVar11 = puVar10 + 1;
      puVar12 = puVar10 + 2;
      puVar5 = puVar10;
    }
    else {
      *plVar7 = (long)(PTR_DAT_027175d0 + 0x10);
      if (plVar7[1] != 0) {
        (**(code **)(*(long *)(plVar7[1] + 0x48) + 0x18))();
        plVar7[1] = 0;
      }
      lVar3 = param_1 + uVar9 * 0x70;
      puVar11 = (undefined8 *)(lVar3 + 0x68);
      puVar12 = (undefined8 *)(lVar3 + 0x70);
      (**(code **)(*(long *)*puVar10 + 0x18))((long *)*puVar10,plVar7,puVar10[1],puVar10[2]);
      plVar4 = (long *)puVar10[-1];
      puVar5 = (undefined8 *)(lVar3 + 0x60);
    }
    *puVar5 = param_2;
    *puVar11 = 0x10;
    *puVar12 = 8;
    FUN_00895ca0(plVar4,puVar6);
    uVar8 = (uint)uVar9;
    uVar9 = uVar9 + 1;
    *(uint *)(puVar10 + 10) = uVar8 & 3;
    puVar10 = puVar10 + 0xe;
    puVar6 = puVar6 + 4;
  } while (uVar9 < 10);
  *(undefined4 *)(param_1 + 0x4c0) = 0;
  return;
}


