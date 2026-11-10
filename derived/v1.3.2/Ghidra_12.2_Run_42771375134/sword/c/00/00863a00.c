/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00863a00; name: FUN_00863a00
 */


void FUN_00863a00(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  
  FUN_0087f160();
  FUN_00885a40(param_1);
  puVar1 = PTR_DAT_02710860;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar2 + 0x80) < 0x10) {
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    lVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x80,8);
    if (lVar3 == 0) {
      (**(code **)(*param_1 + 0xb8))(param_1);
    }
    FUN_0077d050(lVar3,0x100);
    *(long **)(lVar3 + 8) = param_1;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x80;
    *(undefined8 *)(lVar3 + 0x20) = 8;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (DAT_029f59e0 != 0) {
      (**(code **)(*(long *)(DAT_029f59e0 + 0x48) + 0x18))();
    }
    uVar11 = 0;
    plVar12 = &DAT_029f5b48;
    lVar2 = 0x70;
    DAT_029f59e0 = lVar3;
    do {
      lVar3 = FUN_00866030();
      if (*(long *)(lVar3 + lVar2) != 0) {
        lVar3 = FUN_00866030();
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_008643d4;
        *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_1;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        lVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x1d0,0x10);
        if (lVar5 == 0) {
          (**(code **)(*param_1 + 0xb8))(param_1);
        }
        FUN_0077e030(lVar5,lVar3 + lVar2 + -0x18,1);
        *(long **)(lVar5 + 8) = param_1;
        *(long *)(lVar5 + 0x10) = lVar5;
        *(undefined8 *)(lVar5 + 0x18) = 0x1d0;
        *(undefined8 *)(lVar5 + 0x20) = 0x10;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        if (*plVar12 != 0) {
          (**(code **)(*(long *)(*plVar12 + 0x48) + 0x18))();
          *plVar12 = 0;
        }
        *plVar12 = lVar5;
      }
      uVar11 = uVar11 + 1;
      plVar12 = plVar12 + 1;
      lVar2 = lVar2 + 0x30;
    } while (uVar11 < 0xb);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0xc0,8);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar2 + 0x80) < 0x10) {
      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      FUN_0087f4c0(puVar6);
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      puVar10 = DAT_029f5a08;
      if (DAT_029f5a08 != (undefined8 *)0x0) {
        puVar9 = (undefined8 *)*DAT_029f5a08;
        DAT_029f5a08 = puVar6;
        (*(code *)*puVar9)(puVar10);
        (**(code **)(*DAT_029f5a10 + 0x18))(DAT_029f5a10,puVar10,DAT_029f5a18,DAT_029f5a20);
        puVar6 = DAT_029f5a08;
      }
      DAT_029f5a08 = puVar6;
      DAT_029f5a18 = 0xc0;
      DAT_029f5a20 = 8;
      DAT_029f5a10 = param_1;
      puVar7 = (undefined4 *)FUN_00866030();
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x30,8);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar2 + 0x80) < 0x10) {
        *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        FUN_00886fd0(puVar6,param_1,*puVar7);
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
        puVar10 = DAT_029f59e8;
        if (DAT_029f59e8 != (undefined8 *)0x0) {
          puVar9 = (undefined8 *)*DAT_029f59e8;
          DAT_029f59e8 = puVar6;
          (*(code *)*puVar9)(puVar10);
          (**(code **)(*DAT_029f59f0 + 0x18))(DAT_029f59f0,puVar10,DAT_029f59f8,DAT_029f5a00);
          puVar6 = DAT_029f59e8;
        }
        DAT_029f59e8 = puVar6;
        DAT_029f59f8 = 0x30;
        DAT_029f5a00 = 8;
        DAT_029f59f0 = param_1;
        puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1a0,8);
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (*(ulong *)(lVar2 + 0x80) < 0x10) {
          *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
          *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
          FUN_00886cc0(puVar6);
          *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
          puVar10 = DAT_029f5a48;
          if (DAT_029f5a48 != (undefined8 *)0x0) {
            puVar9 = (undefined8 *)*DAT_029f5a48;
            DAT_029f5a48 = puVar6;
            (*(code *)*puVar9)(puVar10);
            (**(code **)(*DAT_029f5a50 + 0x18))(DAT_029f5a50,puVar10,DAT_029f5a58,DAT_029f5a60);
            puVar6 = DAT_029f5a48;
          }
          DAT_029f5a48 = puVar6;
          DAT_029f5a58 = 0x1a0;
          DAT_029f5a60 = 8;
          DAT_029f5a50 = param_1;
          lVar2 = FUN_00866030();
          puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x30,8);
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
          if (*(ulong *)(lVar3 + 0x80) < 0x10) {
            *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_1;
            *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
            FUN_00886880(puVar6,param_1,*(undefined4 *)(lVar2 + 4));
            *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
            puVar10 = DAT_029f5a68;
            if (DAT_029f5a68 != (undefined8 *)0x0) {
              puVar9 = (undefined8 *)*DAT_029f5a68;
              DAT_029f5a68 = puVar6;
              (*(code *)*puVar9)(puVar10);
              (**(code **)(*DAT_029f5a70 + 0x18))(DAT_029f5a70,puVar10,DAT_029f5a78,DAT_029f5a80);
              puVar6 = DAT_029f5a68;
            }
            DAT_029f5a68 = puVar6;
            DAT_029f5a78 = 0x30;
            DAT_029f5a80 = 8;
            DAT_029f5a70 = param_1;
            puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x118,8);
            lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
            if (*(ulong *)(lVar2 + 0x80) < 0x10) {
              *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
              *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
              FUN_00885da0(puVar6);
              *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
              puVar10 = DAT_029f5a88;
              if (DAT_029f5a88 != (undefined8 *)0x0) {
                puVar9 = (undefined8 *)*DAT_029f5a88;
                DAT_029f5a88 = puVar6;
                (*(code *)*puVar9)(puVar10);
                (**(code **)(*DAT_029f5a90 + 0x18))(DAT_029f5a90,puVar10,DAT_029f5a98,DAT_029f5aa0);
                puVar6 = DAT_029f5a88;
              }
              DAT_029f5a88 = puVar6;
              DAT_029f5a98 = 0x118;
              DAT_029f5aa0 = 8;
              DAT_029f5a90 = param_1;
              puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x118,8);
              lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
              if (*(ulong *)(lVar2 + 0x80) < 0x10) {
                *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
                *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
                FUN_00885da0(puVar6);
                *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
                puVar10 = DAT_029f5aa8;
                if (DAT_029f5aa8 != (undefined8 *)0x0) {
                  puVar9 = (undefined8 *)*DAT_029f5aa8;
                  DAT_029f5aa8 = puVar6;
                  (*(code *)*puVar9)(puVar10);
                  (**(code **)(*DAT_029f5ab0 + 0x18))
                            (DAT_029f5ab0,puVar10,DAT_029f5ab8,DAT_029f5ac0);
                  puVar6 = DAT_029f5aa8;
                }
                DAT_029f5aa8 = puVar6;
                DAT_029f5ab8 = 0x118;
                DAT_029f5ac0 = 8;
                DAT_029f5ab0 = param_1;
                puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x118,8);
                lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
                if (*(ulong *)(lVar2 + 0x80) < 0x10) {
                  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
                  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
                  FUN_00885da0(puVar6);
                  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
                  puVar10 = DAT_029f5ac8;
                  if (DAT_029f5ac8 != (undefined8 *)0x0) {
                    puVar9 = (undefined8 *)*DAT_029f5ac8;
                    DAT_029f5ac8 = puVar6;
                    (*(code *)*puVar9)(puVar10);
                    (**(code **)(*DAT_029f5ad0 + 0x18))
                              (DAT_029f5ad0,puVar10,DAT_029f5ad8,DAT_029f5ae0);
                    puVar6 = DAT_029f5ac8;
                  }
                  DAT_029f5ac8 = puVar6;
                  DAT_029f5ad8 = 0x118;
                  DAT_029f5ae0 = 8;
                  DAT_029f5ad0 = param_1;
                  lVar2 = FUN_00866030();
                  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x30,8);
                  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
                  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
                    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_1;
                    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
                    FUN_008872c0(puVar6,param_1,*(undefined4 *)(lVar2 + 8));
                    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
                    puVar10 = DAT_029f5ae8;
                    if (DAT_029f5ae8 != (undefined8 *)0x0) {
                      puVar9 = (undefined8 *)*DAT_029f5ae8;
                      DAT_029f5ae8 = puVar6;
                      (*(code *)*puVar9)(puVar10);
                      (**(code **)(*DAT_029f5af0 + 0x18))
                                (DAT_029f5af0,puVar10,DAT_029f5af8,DAT_029f5b00);
                      puVar6 = DAT_029f5ae8;
                    }
                    DAT_029f5ae8 = puVar6;
                    DAT_029f5af8 = 0x30;
                    DAT_029f5b00 = 8;
                    DAT_029f5af0 = param_1;
                    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x30,8);
                    lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
                    if (*(ulong *)(lVar2 + 0x80) < 0x10) {
                      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
                      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
                      FUN_00885fb0(puVar6,param_1);
                      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
                      puVar10 = DAT_029f5b08;
                      if (DAT_029f5b08 != (undefined8 *)0x0) {
                        puVar9 = (undefined8 *)*DAT_029f5b08;
                        DAT_029f5b08 = puVar6;
                        (*(code *)*puVar9)(puVar10);
                        (**(code **)(*DAT_029f5b10 + 0x18))
                                  (DAT_029f5b10,puVar10,DAT_029f5b18,DAT_029f5b20);
                        puVar6 = DAT_029f5b08;
                      }
                      DAT_029f5b08 = puVar6;
                      DAT_029f5b18 = 0x30;
                      DAT_029f5b20 = 8;
                      DAT_029f5b10 = param_1;
                      lVar2 = FUN_00866030();
                      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x30,8);
                      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
                      if (*(ulong *)(lVar3 + 0x80) < 0x10) {
                        *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_1;
                        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
                        FUN_00887730(puVar6,param_1,*(undefined4 *)(lVar2 + 0xc));
                        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
                        puVar10 = DAT_029f5b28;
                        if (DAT_029f5b28 != (undefined8 *)0x0) {
                          puVar9 = (undefined8 *)*DAT_029f5b28;
                          DAT_029f5b28 = puVar6;
                          (*(code *)*puVar9)(puVar10);
                          (**(code **)(*DAT_029f5b30 + 0x18))
                                    (DAT_029f5b30,puVar10,DAT_029f5b38,DAT_029f5b40);
                          puVar6 = DAT_029f5b28;
                        }
                        DAT_029f5b28 = puVar6;
                        DAT_029f5b38 = 0x30;
                        DAT_029f5b40 = 8;
                        DAT_029f5b30 = param_1;
                        uVar8 = (**(code **)(*param_1 + 0x10))(param_1,0xc0,8);
                        lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
                        if (*(ulong *)(lVar2 + 0x80) < 0x10) {
                          *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
                          *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
                          FUN_0087f4c0(uVar8);
                          *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
                          puVar6 = DAT_029f5a28;
                          if (DAT_029f5a28 != (undefined8 *)0x0) {
                            puVar10 = (undefined8 *)*DAT_029f5a28;
                            DAT_029f5a28 = (undefined8 *)uVar8;
                            (*(code *)*puVar10)(puVar6);
                            (**(code **)(*DAT_029f5a30 + 0x18))
                                      (DAT_029f5a30,puVar6,DAT_029f5a38,DAT_029f5a40);
                            uVar8 = DAT_029f5a28;
                          }
                          DAT_029f5a28 = (undefined8 *)uVar8;
                          DAT_029f5a38 = 0xc0;
                          DAT_029f5a40 = 8;
                          DAT_029f5a30 = param_1;
                          FUN_00885df0(DAT_029f5aa8,0,0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_008643d4:
                    /* WARNING: Subroutine does not return */
  abort();
}


