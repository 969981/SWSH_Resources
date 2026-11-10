/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb9a20; name: FUN_00fb9a20
 */


void FUN_00fb9a20(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  long local_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  undefined8 local_58;
  
  if (*(char *)(param_1 + 0x45) != '\0') {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x68);
  lVar9 = *(long *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x98);
  puVar5 = PTR_DAT_02710860;
  do {
    while( true ) {
      if (lVar1 == lVar9) {
        lVar9 = *(long *)(param_1 + 0x100);
        for (lVar1 = *(long *)(param_1 + 0xf8); lVar1 != lVar9; lVar1 = lVar1 + 8) {
          plVar8 = (long *)FUN_00fba2d0(lVar1);
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x80))();
            local_80 = plVar8[0xba];
            local_78 = plVar8[0xbb];
            lStack_70 = plVar8[0xbc];
            local_68 = plVar8[0xbd];
            lStack_60 = plVar8[0xbe];
            local_58 = FUN_0121b000(&local_80);
            FUN_00fba430(param_1,&local_58);
          }
        }
        lVar9 = *(long *)(param_1 + 400);
        for (lVar1 = *(long *)(param_1 + 0x188); lVar1 != lVar9; lVar1 = lVar1 + 8) {
          plVar8 = (long *)FUN_00fba9b0(lVar1);
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x80))();
          }
        }
        lVar1 = *(long *)(param_1 + 0x68);
        lVar9 = *(long *)(param_1 + 0x70);
        while (lVar9 != lVar1) {
          if (*(long *)(lVar9 + -8) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar9 + -8) + 0x48) + 0x18))();
            *(undefined8 *)(lVar9 + -8) = 0;
          }
          if (*(long *)(lVar9 + -0x10) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar9 + -0x10) + 0x48) + 0x18))();
            *(undefined8 *)(lVar9 + -0x10) = 0;
          }
          if (*(char *)(lVar9 + -0x90) != '\0') {
            *(undefined1 *)(lVar9 + -0x90) = 0;
          }
          if (*(char *)(lVar9 + -0xe0) != '\0') {
            *(undefined1 *)(lVar9 + -0xe0) = 0;
          }
          if (*(char *)(lVar9 + -0x1a0) != '\0') {
            *(char *)(lVar9 + -0x1a0) = '\0';
          }
          if (*(char *)(lVar9 + -500) != '\0') {
            if (*(char *)(lVar9 + -0x1ec) != '\0') {
              *(char *)(lVar9 + -0x1ec) = '\0';
            }
            *(char *)(lVar9 + -500) = '\0';
          }
          if (*(char *)(lVar9 + -0x230) != '\0') {
            *(char *)(lVar9 + -0x230) = '\0';
          }
          if (*(char *)(lVar9 + -0x244) != '\0') {
            *(char *)(lVar9 + -0x244) = '\0';
          }
          if (*(char *)(lVar9 + -0x268) != '\0') {
            *(char *)(lVar9 + -0x268) = '\0';
          }
          if (*(char *)(lVar9 + -0x278) != '\0') {
            *(char *)(lVar9 + -0x278) = '\0';
          }
          pcVar10 = (char *)(lVar9 + -0x280);
          lVar9 = lVar9 + -0x290;
          if (*pcVar10 != '\0') {
            *pcVar10 = '\0';
          }
        }
        *(long *)(param_1 + 0x70) = lVar1;
        *(undefined1 *)(param_1 + 0x45) = 1;
        return;
      }
      if ((*(long *)(lVar1 + 0x280) != 0) && (*(int *)(*(long *)(lVar1 + 0x280) + 0x54) != 0))
      break;
LAB_00fb9aec:
      lVar1 = lVar1 + 0x290;
    }
    puVar6 = (undefined8 *)FUN_01225e50(lVar1);
    puVar2 = *(undefined8 **)(param_1 + 0xa0);
    if (puVar2 != *(undefined8 **)(param_1 + 0xa8)) {
      uVar11 = *(undefined8 *)(param_1 + 0xb0);
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar11;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      *puVar2 = *puVar6;
      uVar11 = puVar6[1];
      uVar3 = puVar6[2];
      uVar4 = puVar6[4];
      puVar2[3] = puVar6[3];
      puVar2[4] = uVar4;
      puVar2[1] = uVar11;
      puVar2[2] = uVar3;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 0x28;
      goto LAB_00fb9aec;
    }
    FUN_00fc0c60((undefined8 *)(param_1 + 0x98),puVar6);
    lVar1 = lVar1 + 0x290;
  } while( true );
}


