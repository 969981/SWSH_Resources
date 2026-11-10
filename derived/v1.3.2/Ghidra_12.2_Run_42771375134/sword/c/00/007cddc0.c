/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007cddc0; name: FUN_007cddc0
 */


undefined8 FUN_007cddc0(long param_1)

{
  long *plVar1;
  short *psVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  short *psVar6;
  short sVar7;
  undefined8 uVar8;
  ulong uVar9;
  char cVar10;
  long *plVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  short *psVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 local_b8;
  long *local_b0 [2];
  long alStack_a0 [4];
  long *local_80;
  long *local_70;
  long lStack_68;
  long local_60;
  
  if (((*(long *)(param_1 + 0x18) == 0) || (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x58)))
     || (*(long *)PTR_DAT_027104b0 == 0)) {
    return 0;
  }
  uVar8 = FUN_007b5710();
  FUN_007a2d60(local_b0,uVar8);
  plVar11 = *(long **)(param_1 + 0x50);
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar11 != plVar5) {
    do {
      while( true ) {
        if ((lStack_68 == 0) || (*local_70 == *plVar11)) {
          plVar15 = local_70;
        }
        else {
          lVar12 = lStack_68 * 8;
          plVar16 = local_70;
          do {
            lVar12 = lVar12 + -8;
            if (lVar12 == 0) goto LAB_007cde88;
            plVar15 = plVar16 + 1;
            plVar1 = plVar16 + 1;
            plVar16 = plVar15;
          } while (*plVar1 != *plVar11);
        }
        if (local_70 + lStack_68 == plVar15) break;
        plVar11 = plVar11 + 2;
        if (plVar11 == plVar5) goto LAB_007cdea0;
      }
LAB_007cde88:
      *(undefined2 *)(plVar11 + 1) = 0;
      *(undefined1 *)((long)plVar11 + 10) = 0;
      *(undefined2 *)((long)plVar11 + 0xc) = 0x1e;
      plVar11 = plVar11 + 2;
    } while (plVar11 != plVar5);
LAB_007cdea0:
    psVar6 = *(short **)(param_1 + 0x58);
    if (*(short **)(param_1 + 0x50) != psVar6) {
      psVar17 = *(short **)(param_1 + 0x50) + 6;
      do {
        local_b8 = *(undefined8 *)(psVar17 + -6);
        if ((((char)psVar17[-2] == '\0') &&
            (sVar7 = *psVar17, *psVar17 = sVar7 + 1, 0x1e < (ushort)(sVar7 + 1U))) &&
           (uVar9 = FUN_007ce170(param_1,&local_b8), (uVar9 & 1) != 0)) {
          *psVar17 = 0;
        }
        psVar2 = psVar17 + 2;
        psVar17 = psVar17 + 8;
      } while (psVar2 != psVar6);
      cVar10 = *(char *)(param_1 + 0x80);
      lVar12 = *(long *)(param_1 + 0x50);
      if (lVar12 != *(long *)(param_1 + 0x58)) {
LAB_007cdf14:
        if (*(char *)(lVar12 + 8) != '\0' && *(char *)(lVar12 + 9) != '\0') goto code_r0x007cdf28;
        *(char *)(param_1 + 0x80) = '\0';
        if (cVar10 != '\0') {
          lVar12 = *(long *)(param_1 + 0x118);
          if (lVar12 != 0) {
            lVar14 = *(long *)(param_1 + 0x110) + 0x20;
            do {
              pcVar13 = *(code **)(lVar14 + -0x18);
              lVar12 = lVar12 + -1;
              if (pcVar13 != (code *)0x0) {
                *(undefined8 *)(lVar14 + -0x10) = 0;
                *(undefined8 *)(lVar14 + -8) = 0;
                *(undefined8 *)(lVar14 + -0x20) = 0;
                *(undefined8 *)(lVar14 + -0x18) = 0;
                (*pcVar13)(lVar14);
              }
              lVar14 = lVar14 + 0x80;
            } while (lVar12 != 0);
          }
          *(undefined8 *)(param_1 + 0x118) = 0;
          lVar12 = *(long *)(param_1 + 0x118);
          goto joined_r0x007ce0bc;
        }
        goto LAB_007cdf78;
      }
      goto LAB_007cdf64;
    }
  }
  cVar10 = *(char *)(param_1 + 0x80);
