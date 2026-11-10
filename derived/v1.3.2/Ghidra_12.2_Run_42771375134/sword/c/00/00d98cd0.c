/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d98cd0; name: FUN_00d98cd0
 */


uint FUN_00d98cd0(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0x4b8) == 1) {
    lVar5 = *(long *)(param_1 + 0x390);
  }
  else if (*(int *)(param_1 + 0x4b8) == 2) {
    lVar5 = *(long *)(param_1 + 0x4b0);
  }
  else {
    lVar5 = *(long *)(param_1 + 400);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_28 = 0;
  if (*(int *)(param_1 + 0x70) == 2) {
    iVar2 = *(int *)(param_1 + 0x4b8);
    puVar3 = &DAT_0264e640;
    if (iVar2 != 1) {
      puVar3 = &DAT_0264e628;
    }
    puVar4 = (undefined8 *)&DAT_0264e650;
  }
  else {
    if (*(int *)(param_1 + 0x70) != 3) {
      uVar1 = 1;
      goto joined_r0x00d98d9c;
    }
    iVar2 = *(int *)(param_1 + 0x4b8);
    puVar3 = (undefined8 *)&DAT_0264e618;
    if (iVar2 != 1) {
      puVar3 = &DAT_0264e608;
    }
    puVar4 = &DAT_0264e620;
  }
  if (iVar2 != 2) {
    puVar4 = puVar3;
  }
  local_28 = *puVar4;
  uVar1 = FUN_0167bc20(lVar5,&local_28);
joined_r0x00d98d9c:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return uVar1 & 1;
}


