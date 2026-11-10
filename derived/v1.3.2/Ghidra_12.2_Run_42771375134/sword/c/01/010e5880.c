/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010e5880; name: FUN_010e5880
 */


bool FUN_010e5880(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  long local_28;
  
  if (*(char *)(param_1 + 0x70) == '\0') {
    return false;
  }
  if (*(int *)(param_1 + 0x74) == 1) {
    uVar5 = FUN_00ff0890(*(undefined8 *)(param_1 + 0x68));
    if ((uVar5 & 1) == 0) {
      return *(char *)(param_1 + 0x70) != '\0';
    }
    uVar6 = *(undefined8 *)(param_1 + 0x68);
    local_28 = *(long *)(param_1 + 0x90);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    iVar1 = FUN_00ff1fb0(uVar6,&local_28);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    FUN_00ff08c0(*(undefined8 *)(param_1 + 0x68));
    if (iVar1 == 0) {
      local_30 = 0;
      local_40 = 0;
      uStack_38 = 0;
      uVar6 = FUN_0077d470(*(undefined8 *)(param_1 + 0x90));
      uVar2 = FUN_0077d490(*(undefined8 *)(param_1 + 0x90));
      FUN_0077dea0(&local_40,0x11,uVar6,uVar2);
      *(undefined1 *)(param_1 + 0x89) = local_30;
      *(undefined8 *)(param_1 + 0x81) = uStack_38;
      *(undefined8 *)(param_1 + 0x79) = local_40;
      if (*(char *)(param_1 + 0x78) == '\0') {
        *(undefined1 *)(param_1 + 0x78) = 1;
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x74) != 0) {
      return true;
    }
    lVar3 = FUN_00ff07b0(*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 0x68) = lVar3;
    lVar4 = FUN_00ff0930();
    if (lVar3 != lVar4) {
      *(undefined4 *)(param_1 + 0x74) = 1;
      *(undefined1 *)(param_1 + 0x70) = 1;
      return true;
    }
  }
  *(undefined1 *)(param_1 + 0x70) = 0;
  return false;
}


