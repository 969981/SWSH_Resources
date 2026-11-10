/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00886880; name: FUN_00886880
 */


void FUN_00886880(long *param_1,long *param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar1 = PTR_DAT_02717430;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  plVar7 = param_1 + 1;
  *plVar7 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(char *)(param_1 + 5) = (char)param_3;
  *(undefined1 *)((long)param_1 + 0x29) = 0;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)param_3 * 0x1a0,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  lVar4 = *(long *)(lVar3 + 0x80) + 1;
  *(long *)(lVar3 + 0x80) = lVar4;
  if (param_3 != 0) {
    uVar9 = (ulong)param_3;
    lVar4 = lVar2;
    do {
      FUN_00886cc0(lVar4);
      uVar9 = uVar9 - 1;
      lVar4 = lVar4 + 0x1a0;
    } while (uVar9 != 0);
    lVar4 = *(long *)(lVar3 + 0x80);
  }
  *(long *)(lVar3 + 0x80) = lVar4 + -1;
  puVar5 = (undefined8 *)*plVar7;
  *plVar7 = lVar2;
  if (puVar5 != (undefined8 *)0x0) {
    uVar9 = param_1[3];
    if (0x19f < uVar9) {
      uVar8 = 0;
      puVar6 = puVar5;
      do {
        (**(code **)*puVar6)(puVar6);
        uVar8 = uVar8 + 1;
        puVar6 = puVar6 + 0x34;
      } while (uVar8 < uVar9 / 0x1a0);
      uVar9 = param_1[3];
    }
    (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],puVar5,uVar9,param_1[4]);
  }
  param_1[2] = (long)param_2;
  param_1[3] = (ulong)param_3 * 0x1a0;
  param_1[4] = 8;
  return;
}


