/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e75c0; name: FUN_004e75c0
 */


long FUN_004e75c0(long *param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = *(uint *)((long)param_1 + 0xc);
  if (uVar4 <= uVar1) {
    uVar3 = FUN_004e77a0(param_1,1);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    uVar4 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar1 < uVar4) {
    uVar1 = *(uint *)(param_1 + 1);
    lVar5 = *param_1;
    *(uint *)(param_1 + 1) = uVar1 + 1;
    puVar8 = (undefined4 *)(lVar5 + (ulong)uVar1 * 0x48);
    if (puVar8 != (undefined4 *)0x0) {
      lVar5 = lVar5 + (ulong)uVar1 * 0x48;
      *(undefined8 *)(lVar5 + 0x18) = 0x3f80000000000000;
      *(undefined8 *)(lVar5 + 0x20) = 0x13f800000;
      *(undefined4 *)(lVar5 + 0x28) = 0;
      *(undefined8 *)(lVar5 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x38) = 0;
      *(undefined1 *)(lVar5 + 0x40) = 0;
      lVar5 = *param_1;
    }
    puVar2 = PTR_DAT_02713640;
    uVar3 = (ulong)param_2;
    if ((undefined4 *)(lVar5 + (ulong)param_2 * 0x48) < puVar8) {
      do {
        puVar10 = puVar8 + -0x12;
        *puVar8 = *puVar10;
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + -0x10);
        *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(puVar8 + -0xe);
        puVar8[8] = puVar8[-10];
        *(undefined8 *)(puVar8 + 9) = *(undefined8 *)(puVar8 + -9);
        *(undefined8 *)(puVar8 + 0xb) = *(undefined8 *)(puVar8 + -7);
        *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar8 + -0xc);
        puVar8[0xd] = puVar8[-5];
        if ((*(long *)(puVar8 + 0xe) != 0) && (*(char *)(puVar8 + 0x10) != '\0')) {
          FUN_00404870(*(undefined4 *)puVar2);
          *(undefined1 *)(puVar8 + 0x10) = 0;
        }
        uVar6 = *(undefined8 *)(puVar8 + -4);
        *(undefined8 *)(puVar8 + -4) = 0;
        *(undefined8 *)(puVar8 + 0xe) = uVar6;
        *(undefined1 *)(puVar8 + 0x10) = 1;
        *(undefined1 *)(puVar8 + -2) = 0;
        lVar5 = *param_1;
        puVar8 = puVar10;
      } while ((undefined4 *)(lVar5 + uVar3 * 0x48) < puVar10);
    }
    plVar7 = (long *)(lVar5 + uVar3 * 0x48 + 0x38);
    if ((*plVar7 != 0) && (pcVar9 = (char *)(lVar5 + uVar3 * 0x48 + 0x40), *pcVar9 != '\0')) {
      FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
      *pcVar9 = '\0';
    }
    *plVar7 = 0;
    if (*param_1 + uVar3 * 0x48 != 0) {
      lVar5 = *param_1 + uVar3 * 0x48;
      *(undefined8 *)(lVar5 + 0x18) = 0x3f80000000000000;
      *(undefined8 *)(lVar5 + 0x20) = 0x13f800000;
      *(undefined8 *)(lVar5 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined4 *)(lVar5 + 0x28) = 0;
      *(undefined8 *)(lVar5 + 0x38) = 0;
      *(undefined1 *)(lVar5 + 0x40) = 0;
      return *param_1 + uVar3 * 0x48;
    }
  }
  return 0;
}


