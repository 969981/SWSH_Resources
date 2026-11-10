/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c9a90; name: FUN_004c9a90
 */


undefined8 FUN_004c9a90(undefined8 param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *local_38;
  
  uVar3 = (**(code **)(*param_3 + 0x28))(param_3);
  puVar1 = PTR_DAT_02712ae0;
  if ((uVar3 & 1) != 0) {
    local_38 = (undefined8 *)0x0;
    lVar4 = FUN_00448fc0(*(undefined8 *)PTR_DAT_02712ae0,*(undefined4 *)((long)param_2 + 0xc),
                         &local_38);
    if (lVar4 != 0) {
      iVar2 = (**(code **)(*param_3 + 0x30))(param_3,lVar4,*param_2);
      if (iVar2 == 1) {
        if ((*param_2 != 0) && (*(int *)((long)param_2 + 0xc) != -1)) {
          FUN_00449180(*(undefined8 *)puVar1);
          puVar5 = (undefined8 *)param_2[2];
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5,0);
          }
        }
        *param_2 = lVar4;
        param_2[2] = (long)local_38;
        return 1;
      }
      FUN_00449180(*(undefined8 *)puVar1,*(undefined4 *)((long)param_2 + 0xc));
      if (local_38 != (undefined8 *)0x0) {
        (**(code **)*local_38)(local_38,0);
      }
    }
  }
  return 0;
}


