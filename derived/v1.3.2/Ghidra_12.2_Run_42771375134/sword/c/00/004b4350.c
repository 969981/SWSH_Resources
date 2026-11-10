/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b4350; name: FUN_004b4350
 */


void FUN_004b4350(ulong *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  
  puVar3 = PTR_DAT_02712a90;
  puVar4 = (ulong *)*param_1;
  puVar2 = (undefined4 *)PTR_DAT_02712a90;
  do {
    PTR_DAT_02712a90 = (undefined *)puVar2;
    if (puVar4 == (ulong *)0x0) {
      puVar4 = (ulong *)param_1[2];
      while (puVar4 != (ulong *)0x0) {
        puVar6 = (ulong *)*puVar4;
        if ((puVar4 < param_1[3]) ||
           (bVar1 = param_1[3] + (ulong)(uint)param_1[4] * 0x20 <= puVar4, puVar4 = puVar6, bVar1))
        {
          FUN_00404870(*puVar2);
          puVar4 = puVar6;
        }
      }
      if (param_1[3] != 0) {
        FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
        param_1[3] = 0;
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    *param_1 = *puVar4;
    if ((ulong *)param_1[1] == puVar4) {
      param_1[1] = 0;
      uVar5 = param_1[3];
      if (uVar5 <= puVar4) goto LAB_004b4394;
LAB_004b43c4:
      FUN_00404870(*(undefined4 *)puVar3);
    }
    else {
      uVar5 = param_1[3];
      if (puVar4 < uVar5) goto LAB_004b43c4;
LAB_004b4394:
      if (uVar5 + (ulong)(uint)param_1[4] * 0x20 <= puVar4) goto LAB_004b43c4;
      *puVar4 = param_1[2];
      param_1[2] = (ulong)puVar4;
    }
    puVar4 = (ulong *)*param_1;
    *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + -1;
    puVar2 = (undefined4 *)PTR_DAT_02712a90;
  } while( true );
}


