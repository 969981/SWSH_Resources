/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e01490; name: FUN_00e01490
 */


void FUN_00e01490(long param_1,long param_2,int param_3)

{
  long *plVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  
  puVar3 = PTR_DAT_02710860;
  if (0 < param_3) {
    lVar8 = 0;
    do {
      while( true ) {
        plVar1 = (long *)(param_2 + lVar8 * 8);
        lVar4 = *plVar1;
        if (lVar4 != -0x340d631b7bddd9bb) break;
LAB_00e0157c:
        lVar8 = lVar8 + 1;
        if (param_3 <= lVar8) {
          return;
        }
      }
      plVar9 = *(long **)(param_1 + 0x2e8);
      if (*(long **)(param_1 + 0x2e0) != plVar9) {
        bVar2 = false;
        plVar6 = *(long **)(param_1 + 0x2e0);
        do {
          plVar5 = plVar6 + 1;
          lVar7 = *plVar6;
          bVar2 = (bool)(bVar2 | lVar7 == lVar4);
          plVar6 = plVar5;
        } while (lVar7 != lVar4 && plVar9 != plVar5);
        if (bVar2) goto LAB_00e0157c;
      }
      if (plVar9 != *(long **)(param_1 + 0x2f0)) {
        uVar10 = *(undefined8 *)(param_1 + 0x2f8);
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar10;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        *plVar9 = *plVar1;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        *(long *)(param_1 + 0x2e8) = *(long *)(param_1 + 0x2e8) + 8;
        goto LAB_00e0157c;
      }
      FUN_015c3280(param_1 + 0x2e0,plVar1);
      lVar8 = lVar8 + 1;
    } while (lVar8 < param_3);
  }
  return;
}


