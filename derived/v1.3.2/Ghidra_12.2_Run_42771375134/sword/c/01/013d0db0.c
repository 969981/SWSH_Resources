/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013d0db0; name: FUN_013d0db0
 */


void FUN_013d0db0(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = 0;
  if (lVar4 - lVar3 != 0) {
    lVar2 = (lVar4 - lVar3 >> 3) * 0x2a + -1;
  }
  uVar5 = *(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x38);
  if (lVar2 - uVar5 < param_2) {
    FUN_013d0f00(param_1,param_2 - (lVar2 - uVar5));
    uVar5 = *(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x40);
    lVar3 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  puVar1 = PTR_DAT_02710860;
  plVar6 = (long *)(lVar3 + (uVar5 / 0x2a) * 8);
  if (lVar4 == lVar3) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7 = (undefined8 *)(*plVar6 + (uVar5 % 0x2a) * 0x60);
  }
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar2 + 0x80)) break;
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar9;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    param_2 = param_2 - 1;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar8 = puVar7 + 0xc;
    *puVar7 = 0;
    puVar7[1] = 0;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    if ((long)puVar8 - *plVar6 == 0xfc0) {
      plVar6 = plVar6 + 1;
      puVar8 = (undefined8 *)*plVar6;
    }
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
    puVar7 = puVar8;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


