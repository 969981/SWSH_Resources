/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047c500; name: FUN_0047c500
 */


void FUN_0047c500(void)

{
  long *plVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  code *pcVar11;
  
  puVar5 = PTR_DAT_02713240;
  puVar4 = PTR_DAT_02713210;
  puVar3 = PTR_DAT_02712a90;
  if (*(long **)(PTR_DAT_02713240 + 0x10) != (long *)0x0) {
    bVar6 = true;
    plVar9 = (long *)0x0;
    plVar1 = *(long **)(PTR_DAT_02713240 + 0x10);
    do {
      while ((plVar10 = plVar1, !bVar6 ||
             (uVar7 = (**(code **)(*plVar10 + 0x60))(plVar10), (uVar7 & 1) == 0))) {
        pcVar11 = *(code **)puVar4;
        if (pcVar11 != (code *)0x0) {
          uVar8 = FUN_0042eec0();
          (*pcVar11)(uVar8,(int)plVar10[0xb],*(undefined4 *)((long)plVar10 + 0x5c),1,1);
        }
        plVar1 = (long *)plVar10[1];
        uVar2 = *(undefined4 *)puVar3;
        (**(code **)*plVar10)(plVar10);
        FUN_00404870(uVar2,plVar10);
        bVar6 = plVar9 == (long *)0x0;
        plVar10 = plVar9;
        if (plVar1 == (long *)0x0) goto LAB_0047c5bc;
      }
      bVar6 = plVar10 == (long *)0x0;
      plVar9 = plVar10;
      plVar1 = (long *)plVar10[1];
    } while ((long *)plVar10[1] != (long *)0x0);
LAB_0047c5bc:
    if (plVar10 != (long *)0x0) {
      pcVar11 = *(code **)puVar4;
      if (pcVar11 != (code *)0x0) {
        uVar8 = FUN_0042eec0();
        (*pcVar11)(uVar8,(int)plVar10[0xb],*(undefined4 *)((long)plVar10 + 0x5c),1,1);
      }
      uVar2 = *(undefined4 *)puVar3;
      (**(code **)*plVar10)(plVar10);
      FUN_00404870(uVar2,plVar10);
    }
  }
  *(undefined4 *)puVar5 = 0;
  puVar3 = PTR_DAT_02713200;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)puVar3 = 0x3f8000003f800000;
  puVar3 = PTR_DAT_02713248;
  if (*(long *)PTR_DAT_02713248 != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)puVar3 = 0;
  }
  puVar3 = PTR_DAT_02713250;
  if (*(undefined **)(PTR_DAT_02713250 + 8) != (undefined *)0x0) {
    bVar6 = *(undefined **)(PTR_DAT_02713250 + 8) != PTR_DAT_02713250;
    *(undefined4 *)(PTR_DAT_02713250 + 0x10) = 0;
    if (bVar6) {
      FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
    }
    *(undefined8 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0x14) = 0;
  }
  puVar3 = PTR_DAT_02713258;
  *PTR_DAT_02712ec0 = 0;
  *puVar3 = 1;
  puVar3 = PTR_DAT_02713230;
  if (PTR_DAT_02713230[0x40] != '\0') {
    *PTR_DAT_02713218 = 1;
    nn::os::SignalEvent((EventType *)PTR_DAT_02713228);
    nn::os::WaitThread((ThreadType *)puVar3);
    nn::os::DestroyThread((ThreadType *)puVar3);
    FUN_00774a60(*(undefined8 *)(puVar3 + 0x1c0));
    *(undefined8 *)(puVar3 + 0x1c0) = 0;
    puVar3[0x40] = 0;
  }
  puVar3 = PTR_DAT_02713228;
  if (PTR_DAT_02713228[0x13] == '\x01') {
    nn::os::FinalizeEvent((EventType *)PTR_DAT_02713228);
  }
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)puVar3 = 0;
  *PTR_DAT_02712ed8 = 0;
  return;
}


