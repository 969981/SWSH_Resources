/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047f3f0; name: FUN_0047f3f0
 */


int FUN_0047f3f0(undefined8 *param_1,long param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  int *piVar5;
  
  puVar2 = PTR_DAT_02712a90;
  plVar4 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x48);
  if (plVar4 != (long *)0x0) {
    FUN_0043c780(plVar4,*(undefined8 *)(param_2 + 0x10));
    iVar3 = FUN_00441a50(param_4,*param_1,plVar4);
    if ((iVar3 == 1) && (iVar3 = FUN_00441ac0(param_4,param_1[1],plVar4), iVar3 == 1)) {
      FUN_00441b30(param_4,param_1[2]);
      iVar3 = (**(code **)(*param_4 + 0x38))(param_4,0xf,param_3,0,0);
      if (iVar3 != 1) {
        uVar1 = *(undefined4 *)puVar2;
        (**(code **)(*plVar4 + 8))(plVar4);
        FUN_00404870(uVar1,plVar4);
        return iVar3;
      }
      plVar4[1] = (long)param_4;
      *(undefined4 *)(plVar4 + 6) = *(undefined4 *)(param_2 + 0x34);
      *(undefined8 *)((long)plVar4 + 0x24) = *(undefined8 *)(param_2 + 0x28);
      *(undefined4 *)((long)plVar4 + 0x2c) = *(undefined4 *)(param_2 + 0x30);
      piVar5 = *(int **)(param_2 + 0x20);
      if (*(long *)((long)plVar4 + 0x1c) != 0) {
        FUN_00431200();
      }
      if (piVar5 != (int *)0x0) {
        *piVar5 = *piVar5 + 1;
      }
      *(int **)((long)plVar4 + 0x1c) = piVar5;
      FUN_00438380(*(undefined8 *)PTR_DAT_02712de0,plVar4);
      return 1;
    }
    uVar1 = *(undefined4 *)puVar2;
    (**(code **)(*plVar4 + 8))(plVar4);
    FUN_00404870(uVar1,plVar4);
  }
  return 0x34;
}


