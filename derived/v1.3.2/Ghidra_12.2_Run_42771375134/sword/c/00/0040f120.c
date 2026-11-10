/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040f120; name: FUN_0040f120
 */


undefined8 FUN_0040f120(long *param_1,char *param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  char *pcVar8;
  ulong __n;
  undefined4 local_44;
  char *local_38;
  
  local_44 = param_3;
  local_38 = param_2;
  iVar4 = (**(code **)(*param_1 + 0x88))();
  if (iVar4 != 9) {
    uVar6 = *(undefined8 *)PTR_DAT_02712ae0;
    lVar2 = param_1[2];
    uVar5 = (**(code **)(*param_1 + 0x88))(param_1);
    FUN_00449c90(uVar6,(int)lVar2,9,uVar5);
    return 0x5a;
  }
  uVar6 = FUN_00415340(param_1,&local_38,&local_44,0);
  if ((int)uVar6 != 1) {
    return uVar6;
  }
  pcVar8 = local_38 + 5;
  *(bool *)(param_1 + 0x25) = *local_38 != '\0';
  uVar1 = *(uint *)(local_38 + 1);
  __n = (ulong)(uVar1 << 2);
  local_38 = pcVar8;
  if (param_1[0x26] != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0x26] = 0;
  }
  if (param_1[0x27] != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0x27] = 0;
  }
  puVar3 = PTR_DAT_02712a90;
  pvVar7 = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,__n);
  param_1[0x26] = (long)pvVar7;
  if (pvVar7 == (void *)0x0) {
    if (uVar1 != 0) {
      return 0x34;
    }
  }
  else {
    memcpy(pvVar7,pcVar8,__n);
    pvVar7 = (void *)FUN_00404690(*(undefined4 *)puVar3,(ulong)uVar1);
    param_1[0x27] = (long)pvVar7;
    if (pvVar7 == (void *)0x0) {
      return 0x34;
    }
    memcpy(pvVar7,pcVar8 + __n,(ulong)uVar1);
  }
  pcVar8 = local_38 + uVar1 * 5;
  local_38 = pcVar8 + 5;
  uVar5 = *(undefined4 *)pcVar8;
  *(char *)((long)param_1 + 0x122) = pcVar8[4];
  uVar6 = FUN_0045b710(param_1 + 0x22,local_38,uVar5,uVar1);
  return uVar6;
}


