/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ea720; name: FUN_006ea720
 */


void FUN_006ea720(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  
  FUN_006f2e20(*(undefined8 *)(param_1 + 0x160));
  puVar2 = PTR_DAT_02715500;
  lVar11 = *(long *)(param_1 + 0x160);
  iVar8 = *(int *)PTR_DAT_02715500;
  if (*(int *)(lVar11 + 0x100) == 0) {
    lVar14 = *(long *)(lVar11 + 0x58) + (long)iVar8 * 0x170;
    FUN_0199cb60(lVar14);
    FUN_006ef3c0(param_1);
    if (*(int *)(lVar14 + 0x168) != 0) {
      FUN_0199de60(lVar14);
      *(undefined4 *)(lVar14 + 0x168) = 0;
    }
    FUN_0199cbc0(lVar14);
  }
  else {
    pcVar10 = *(code **)(lVar11 + 0x88);
    *(int *)(lVar11 + 0x104) = iVar8;
    if (pcVar10 != (code *)0x0) {
      *(undefined8 *)(lVar11 + 0x90) = 0;
      *(undefined8 *)(lVar11 + 0x98) = 0;
      *(undefined8 *)(lVar11 + 0x80) = 0;
      *(undefined8 *)(lVar11 + 0x88) = 0;
      (*pcVar10)(lVar11 + 0xa0);
      iVar8 = *(int *)(lVar11 + 0x104);
    }
    *(long *)(lVar11 + 0xa0) = param_1;
    *(code **)(lVar11 + 0x80) = FUN_006f11f0;
    *(undefined1 **)(lVar11 + 0x88) = &LAB_006f1200;
    lVar14 = *(long *)(lVar11 + 0x58) + (long)iVar8 * 0x170;
    *(undefined1 **)(lVar11 + 0x90) = &LAB_006f1210;
    *(undefined1 **)(lVar11 + 0x98) = &LAB_006f1220;
    FUN_0199cb60(lVar14);
    (**(code **)(lVar11 + 0x80))((long *)(lVar11 + 0xa0));
    if (*(int *)(lVar14 + 0x168) != 0) {
      FUN_0199de60(lVar14);
      *(undefined4 *)(lVar14 + 0x168) = 0;
    }
    FUN_0199cbc0(lVar14);
    FUN_006f6c30(*(undefined8 *)PTR_DAT_02710460,lVar11);
  }
  *(undefined1 *)(lVar11 + 0x109) = 1;
  FUN_019a2b90(param_1 + 0x21f0,
               *(long *)(*(long *)(param_1 + 0x160) + 0x58) + (long)*(int *)puVar2 * 0x170,
               param_1 + (long)*(int *)puVar2 * 0x58 + 0x4218);
  lVar14 = *(long *)(*(long *)(param_1 + 0x168) + 0xd0);
  nn::os::GetSystemTick();
  lVar11 = nn::os::ConvertToTimeSpan();
  if (*(char *)(param_1 + 0x85c8) == '\0') {
    *(char *)(param_1 + 0x85c8) = '\x01';
  }
  else {
    FUN_019a5540(param_1 + (1 - (long)*(int *)PTR_DAT_02715500) * 0x58 + 0x4218,1000000000);
  }
  nn::os::GetSystemTick();
  lVar3 = nn::os::ConvertToTimeSpan();
  lVar12 = *(long *)(param_1 + 0x1e8);
  iVar8 = *(int *)PTR_DAT_02715500;
  *(int *)(lVar12 + 0x138) = (int)(1 - (long)iVar8);
  puVar2 = PTR_DAT_02710460;
  FUN_006f6a10(*(undefined8 *)PTR_DAT_02710460,lVar12);
  lVar12 = lVar12 + (1 - (long)iVar8) * 0x70 + 0x58;
  lVar4 = thunk_FUN_0199c7e0(lVar12);
  uVar5 = FUN_0199c890();
  uVar6 = FUN_0199c890(lVar4 + 0x10);
  uVar5 = FUN_0199c8a0(uVar5,uVar6);
  *(undefined8 *)(param_1 + 0x1e0) = uVar5;
  thunk_FUN_0199c800(lVar12);
  FUN_006ea440(*(undefined8 *)PTR_DAT_027155f0);
  FUN_006ea590(*(undefined8 *)PTR_DAT_02710450);
  FUN_006f71d0(*(undefined8 *)puVar2);
  lVar4 = **(long **)(param_1 + 0x120);
  puVar13 = (undefined8 *)(lVar4 + 0x58);
  plVar7 = (long *)(**(code **)*puVar13)(puVar13);
  lVar12 = FUN_006ef290();
  do {
    if (plVar7 == (long *)0x0) {
LAB_006ea298:
      nn::os::GetSystemTick();
      lVar12 = nn::os::ConvertToTimeSpan();
      lVar12 = lVar12 - *(long *)(param_1 + 0x1b8);
      *(long *)(param_1 + 0x1c0) = lVar12;
      *(long *)(param_1 + 0x1d0) = ((lVar11 - lVar14) - lVar3) + lVar12;
      lVar11 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,0);
      iVar8 = 0;
      if (*(char *)(param_1 + 0x85c9) == '\0') {
        iVar8 = (int)((double)*(long *)(lVar11 + 8) / DAT_01cd53b8);
        if (iVar8 < 2) {
          iVar8 = 1;
        }
        if (4 < iVar8) {
          iVar8 = 5;
        }
      }
      lVar11 = param_1 + 0x21f0;
      FUN_006f19d0(*(undefined8 *)(param_1 + 0x168),lVar11,iVar8);
      if ((double)*(long *)(param_1 + 0x1c0) / DAT_01cd5058 < 4.0) {
        FUN_019a2c00(lVar11);
      }
      if ((*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x85a8)) ||
         (*(int *)(param_1 + 0x85bc) != *(int *)(param_1 + 0x85b8))) {
        FUN_019a2c00(lVar11);
        iVar8 = *(int *)(param_1 + 0x85a8);
        if (*(int *)(param_1 + 0x70) != iVar8) {
          *(int *)(param_1 + 0x70) = iVar8;
          puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x85a0) + 0x68);
          for (puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x85a0) + 0x60); puVar13 != puVar1;
              puVar13 = puVar13 + 1) {
            (**(code **)(*(long *)*puVar13 + 8))();
          }
        }
      }
      if (*(int *)(param_1 + 0x85bc) != *(int *)(param_1 + 0x85b8)) {
        *(int *)(param_1 + 0x85bc) = *(int *)(param_1 + 0x85b8);
        puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x85b0) + 0x68);
        for (puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x85b0) + 0x60); puVar13 != puVar1;
            puVar13 = puVar13 + 1) {
          (**(code **)(*(long *)*puVar13 + 8))();
        }
      }
      *(undefined4 *)(param_1 + 0x85c4) = *(undefined4 *)(param_1 + 0x85c0);
      nn::os::GetSystemTick();
      uVar5 = nn::os::ConvertToTimeSpan();
      *(undefined8 *)(param_1 + 0x1b8) = uVar5;
      return;
    }
    if (plVar7 == (long *)lVar12) {
      uVar9 = (ulong)~*(uint *)(lVar4 + 0x98) & 1;
      *(ulong *)(lVar4 + 0x98) = uVar9;
      puVar13[uVar9 * 3 + 2] = puVar13[uVar9 * 3 + 3];
      goto LAB_006ea298;
    }
    plVar7 = (long *)*plVar7;
  } while( true );
}


