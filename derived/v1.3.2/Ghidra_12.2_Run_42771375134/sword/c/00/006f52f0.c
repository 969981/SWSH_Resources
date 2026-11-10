/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f52f0; name: FUN_006f52f0
 */


void FUN_006f52f0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  uVar1 = 0;
  if (lVar3 - lVar2 != 0) {
    uVar1 = (lVar3 - lVar2 >> 3) * 0x38 - 1;
  }
  uVar5 = *(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x38);
  if (uVar1 == uVar5) {
    FUN_006f5410(param_1);
    uVar5 = *(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x40);
    lVar2 = *(long *)(param_1 + 8);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  if (lVar3 == lVar2) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)(*(long *)(lVar2 + (uVar5 / 0x38) * 8) + (uVar5 % 0x38) * 0x48);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar7;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  uVar7 = *param_2;
  uVar4 = *param_3;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  puVar6[6] = uVar7;
  puVar6[7] = uVar4;
  *(undefined4 *)(puVar6 + 8) = 0xffffffff;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
  return;
}