LAB_007cdf64:
  *(undefined1 *)(param_1 + 0x80) = 1;
  if (cVar10 == '\0') {
    FUN_007ce280(param_1);
  }
LAB_007cdf78:
  lVar12 = *(long *)(param_1 + 0x118);
joined_r0x007ce0bc:
  if (lVar12 != 0) {
    puVar18 = *(undefined8 **)(param_1 + 0x110);
    do {
      puVar3 = puVar18 + 0x10;
      while( true ) {
        uVar9 = (*(code *)*puVar18)(puVar18 + 4);
        lVar12 = *(long *)(param_1 + 0x110);
        lVar14 = *(long *)(param_1 + 0x118);
        puVar4 = (undefined8 *)(lVar12 + lVar14 * 0x80);
        if ((uVar9 & 1) == 0) break;
        if (puVar3 == puVar4) {
          pcVar13 = (code *)puVar18[1];
          puVar4 = puVar3;
        }
        else {
          puVar19 = puVar18;
          do {
            pcVar13 = (code *)puVar19[1];
            if (pcVar13 != (code *)0x0) {
              puVar19[2] = 0;
              puVar19[3] = 0;
              *puVar19 = 0;
              puVar19[1] = 0;
              (*pcVar13)(puVar19 + 4);
            }
            if ((code *)puVar19[0x13] != (code *)0x0) {
              (*(code *)puVar19[0x13])(puVar19 + 0x14,puVar19 + 4);
              pcVar13 = (code *)puVar19[0x11];
              puVar19[2] = puVar19[0x12];
              puVar19[3] = puVar19[0x13];
              *puVar19 = puVar19[0x10];
              puVar19[1] = pcVar13;
              if (pcVar13 != (code *)0x0) {
                puVar19[0x12] = 0;
                puVar19[0x13] = 0;
                puVar19[0x10] = 0;
                puVar19[0x11] = 0;
                (*pcVar13)(puVar19 + 0x14);
              }
            }
            puVar19 = puVar19 + 0x10;
          } while (puVar4 + -0x10 != puVar19);
          lVar12 = *(long *)(param_1 + 0x110);
          lVar14 = *(long *)(param_1 + 0x118);
          puVar4 = (undefined8 *)(lVar12 + lVar14 * 0x80);
          pcVar13 = (code *)puVar4[-0xf];
        }
        if (pcVar13 != (code *)0x0) {
          puVar4[-0xe] = 0;
          puVar4[-0xd] = 0;
          puVar4[-0x10] = 0;
          puVar4[-0xf] = 0;
          (*pcVar13)(puVar4 + -0xc);
          lVar12 = *(long *)(param_1 + 0x110);
          lVar14 = *(long *)(param_1 + 0x118);
        }
        *(long *)(param_1 + 0x118) = lVar14 + -1;
        if ((undefined8 *)(lVar12 + (lVar14 + -1) * 0x80) == puVar18) goto LAB_007ce0c0;
      }
      puVar18 = puVar3;
    } while (puVar4 != puVar3);
  }
LAB_007ce0c0:
  lVar12 = *(long *)(param_1 + 0x50);
  if (lVar12 != *(long *)(param_1 + 0x58)) {
    do {
      if (((*(char *)(lVar12 + 9) == '\0' || *(char *)(lVar12 + 8) == '\0') ||
          *(char *)(param_1 + 0x80) == '\0') || *(char *)(lVar12 + 10) == '\0') {
        uVar8 = 0;
        goto joined_r0x007ce160;
      }
      lVar12 = lVar12 + 0x10;
    } while (*(long *)(param_1 + 0x58) != lVar12);
  }
  uVar8 = 1;
joined_r0x007ce160:
  if (local_60 != 0) {
    (**(code **)(*local_b0[0] + 0x18))(local_b0[0],local_70,local_60 << 3,8);
  }
  if (alStack_a0 == local_80) {
    pcVar13 = *(code **)(*local_80 + 0x20);
  }
  else {
    if (local_80 == (long *)0x0) {
      return uVar8;
    }
    pcVar13 = *(code **)(*local_80 + 0x28);
  }
  (*pcVar13)();
  return uVar8;
code_r0x007cdf28:
  lVar12 = lVar12 + 0x10;
  if (*(long *)(param_1 + 0x58) == lVar12) goto LAB_007cdf64;
  goto LAB_007cdf14;
}


