/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013363c0; name: FUN_013363c0
 */


void FUN_013363c0(long param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long alStack_a0 [13];
  long *local_38;
  
  *(undefined4 *)(param_1 + 0x68) = param_2;
  FUN_01336550();
  if (*(int *)(param_1 + 0x68) != 1) {
    lVar2 = *(long *)(param_1 + 0xa8);
    for (lVar4 = *(long *)(param_1 + 0xa0); lVar4 != lVar2; lVar4 = lVar4 + 0x18) {
      *(undefined1 *)(lVar4 + 0x10) = 0;
    }
    lVar4 = *(long *)(param_1 + 0x70);
    lVar2 = *(long *)(param_1 + 0x78);
    if (lVar4 != lVar2) {
      uVar5 = (lVar2 + -0x20) - lVar4;
      uVar1 = ((uint)(uVar5 >> 5) & 0x7ffffff) + 1;
      if ((uVar1 & 7) != 0) {
        lVar6 = -((ulong)uVar1 & 7);
        do {
          *(undefined1 *)(lVar4 + 0x18) = 0;
          lVar4 = lVar4 + 0x20;
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0);
      }
      if (0xdf < uVar5) {
        do {
          *(undefined1 *)(lVar4 + 0x18) = 0;
          *(undefined1 *)(lVar4 + 0x38) = 0;
          *(undefined1 *)(lVar4 + 0x58) = 0;
          *(undefined1 *)(lVar4 + 0x78) = 0;
          *(undefined1 *)(lVar4 + 0x98) = 0;
          *(undefined1 *)(lVar4 + 0xb8) = 0;
          *(undefined1 *)(lVar4 + 0xd8) = 0;
          *(undefined1 *)(lVar4 + 0xf8) = 0;
          lVar4 = lVar4 + 0x100;
        } while (lVar2 != lVar4);
      }
    }
  }
  FUN_01336710(param_1);
  FUN_01336820(param_1);
  plVar7 = *(long **)(param_1 + 0x70);
  plVar3 = *(long **)(param_1 + 0x78);
  alStack_a0[0] = param_1;
  if (plVar7 != plVar3) {
    do {
      while (((*plVar7 != 0 && (*(int *)(*plVar7 + 0x54) != 0)) && ((char)plVar7[3] == '\0'))) {
        local_38 = plVar7;
        FUN_0133aba0(alStack_a0,&local_38);
        plVar7 = plVar7 + 4;
        if (plVar3 == plVar7) goto LAB_01336518;
      }
      plVar7 = plVar7 + 4;
    } while (plVar3 != plVar7);
  }
LAB_01336518:
  FUN_0133adf0(alStack_a0);
  FUN_013369d0(param_1);
  FUN_01336cd0(param_1);
  return;
}


