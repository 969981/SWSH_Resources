/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004661c0; name: FUN_004661c0
 */


void FUN_004661c0(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  *param_1 = (long)(PTR_DAT_02713100 + 0x10);
  puVar1 = PTR_DAT_02712b50;
  uVar2 = param_1[5];
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      uVar6 = 1L << (uVar3 & 0x3f);
      if ((uVar6 & uVar2) != 0) {
        FUN_0049b7f0(*(undefined8 *)puVar1,param_1,uVar3);
        uVar2 = param_1[5] & (uVar6 ^ 0xffffffffffffffff);
        param_1[5] = uVar2;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar2 != 0);
  }
  if ((int)param_1[7] != 0) {
    FUN_0049b7e0(*(undefined8 *)PTR_DAT_02712b50,param_1);
  }
  puVar1 = PTR_DAT_02712a90;
  lVar4 = param_1[3];
  lVar5 = lVar4;
  if ((int)param_1[4] != 0) {
    do {
      if (*(long *)(lVar5 + 0x10) != 0) {
        FUN_00480a30(*(long *)(lVar5 + 0x10),param_1);
        *(undefined8 *)(lVar5 + 0x10) = 0;
      }
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined4 *)(lVar5 + 8) = 0;
      if (*(long *)(lVar5 + 0x18) != 0) {
        FUN_00404870(*(undefined4 *)puVar1);
        *(undefined8 *)(lVar5 + 0x18) = 0;
      }
      *(undefined8 *)(lVar5 + 0x20) = 0;
      lVar4 = param_1[3];
      lVar5 = lVar5 + 0x30;
    } while (lVar5 != lVar4 + (ulong)*(uint *)(param_1 + 4) * 0x30);
  }
  if (lVar4 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,lVar4);
    param_1[3] = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  FUN_004635e0(param_1);
  return;
}


