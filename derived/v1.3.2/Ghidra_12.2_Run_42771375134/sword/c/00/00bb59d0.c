/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb59d0; name: FUN_00bb59d0
 */


void FUN_00bb59d0(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  byte local_90 [64];
  undefined8 local_48;
  
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar7 == 0) {
    iVar1 = FUN_01509eb0(0);
  }
  else {
    plVar9 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    iVar1 = FUN_01509eb0(lVar7);
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  uVar2 = FUN_00bb48a0(param_1);
  if (param_2 == 0x20) {
    snprintf((char *)local_90,0x40,"button_box_%02d_search",iVar1);
  }
  else {
    snprintf((char *)local_90,0x40,"button_box_%02d_%02d",iVar1,param_2);
  }
  *(undefined8 *)(param_1 + 0x6c8) = 0;
  uVar8 = 0xcbf29ce484222645;
  if (local_90[0] != 0) {
    pbVar5 = (byte *)((ulong)local_90 | 1);
    do {
      uVar8 = (uVar8 ^ local_90[0]) * 0x100000001b3;
      local_90[0] = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (local_90[0] != 0);
  }
  uVar3 = FUN_016b7980(uVar2);
  iVar1 = (int)((ulong)uVar3 >> 0x20);
  if ((0 < iVar1) && (0 < (int)uVar3)) {
    iVar10 = 0;
    do {
      iVar11 = 0;
      do {
        local_48 = CONCAT44(iVar10,iVar11);
        uVar4 = FUN_016b7950(uVar2,&local_48);
        if (uVar4 == uVar8) {
          *(undefined8 *)(param_1 + 0x6c8) = local_48;
          return;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)uVar3);
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar1);
  }
  return;
}


