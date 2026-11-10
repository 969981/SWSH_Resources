/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f4380; name: FUN_004f4380
 */


void FUN_004f4380(long param_1,ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  
  if ((param_2 & 1) != 0) {
    local_70 = *(undefined8 *)(param_1 + 8);
    local_68 = 0;
    local_60 = 0;
    local_58 = 0xff;
    local_50 = 0xff;
    local_48 = 0;
    FUN_0049f0a0(0,*(undefined8 *)PTR_DAT_02712b50,8,&local_70);
  }
  puVar3 = PTR_DAT_02712d20;
  FUN_00498cc0(*(undefined4 *)(param_1 + 0x110),0,*(undefined8 *)PTR_DAT_02712d20,
               *(long *)(param_1 + 8),
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0xd8) + 8) + 0x48));
  lVar6 = -4;
  if (*(long *)(param_1 + 0x30) != -1) {
    lVar6 = *(long *)(param_1 + 0x30);
  }
  puVar4 = (undefined8 *)FUN_00497c70(*(undefined8 *)puVar3,lVar6);
  if (puVar4 != (undefined8 *)0x0) {
    iVar1 = *(int *)(puVar4 + 10);
    *(int *)(puVar4 + 10) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      uVar2 = *(undefined4 *)PTR_DAT_02712a90;
      (**(code **)*puVar4)(puVar4);
      FUN_00404870(uVar2,puVar4);
    }
    lVar6 = -4;
    if (*(long *)(param_1 + 0x30) != -1) {
      lVar6 = *(long *)(param_1 + 0x30);
    }
    FUN_00498cc0(0,0,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 8),lVar6);
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0xd8) + 0x30);
  lVar6 = -4;
  if (lVar5 != -1) {
    lVar6 = lVar5;
  }
  puVar4 = (undefined8 *)FUN_00497c70(*(undefined8 *)puVar3,lVar6);
  if (puVar4 != (undefined8 *)0x0) {
    iVar1 = *(int *)(puVar4 + 10);
    *(int *)(puVar4 + 10) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      uVar2 = *(undefined4 *)PTR_DAT_02712a90;
      (**(code **)*puVar4)(puVar4);
      FUN_00404870(uVar2,puVar4);
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0xd8) + 0x30);
    lVar6 = -4;
    if (lVar5 != -1) {
      lVar6 = lVar5;
    }
    FUN_00498cc0(0,0,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 8),lVar6);
  }
  lVar6 = *(long *)(param_1 + 8);
  if ((*(int *)(lVar6 + 0x40) != 0) && (lVar6 = **(long **)(lVar6 + 0x38), lVar6 != 0)) {
    local_4c = 0xffffffff;
    memcpy(&local_70,(void *)(param_1 + 0xb0),0x24);
    FUN_00496290(lVar6,&local_70,1,0);
  }
  return;
}


