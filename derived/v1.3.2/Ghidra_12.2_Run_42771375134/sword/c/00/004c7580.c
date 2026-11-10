/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c7580; name: FUN_004c7580
 */


void FUN_004c7580(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long local_60;
  undefined8 local_58;
  
  lVar11 = *(long *)(param_1 + 0x20);
  if (lVar11 != 0) {
    if (*(char *)(lVar11 + 0x11d) != '\0') {
      plVar8 = (long *)FUN_004958e0();
      puVar7 = PTR_DAT_02712d38;
      puVar6 = PTR_DAT_02712d18;
      puVar5 = PTR_DAT_02712a90;
      if ((char)plVar8[0x17] == '\0') {
        plVar8 = *(long **)PTR_DAT_02712d18;
        puVar1 = PTR_DAT_02712d28 + 0x10;
        puVar2 = PTR_DAT_02712d30 + 0x10;
        do {
          while (plVar8 != (long *)0x0) {
            if ((char)plVar8[0x17] != '\0') goto LAB_004c7678;
          }
          plVar8 = (long *)FUN_00404690(*(undefined4 *)puVar5,0xc0);
          *plVar8 = (long)puVar1;
          plVar8[1] = 0;
          lVar11 = *(long *)(puVar7 + 8);
          plVar8[2] = 0;
          plVar8[3] = lVar11;
          plVar3 = (long *)(puVar7 + 0x10);
          if (*(long *)(puVar7 + 0x10) != 0) {
            plVar3 = (long *)(lVar11 + 0x10);
          }
          *plVar3 = (long)plVar8;
          *(long **)(puVar7 + 8) = plVar8;
          *(int *)puVar7 = *(int *)puVar7 + 1;
          *plVar8 = (long)puVar2;
          plVar8[7] = 0;
          plVar8[8] = 0;
          plVar8[10] = 0;
          plVar8[0xb] = 0;
          plVar8[0xf] = 0;
          plVar8[0x10] = 0;
          plVar8[0x12] = 0;
          plVar8[0x13] = 0;
          plVar8[0x15] = 0;
          plVar8[0x16] = 0;
          *(long **)puVar6 = plVar8;
          *(undefined2 *)(plVar8 + 0x17) = 0x101;
        } while ((char)plVar8[0x17] == '\0');
      }
LAB_004c7678:
      uVar9 = *(ulong *)(param_1 + 0x48);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar9;
joined_r0x004c7680:
      if (uVar9 == 0) {
        return;
      }
      do {
        local_58 = auVar14._8_8_;
        local_60 = auVar14._0_8_;
        if (*(int *)(local_60 + 0x2a0) == 0) {
          iVar10 = (int)plVar8[0xb] + -1;
          if (iVar10 < 0) goto LAB_004c7704;
          uVar9 = *(ulong *)(local_60 + 200);
          iVar12 = 0;
          while( true ) {
            while( true ) {
              iVar4 = iVar10 - iVar12;
              if (iVar4 < 0) {
                iVar4 = iVar4 + 1;
              }
              iVar4 = iVar12 + (iVar4 >> 1);
              uVar13 = *(ulong *)(plVar8[10] + (long)iVar4 * 8);
              if (uVar9 > uVar13 || uVar13 == uVar9) break;
              iVar10 = iVar4 + -1;
              if (iVar10 < iVar12) goto LAB_004c7704;
            }
            if (uVar9 <= uVar13) break;
            iVar12 = iVar4 + 1;
            if (iVar10 < iVar12) goto LAB_004c7704;
          }
          if (plVar8[10] + (long)iVar4 * 8 == 0) goto LAB_004c7704;
        }
        auVar14._8_8_ = local_60;
        auVar14._0_8_ = *(long *)(local_60 + 0x40);
        if (*(long *)(local_60 + 0x40) == 0) {
          return;
        }
      } while( true );
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0x10) + 0x48);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = *(ulong *)(param_1 + 0x48);
    while (auVar15._0_8_ != 0) {
      while( true ) {
        local_58 = auVar15._8_8_;
        local_60 = auVar15._0_8_;
        if ((*(int *)(local_60 + 0x2a0) == 0) && (*(long *)(local_60 + 200) != lVar11)) break;
        auVar15._8_8_ = local_60;
        auVar15._0_8_ = *(long *)(local_60 + 0x40);
        if (*(long *)(local_60 + 0x40) == 0) {
          return;
        }
      }
      auVar15 = FUN_004cf990(param_1,&local_60);
    }
  }
  return;
LAB_004c7704:
  auVar14 = FUN_004cf990(param_1,&local_60);
  uVar9 = auVar14._0_8_;
  goto joined_r0x004c7680;
}


