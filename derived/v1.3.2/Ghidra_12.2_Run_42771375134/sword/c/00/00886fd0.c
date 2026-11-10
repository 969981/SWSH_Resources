/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00886fd0; name: FUN_00886fd0
 */


void FUN_00886fd0(long *param_1,long *param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  uVar8 = (ulong)param_3;
  *param_1 = (long)(PTR_DAT_02717440 + 0x10);
  param_1[2] = 0;
  plVar7 = param_1 + 1;
  *plVar7 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(byte *)(param_1 + 5) = param_3;
  *(undefined1 *)((long)param_1 + 0x29) = 0;
  lVar4 = (uVar8 + (ulong)param_3 * 2) * 0x40;
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,lVar4,8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  lVar3 = *(long *)(lVar2 + 0x80) + 1;
  *(long *)(lVar2 + 0x80) = lVar3;
  if (param_3 != 0) {
    lVar3 = lVar1;
    do {
      FUN_0087f4c0(lVar3);
      uVar8 = uVar8 - 1;
      lVar3 = lVar3 + 0xc0;
    } while (uVar8 != 0);
    lVar3 = *(long *)(lVar2 + 0x80);
  }
  *(long *)(lVar2 + 0x80) = lVar3 + -1;
  puVar5 = (undefined8 *)*plVar7;
  *plVar7 = lVar1;
  if (puVar5 != (undefined8 *)0x0) {
    uVar8 = param_1[3];
    if (0xbf < uVar8) {
      uVar6 = 0;
      puVar9 = puVar5;
      do {
        (**(code **)*puVar9)(puVar9);
        uVar6 = uVar6 + 1;
        puVar9 = puVar9 + 0x18;
      } while (uVar6 < uVar8 / 0xc0);
      uVar8 = param_1[3];
    }
    (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],puVar5,uVar8,param_1[4]);
  }
  param_1[2] = (long)param_2;
  param_1[3] = lVar4;
  param_1[4] = 8;
  return;
}


