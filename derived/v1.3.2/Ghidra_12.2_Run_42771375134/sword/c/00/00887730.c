/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00887730; name: FUN_00887730
 */


void FUN_00887730(long *param_1,long *param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  puVar1 = PTR_DAT_02717450;
  param_1[2] = 0;
  uVar9 = (ulong)param_3;
  *param_1 = (long)(puVar1 + 0x10);
  lVar5 = (uVar9 + (ulong)param_3 * 2) * 0x10;
  plVar8 = param_1 + 1;
  *plVar8 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(uint *)(param_1 + 5) = param_3;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,lVar5,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  lVar4 = *(long *)(lVar3 + 0x80) + 1;
  *(long *)(lVar3 + 0x80) = lVar4;
  if (param_3 != 0) {
    lVar4 = lVar2;
    do {
      FUN_00885fb0(lVar4,param_2);
      uVar9 = uVar9 - 1;
      lVar4 = lVar4 + 0x30;
    } while (uVar9 != 0);
    lVar4 = *(long *)(lVar3 + 0x80);
  }
  *(long *)(lVar3 + 0x80) = lVar4 + -1;
  puVar6 = (undefined8 *)*plVar8;
  *plVar8 = lVar2;
  if (puVar6 != (undefined8 *)0x0) {
    uVar9 = param_1[3];
    if (0x2f < uVar9) {
      uVar7 = 0;
      puVar10 = puVar6;
      do {
        (**(code **)*puVar10)(puVar10);
        uVar7 = uVar7 + 1;
        puVar10 = puVar10 + 6;
      } while (uVar7 < uVar9 / 0x30);
      uVar9 = param_1[3];
    }
    (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],puVar6,uVar9,param_1[4]);
  }
  param_1[2] = (long)param_2;
  param_1[3] = lVar5;
  param_1[4] = 8;
  return;
}


