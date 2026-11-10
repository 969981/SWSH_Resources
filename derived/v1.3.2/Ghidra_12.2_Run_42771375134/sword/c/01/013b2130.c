/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013b2130; name: FUN_013b2130
 */


undefined8 FUN_013b2130(long param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 local_60;
  char *local_58;
  long local_50;
  long local_48;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar9 != (undefined8 *)0x0)) {
    plVar6 = (long *)(**(code **)*puVar9)(puVar9);
    lVar7 = FUN_0132d9a0();
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)lVar7) {
        puVar9 = puVar9 + -10;
        goto LAB_013b2194;
      }
    }
  }
  puVar9 = (undefined8 *)0x0;
LAB_013b2194:
  iVar2 = *(int *)(param_3 + 1);
  iVar3 = *(int *)(param_3 + 3);
  FUN_013b1c80(&local_60,param_1,*param_3);
  FUN_013b3260(puVar9[0xc],0x91f9ec803b4e9d02,&local_60,0);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (local_58 != (char *)0x0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = (char *)0x0;
  }
  FUN_012e7d50(param_2,iVar2,param_3[2]);
  puVar9 = (undefined8 *)FUN_012e3520(param_2);
  FUN_012b65a0(*puVar9);
  iVar5 = FUN_008783b0();
  if (iVar5 == 0x19) {
    bVar4 = true;
  }
  else {
    puVar9 = (undefined8 *)FUN_012e3520(param_2);
    FUN_012b65a0(*puVar9);
    iVar5 = FUN_008783b0();
    bVar4 = iVar5 == 0x85;
  }
  bVar1 = iVar3 - 1U < 2 & bVar4;
  FUN_012e7e70(param_2,iVar3,bVar1);
  if (bVar1 != 0) {
    if (iVar3 == 2) {
      local_60 = 0x264935960e220159;
      local_58 = "@Play_UI_Emotional_Confuse";
      local_50 = 0x1a;
    }
    else {
      if (iVar3 != 1) goto LAB_013b22f0;
      local_60 = 0x687ff3cccfa92f9;
      local_58 = "@Play_UI_Emotional_Hungry";
      local_50 = 0x19;
    }
    local_48 = 0;
    FUN_012d6d40(&local_60);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
  }
LAB_013b22f0:
  FUN_013b2420(param_2);
  if (iVar2 == 0x1b) {
    uVar8 = 1;
  }
  else if (iVar2 == 0x58) {
    uVar8 = 1;
    *(undefined1 *)(param_1 + 0x95) = 1;
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}


